/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "FrameType6.h"

using namespace images;

/*
    Pre-requisites:
        [1] CBright has at least 5 colours.
*/
FrameType6::FrameType6(Palette CBright, Bounds CBounds)
           : Image(createAnnotationVector(CBounds),
                   CBright,
                   createDarkPalette(),
                   CBounds) {
}

std::vector<ImageAnnotation> FrameType6::createAnnotationVector(Bounds CBounds) {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CFrame1 = ImageAnnotation("╔", 1, 0);
    ImageAnnotation CFrame2 = ImageAnnotation("═", 1, 0);
    ImageAnnotation CFrame3 = ImageAnnotation("╗", 1, 0);

    ImageAnnotation CFrame4 = ImageAnnotation("║", 1, 0);
    ImageAnnotation CFrame5 = ImageAnnotation("║", 1, 4);
    
    ImageAnnotation CFrame6 = ImageAnnotation("█", 1, 1);
    ImageAnnotation CFrame7 = ImageAnnotation("█", 1, 2);
    ImageAnnotation CFrame8 = ImageAnnotation("█", 1, 3);
    
    ImageAnnotation CFrame9 = ImageAnnotation("╚", 1, 4);
    ImageAnnotation CFrame10 = ImageAnnotation("═", 1, 4);
    ImageAnnotation CFrame11 = ImageAnnotation("╝", 1, 4);

    ImageAnnotation CFrameType = CFrame4;

    vecAnnotation.push_back(CFrame1);
    for(int i = 0; i < (CBounds.getWidth() - 2); i++) {
        vecAnnotation.push_back(CFrame2);
    }
    vecAnnotation.push_back(CFrame3);

    for(int i = 0; i < (CBounds.getHeight() - 2); i++) {
        if(i > ((CBounds.getHeight() - 2) / 2))
            CFrameType = CFrame5;

        vecAnnotation.push_back(CFrameType);

        for(int j = 0; j < (CBounds.getWidth() - 2); j++) {
            if(j >= CBounds.getWidth() - 4) {
                if(i == 0)
                    vecAnnotation.push_back(CFrame7);
                else
                    vecAnnotation.push_back(CFrame8);
            }
            else {
                vecAnnotation.push_back(CFrame6);
            }
        }
        vecAnnotation.push_back(CFrameType);
    }

    vecAnnotation.push_back(CFrame9);
    for(int i = 0; i < (CBounds.getWidth() - 2); i++) {
        vecAnnotation.push_back(CFrame10);
    }
    vecAnnotation.push_back(CFrame11);

    return vecAnnotation;
}

Palette FrameType6::createDarkPalette() {
    Palette CPalette = Palette({Colors::FRAME_LIGHT,
                                Colors::FRAME_MID,
                                Colors::FRAME_V_LIGHT,
                                Colors::FRAME_DARK,
                                Colors::FRAME_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}
