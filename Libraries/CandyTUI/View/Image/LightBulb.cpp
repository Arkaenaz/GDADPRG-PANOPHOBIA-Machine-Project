/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "LightBulb.h"

using namespace images;

LightBulb::LightBulb(int nX, int nY)
            : Image(createAnnotationVector(),
                    createBrightPalette(),
                    createDarkPalette(),
                    createBounds(nX, nY)) {
}

std::vector<ImageAnnotation> LightBulb::createAnnotationVector() {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CBorder1 = ImageAnnotation("┌─▀▀▀─┐", 7, 0);
    ImageAnnotation CBorder2 = ImageAnnotation("▀▀▀▀▀▀▀", 7, 1);

    vecAnnotation = {CBorder1,
                     CBorder2};

    return vecAnnotation;
}

Palette LightBulb::createBrightPalette() {
    Palette CPalette = Palette({Colors::LIGHT_ON_LIGHT,
                                Colors::LIGHT_ON_DARK},
                               {Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette LightBulb::createDarkPalette() {
    Palette CPalette = Palette({Colors::LIGHT_OFF_LIGHT,
                                Colors::LIGHT_OFF_DARK},
                               {Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Bounds LightBulb::createBounds(int nX, int nY) {
    return Bounds(nX, nY, 7, 2);
}
