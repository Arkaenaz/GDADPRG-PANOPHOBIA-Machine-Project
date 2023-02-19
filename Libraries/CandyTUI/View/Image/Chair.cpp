/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Chair.h"

using namespace images;

Chair::Chair(Colors EColorLight, Colors EColorMid, Colors EColorDark, int nX, int nY)
      : Image(createAnnotationVector(),
              createBrightPalette(EColorLight, EColorMid, EColorDark),
              createDarkPalette(),
              createBounds(nX, nY)) {
}

std::vector<ImageAnnotation> Chair::createAnnotationVector() {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CChair1 = ImageAnnotation("╔═══╗", 5, 0);
    ImageAnnotation CChair2 = ImageAnnotation("║", 1, 0);
    ImageAnnotation CChair3 = ImageAnnotation("║", 1, 2);
    ImageAnnotation CChair4 = ImageAnnotation("███", 3, 1);
    ImageAnnotation CChair5 = ImageAnnotation("███", 3, 3);
    ImageAnnotation CChair6 = ImageAnnotation("╚═══╝", 5, 2);

    ImageAnnotation CChair7 = ImageAnnotation("╔", 1, 2);
    ImageAnnotation CChair8 = ImageAnnotation("▀", 1, 4);
    ImageAnnotation CChair9 = ImageAnnotation("▀", 1, 5);
    ImageAnnotation CChair10 = ImageAnnotation("╗", 1, 2);

    ImageAnnotation CChair11 = ImageAnnotation("╠╦═══╦╣", 7, 2);
    ImageAnnotation CChair12 = ImageAnnotation("╚╝   ╚╝", 7, 2);

    ImageAnnotation CSpace = ImageAnnotation(" ", 1, 0);

    vecAnnotation = {CSpace, CChair1, CSpace,
                     CSpace, CChair2, CChair4, CChair2, CSpace,
                     CSpace, CChair3, CChair5, CChair3, CSpace,
                     CSpace, CChair6, CSpace,
                     CChair7, CChair8, CChair9, CChair8, CChair9, CChair8, CChair10,
                     CChair11,
                     CChair12};

    return vecAnnotation;
}

Palette Chair::createBrightPalette(Colors EColorLight, Colors EColorMid, Colors EColorDark) {
    Palette CPalette = Palette({Colors::CHAIR_BROWN_LIGHT,
                                EColorLight,
                                Colors::CHAIR_BROWN_DARK,
                                EColorMid,
                                EColorDark,
                                EColorDark,
                                Colors::WHITE},

                               {Colors::CLEAR,
                                EColorLight,
                                Colors::CLEAR,
                                EColorMid,
                                Colors::CHAIR_FOAM_DARK,
                                Colors::CHAIR_FOAM_LIGHT,
                                Colors::CLEAR});
    return CPalette;
}

Palette Chair::createDarkPalette() {
    Palette CPalette = Palette({Colors::CHAIR_V_LIGHT,
                                Colors::CHAIR_LIGHT,
                                Colors::CHAIR_V_DARK,
                                Colors::CHAIR_MID,
                                Colors::CHAIR_DARK,
                                Colors::CHAIR_DARK,
                                Colors::WHITE},

                               {Colors::CLEAR,
                                Colors::CHAIR_LIGHT,
                                Colors::CLEAR,
                                Colors::CHAIR_MID,
                                Colors::CHAIR_FOAM_DARK,
                                Colors::CHAIR_FOAM_LIGHT,
                                Colors::CLEAR});
    return CPalette;
}

Bounds Chair::createBounds(int nX, int nY) {
    return Bounds(nX, nY, 7, 7);
}
