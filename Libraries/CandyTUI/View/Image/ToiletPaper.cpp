/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "ToiletPaper.h"

using namespace images;

ToiletPaper::ToiletPaper(int nX, int nY)
            : Image(createAnnotationVector(),
                    createBrightPalette(),
                    createDarkPalette(),
                    createBounds(nX, nY)) {
}

std::vector<ImageAnnotation> ToiletPaper::createAnnotationVector() {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CPaper1 = ImageAnnotation("●", 1, 0);
    ImageAnnotation CPaper2 = ImageAnnotation("╚", 1, 0);
    ImageAnnotation CPaper3 = ImageAnnotation("╝", 1, 0);

    ImageAnnotation CPaper4 = ImageAnnotation("█", 1, 1);
    ImageAnnotation CPaper5 = ImageAnnotation("▀", 1, 2);

    ImageAnnotation CSpace = ImageAnnotation(" ", 1, 3);

    vecAnnotation = {CPaper1, CSpace, CSpace, CSpace, CPaper1,
                     
                     CPaper2,
                     CPaper4, CPaper4, CPaper4,
                     CPaper3,

                     CSpace,
                     CPaper5, CPaper5, CPaper5,
                     CSpace};

    return vecAnnotation;
}

Palette ToiletPaper::createBrightPalette() {
    Palette CPalette = Palette({Colors::SINK_V_DARK,
                                Colors::WHITE,
                                Colors::SINK_V_LIGHT,
                                Colors::WHITE},

                               {Colors::CLEAR,
                                Colors::WHITE,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette ToiletPaper::createDarkPalette() {
    Palette CPalette = Palette({Colors::SINK_V_DARK,
                                Colors::WHITE,
                                Colors::SINK_V_LIGHT,
                                Colors::WHITE},

                               {Colors::CLEAR,
                                Colors::WHITE,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Bounds ToiletPaper::createBounds(int nX, int nY) {
    return Bounds(nX, nY, 5, 3);
}
