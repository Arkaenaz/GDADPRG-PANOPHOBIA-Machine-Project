/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "LightSwitch.h"

using namespace images;

LightSwitch::LightSwitch(int nX, int nY)
            : Image(createAnnotationVector(),
                    createBrightPalette(),
                    createDarkPalette(),
                    createBounds(nX, nY)) {
}

std::vector<ImageAnnotation> LightSwitch::createAnnotationVector() {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CBorder1 = ImageAnnotation("╔═╗", 3, 1);
    ImageAnnotation CBorder2 = ImageAnnotation("║", 1, 1);
    ImageAnnotation CBorder3 = ImageAnnotation("▀", 1, 0);
    ImageAnnotation CBorder4 = ImageAnnotation("╚═╝", 3, 1);

    vecAnnotation = {CBorder1,
                     CBorder2, CBorder3, CBorder2,
                     CBorder4};

    return vecAnnotation;
}

Palette LightSwitch::createBrightPalette() {
    Palette CPalette = Palette({Colors::LIGHT_ON_LIGHT,
                                Colors::LIGHT_ON_DARK},
                               {Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette LightSwitch::createDarkPalette() {
    Palette CPalette = Palette({Colors::BLACK,
                                Colors::LIGHT_OFF_DARK},
                               {Colors::LIGHT_OFF_LIGHT,
                                Colors::CLEAR});
    return CPalette;
}

Bounds LightSwitch::createBounds(int nX, int nY) {
    return Bounds(nX, nY, 3, 3);
}
