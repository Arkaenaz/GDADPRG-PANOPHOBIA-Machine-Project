/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "FrameType3.h"

using namespace images;

/*
    Pre-requisites:
        [1] CBounds.nWidth is an odd number.
*/
FrameType3::FrameType3(Palette CBright, Bounds CBounds)
          : Image(createAnnotationVector(CBounds),
                  CBright,
                  createDarkPalette(),
                  CBounds) {
}

std::vector<ImageAnnotation> FrameType3::createAnnotationVector(Bounds CBounds) {
    std::vector<ImageAnnotation> vecAnnotation;
    bool isFlag;

    ImageAnnotation CFrame1 = ImageAnnotation("╔", 1, 0);
    ImageAnnotation CFrame2 = ImageAnnotation("═", 1, 0);
    ImageAnnotation CFrame3 = ImageAnnotation("╦", 1, 0);
    ImageAnnotation CFrame4 = ImageAnnotation("╗", 1, 0);

    ImageAnnotation CFrame5 = ImageAnnotation("║", 1, 0);
    ImageAnnotation CFrame6 = ImageAnnotation("║", 1, 3);
    ImageAnnotation CFrame7 = ImageAnnotation("█", 1, 1);
    ImageAnnotation CFrame8 = ImageAnnotation("█", 1, 2);
    
    ImageAnnotation CFrame9 = ImageAnnotation("╚", 1, 3);
    ImageAnnotation CFrame10 = ImageAnnotation("═", 1, 3);
    ImageAnnotation CFrame11 = ImageAnnotation("╩", 1, 3);
    ImageAnnotation CFrame12 = ImageAnnotation("╝", 1, 3);

    ImageAnnotation CFrameType = CFrame5;

    vecAnnotation.push_back(CFrame1);
    for(int i = 0; i < (CBounds.getWidth() - 2); i++) {
        if(i == ((CBounds.getWidth() - 2) / 2))
            vecAnnotation.push_back(CFrame3);
        else
            vecAnnotation.push_back(CFrame2);
    }
    vecAnnotation.push_back(CFrame4);

    for(int i = 0; i < (CBounds.getHeight() - 2); i++) {
        if(i > ((CBounds.getHeight() - 2) / 2))
            CFrameType = CFrame6;

        vecAnnotation.push_back(CFrameType);
        isFlag = true;
        for(int j = 0; j < (CBounds.getWidth() - 2); j++) {
            if(j == ((CBounds.getWidth() - 2) / 2))
                vecAnnotation.push_back(CFrameType);
            else {
                if(isFlag)
                    vecAnnotation.push_back(CFrame7);
                else
                    vecAnnotation.push_back(CFrame8);
                isFlag = !isFlag;
            }
        }
        vecAnnotation.push_back(CFrameType);
    }

    vecAnnotation.push_back(CFrame9);
    for(int i = 0; i < (CBounds.getWidth() - 2); i++) {
        if(i == ((CBounds.getWidth() - 2) / 2))
            vecAnnotation.push_back(CFrame11);
        else
            vecAnnotation.push_back(CFrame10);
    }
    vecAnnotation.push_back(CFrame12);

    return vecAnnotation;
}

Palette FrameType3::createDarkPalette() {
    Palette CPalette = Palette({Colors::FRAME_LIGHT,
                                Colors::FRAME_MID,
                                Colors::FRAME_DARK,
                                Colors::FRAME_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}
