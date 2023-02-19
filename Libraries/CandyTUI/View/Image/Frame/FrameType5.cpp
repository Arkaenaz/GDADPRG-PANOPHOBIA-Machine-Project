/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "FrameType5.h"

using namespace images;

/*
    Pre-requisites:
        [1] CBounds.nHeight is ideally even.
        [2] CBright has at least 2 colours.
*/
FrameType5::FrameType5(Palette CBright, Bounds CBounds)
          : Image(createAnnotationVector(CBounds),
                  CBright,
                  createDarkPalette(),
                  CBounds) {
}

std::vector<ImageAnnotation> FrameType5::createAnnotationVector(Bounds CBounds) {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CFrame1 = ImageAnnotation("╔", 1, 0);
    ImageAnnotation CFrame2 = ImageAnnotation("╦", 1, 0);
    ImageAnnotation CFrame3 = ImageAnnotation("╗", 1, 0);

    ImageAnnotation CFrame4 = ImageAnnotation("║", 1, 0);
    ImageAnnotation CFrame5 = ImageAnnotation("║", 1, 1);
    
    ImageAnnotation CFrame6 = ImageAnnotation("╚", 1, 1);
    ImageAnnotation CFrame7 = ImageAnnotation("╩", 1, 1);
    ImageAnnotation CFrame8 = ImageAnnotation("╝", 1, 1);

    ImageAnnotation CFrameType = CFrame4;

    vecAnnotation.push_back(CFrame1);
    for(int i = 0; i < (CBounds.getWidth() - 2); i++) {
            vecAnnotation.push_back(CFrame2);
    }
    vecAnnotation.push_back(CFrame3);

    for(int i = 0; i < (CBounds.getHeight() - 2); i++) {
        if(i > ((CBounds.getHeight() - 2) / 2) - 1)
            CFrameType = CFrame5;
        
        vecAnnotation.push_back(CFrameType);
        for(int j = 0; j < (CBounds.getWidth() - 2); j++) {
            vecAnnotation.push_back(CFrameType);
        }
        vecAnnotation.push_back(CFrameType);
    }

    vecAnnotation.push_back(CFrame6);
    for(int i = 0; i < (CBounds.getWidth() - 2); i++) {
            vecAnnotation.push_back(CFrame7);
    }
    vecAnnotation.push_back(CFrame8);

    return vecAnnotation;
}

Palette FrameType5::createDarkPalette() {
    Palette CPalette = Palette({Colors::FRAME_LIGHT,
                                Colors::FRAME_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}
