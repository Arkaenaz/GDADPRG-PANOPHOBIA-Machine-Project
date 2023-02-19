/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Border.h"

using namespace images;

Border::Border(Colors EColorLight, Colors EColorDark, BorderTypes EType, int nWidth)
       : Image(createAnnotationVector(EType, nWidth),
               createBrightPalette(EColorLight, EColorDark),
               createDarkPalette(),
               createBounds(nWidth)) {
}

std::vector<ImageAnnotation> Border::createAnnotationVector(BorderTypes EType, int nWidth) {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CBorder1 = ImageAnnotation("███", 3, 0);
    ImageAnnotation CBorder2 = ImageAnnotation("███", 3, 1);

    ImageAnnotation CBorder3 = ImageAnnotation("▀", 1, 2);
    ImageAnnotation CBorder4 = ImageAnnotation("▄", 1, 2);

    if(EType == BorderTypes::BOTTOM) {
        for(int i = 0; i < nWidth; i++) {
            vecAnnotation.push_back(CBorder4);
        }
    }
    
    for(int i = 0; i < (nWidth / 3); i++) {
        if(i % 2 == 0)
            vecAnnotation.push_back(CBorder1);
        else
            vecAnnotation.push_back(CBorder2);
    }

    if(EType == BorderTypes::TOP) {
        for(int i = 0; i < nWidth; i++) {
            vecAnnotation.push_back(CBorder3);
        }
    }

    return vecAnnotation;
}

Palette Border::createBrightPalette(Colors EColorLight, Colors EColorDark) {
    Palette CPalette = Palette({EColorLight,
                                EColorDark,
                                Colors::WHITE},

                               {EColorLight,
                                EColorDark,
                                Colors::CLEAR});
    return CPalette;
}

Palette Border::createDarkPalette() {
    Palette CPalette = Palette({Colors::OFF_MID,
                                Colors::OFF_DARK,
                                Colors::WHITE},

                               {Colors::OFF_MID,
                                Colors::OFF_DARK,
                                Colors::CLEAR});
    return CPalette;
}

Bounds Border::createBounds(int nWidth) {
    return Bounds(0, 0, nWidth, 2);
}
