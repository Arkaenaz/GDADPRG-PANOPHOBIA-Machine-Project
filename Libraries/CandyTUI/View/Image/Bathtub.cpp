/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Bathtub.h"

using namespace images;

Bathtub::Bathtub(int nX, int nY)
        : Image(createAnnotationVector(),
                createBrightPalette(),
                createDarkPalette(),
                createBounds(nX, nY)) {
}

std::vector<ImageAnnotation> Bathtub::createAnnotationVector() {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CTub1 = ImageAnnotation("▄", 1, 0);
    ImageAnnotation CTub2 = ImageAnnotation("║", 1, 1);
    ImageAnnotation CTub3 = ImageAnnotation("╔", 1, 2);
    ImageAnnotation CTub4 = ImageAnnotation("╗", 1, 2);

    ImageAnnotation CTub5 = ImageAnnotation("​​▀", 1, 3);
    ImageAnnotation CTub6 = ImageAnnotation("​​█", 1, 4);

    ImageAnnotation CTub7 = ImageAnnotation("╚╗", 2, 5);
    ImageAnnotation CTub8 = ImageAnnotation("╔╝", 2, 5);

    ImageAnnotation CTub9 = ImageAnnotation("╚╦╦═══════════╦╦╝", 17, 1);

    ImageAnnotation CTub10 = ImageAnnotation("╚╝           ╚╝", 15, 5);

    ImageAnnotation CSpace = ImageAnnotation(" ", 1, 6);

    vecAnnotation = {CSpace, CSpace, CSpace, CSpace, CSpace,
                     CSpace, CSpace, CSpace, CSpace, CSpace,
                     CSpace, CSpace, CSpace,
                     CTub1,
                     CSpace, CSpace, CSpace, CSpace, CSpace,
                     
                     CSpace, CSpace, CSpace, CSpace, CSpace,
                     CSpace, CSpace, CSpace, CSpace, CSpace,
                     CSpace,
                     CTub1, CSpace, CTub2, CSpace, CTub1,
                     CSpace, CSpace, CSpace,

                     CTub3,
                     CTub5, CTub5, CTub5, CTub5, CTub5,
                     CTub5, CTub5, CTub5, CTub5, CTub5,
                     CTub5, CTub5, CTub5, CTub5, CTub5, 
                     CTub5, CTub5,
                     CTub4,

                     CTub2,
                     CTub6, CTub6, CTub6, CTub6, CTub6,
                     CTub6, CTub6, CTub6, CTub6, CTub6,
                     CTub6, CTub6, CTub6, CTub6, CTub6,
                     CTub6, CTub6,
                     CTub2,

                     CTub7,
                     CTub5, CTub5, CTub5, CTub5, CTub5,
                     CTub5, CTub5, CTub5, CTub5, CTub5,
                     CTub5, CTub5, CTub5, CTub5, CTub5,
                     CTub8,

                     CSpace,
                     CTub9,
                     CSpace,

                     CSpace, CSpace,
                     CTub10,
                     CSpace, CSpace};

    return vecAnnotation;
}

Palette Bathtub::createBrightPalette() {
    Palette CPalette = Palette({Colors::SINK_MID,
                                Colors::SINK_LIGHT,
                                Colors::SINK_V_LIGHT,
                                Colors::WHITE,
                                Colors::WHITE,

                                Colors::SINK_V_DARK,
                                Colors::WHITE},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::SINK_V_LIGHT,
                                Colors::WHITE,

                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette Bathtub::createDarkPalette() {
    Palette CPalette = Palette({Colors::SINK_MID,
                                Colors::SINK_LIGHT,
                                Colors::SINK_V_LIGHT,
                                Colors::WHITE,
                                Colors::WHITE,

                                Colors::SINK_V_DARK,
                                Colors::WHITE},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::SINK_V_LIGHT,
                                Colors::WHITE,

                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Bounds Bathtub::createBounds(int nX, int nY) {
    return Bounds(nX, nY, 19, 7);
}
