/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Towel.h"

using namespace images;

Towel::Towel(Colors EColorLight, int nX, int nY)
      : Image(createAnnotationVector(),
              createBrightPalette(EColorLight),
              createDarkPalette(),
              createBounds(nX, nY)) {
}

std::vector<ImageAnnotation> Towel::createAnnotationVector() {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CTowel1 = ImageAnnotation("●", 1, 0);
    ImageAnnotation CTowel2 = ImageAnnotation("╚", 1, 0);
    ImageAnnotation CTowel3 = ImageAnnotation("╝", 1, 0);

    ImageAnnotation CTowel4 = ImageAnnotation("╦═══╦╦", 6, 1);

    ImageAnnotation CTowel5 = ImageAnnotation("║", 1, 2);
    ImageAnnotation CTowel6 = ImageAnnotation("█", 1, 3);
    ImageAnnotation CTowel7 = ImageAnnotation("█", 1, 4);

    ImageAnnotation CTowel8 = ImageAnnotation("║", 1, 1);
    ImageAnnotation CTowel9 = ImageAnnotation("╝", 1, 1);
    ImageAnnotation CTowel10 = ImageAnnotation("╚═══╝", 5, 1);

    ImageAnnotation CSpace = ImageAnnotation(" ", 1, 5);

    vecAnnotation = {CTowel1,
                     CSpace, CSpace, CSpace, CSpace, CSpace,
                     CSpace,
                     CTowel1,

                     CTowel2,
                     CTowel4,
                     CTowel3,

                     CSpace,
                     CTowel5,
                     CTowel6, CTowel7, CTowel6,
                     CTowel5, CTowel8,
                     CSpace,

                     CSpace,
                     CTowel5,
                     CTowel6, CTowel7, CTowel6,
                     CTowel5, CTowel9,
                     CSpace,

                     CSpace,
                     CTowel10,
                     CSpace, CSpace};

    return vecAnnotation;
}

Palette Towel::createBrightPalette(Colors EColorLight) {
    Palette CPalette = Palette({Colors::SINK_V_DARK,
                                Colors::SINK_MID,
                                Colors::SINK_LIGHT,
                                Colors::WHITE,
                                EColorLight,

                                Colors::WHITE},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::WHITE,
                                EColorLight,
                                
                                Colors::CLEAR});
    return CPalette;
}

Palette Towel::createDarkPalette() {
    Palette CPalette = Palette({Colors::SINK_V_DARK,
                                Colors::SINK_MID,
                                Colors::SINK_LIGHT,
                                Colors::WHITE,
                                Colors::SINK_LIGHT,

                                Colors::WHITE},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::WHITE,
                                Colors::SINK_LIGHT,
                                
                                Colors::CLEAR});
    return CPalette;
}

Bounds Towel::createBounds(int nX, int nY) {
    return Bounds(nX, nY, 8, 5);
}
