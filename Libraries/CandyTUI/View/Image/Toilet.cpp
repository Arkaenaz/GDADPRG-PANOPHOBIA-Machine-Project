/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Toilet.h"

using namespace images;

Toilet::Toilet(int nX, int nY)
       : Image(createAnnotationVector(),
               createBrightPalette(),
               createDarkPalette(),
               createBounds(nX, nY)) {
}

std::vector<ImageAnnotation> Toilet::createAnnotationVector() {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CToilet1 = ImageAnnotation("●", 1, 0);
    ImageAnnotation CToilet2 = ImageAnnotation("═══", 3, 1);
    ImageAnnotation CToilet3 = ImageAnnotation("║", 1, 1);
    ImageAnnotation CToilet4 = ImageAnnotation("█", 1, 2);
    ImageAnnotation CToilet5 = ImageAnnotation("▀", 1, 3);
    ImageAnnotation CToilet6 = ImageAnnotation("╔╩═══╩╗", 7, 0);
    ImageAnnotation CToilet7 = ImageAnnotation("╚═╦═╦═╝", 7, 4);
    ImageAnnotation CToilet8 = ImageAnnotation("╔╩═╩╗", 5, 4);

    ImageAnnotation CSpace = ImageAnnotation(" ", 1, 5);
    

    vecAnnotation = {CSpace,
                     CToilet1, CToilet2, CToilet1,
                     CSpace,

                     CSpace,
                     CToilet3,
                     CToilet4, CToilet4, CToilet4,
                     CToilet3,
                     CSpace,

                     CSpace,
                     CToilet3,
                     CToilet5, CToilet5, CToilet5,
                     CToilet3,
                     CSpace,

                     CToilet6,

                     CToilet7,

                     CSpace, CSpace,
                     CToilet3, CToilet4, CToilet3,
                     CSpace, CSpace,

                     CSpace, CToilet8, CSpace};

    return vecAnnotation;
}

Palette Toilet::createBrightPalette() {
    Palette CPalette = Palette({Colors::WHITE,
                                Colors::SINK_V_LIGHT,
                                Colors::WHITE,
                                Colors::WHITE,
                                Colors::SINK_V_DARK,

                                Colors::WHITE},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::WHITE,
                                Colors::SINK_V_LIGHT,
                                Colors::CLEAR,

                                Colors::CLEAR});
    return CPalette;
}

Palette Toilet::createDarkPalette() {
    Palette CPalette = Palette({Colors::WHITE,
                                Colors::SINK_V_LIGHT,
                                Colors::WHITE,
                                Colors::WHITE,
                                Colors::SINK_V_DARK,

                                Colors::WHITE},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::WHITE,
                                Colors::SINK_V_LIGHT,
                                Colors::CLEAR,

                                Colors::CLEAR});
    return CPalette;
}

Bounds Toilet::createBounds(int nX, int nY) {
    return Bounds(nX, nY, 7, 7);
}
