/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "FrameType1.h"

using namespace images;

/*
    Pre-requisites:
        [1] CBright has at least 4 colours.
*/
FrameType1::FrameType1(Palette CBright, Bounds CBounds)
           : Image(createAnnotationVector(CBounds),
                   CBright,
                   createDarkPalette(),
                   CBounds) {
}

std::vector<ImageAnnotation> FrameType1::createAnnotationVector(Bounds CBounds) {
    std::vector<ImageAnnotation> vecAnnotation;
    
    ImageAnnotation CFrame1 = ImageAnnotation("╔", 1, 0);
    ImageAnnotation CFrame2 = ImageAnnotation("═", 1, 0);
    ImageAnnotation CFrame3 = ImageAnnotation("╗", 1, 0);

    ImageAnnotation CFrame4 = ImageAnnotation("║", 1, 0);
    ImageAnnotation CFrame5 = ImageAnnotation("║", 1, 3);
    ImageAnnotation CFrame6 = ImageAnnotation("█", 1, 1);
    ImageAnnotation CFrame7 = ImageAnnotation("█", 1, 2);
    
    ImageAnnotation CFrame8 = ImageAnnotation("╚", 1, 3);
    ImageAnnotation CFrame9 = ImageAnnotation("═", 1, 3);
    ImageAnnotation CFrame10 = ImageAnnotation("╝", 1, 3);

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
            if(j % 2)
                vecAnnotation.push_back(CFrame6);
            else
                vecAnnotation.push_back(CFrame7);
        }
        vecAnnotation.push_back(CFrameType);
    }

    vecAnnotation.push_back(CFrame8);
    for(int i = 0; i < (CBounds.getWidth() - 2); i++) {
        vecAnnotation.push_back(CFrame9);
    }
    vecAnnotation.push_back(CFrame10);

    return vecAnnotation;
}

Palette FrameType1::createDarkPalette() {
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
