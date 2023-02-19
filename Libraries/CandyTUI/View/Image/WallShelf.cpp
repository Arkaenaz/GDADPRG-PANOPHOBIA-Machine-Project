/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "WallShelf.h"

using namespace images;

WallShelf::WallShelf(int nX, int nY)
          : Image(createAnnotationVector(),
                  createBrightPalette(),
                  createDarkPalette(),
                  createBounds(nX, nY)) {
}

std::vector<ImageAnnotation> WallShelf::createAnnotationVector() {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CShelf1 = ImageAnnotation("▀▀▀▀▀▀▀▀▀", 9, 0);
    ImageAnnotation CShelf2 = ImageAnnotation("▀", 1, 1);

    vecAnnotation = {CShelf2, CShelf1, CShelf2};

    return vecAnnotation;
}

Palette WallShelf::createBrightPalette() {
    Palette CPalette = Palette({Colors::SHELF_BROWN_LIGHT,
                                Colors::SHELF_BROWN_LIGHT},

                               {Colors::SHELF_BROWN_DARK,
                                Colors::CLEAR});
    return CPalette;
}

Palette WallShelf::createDarkPalette() {
    Palette CPalette = Palette({Colors::SHELF_V_LIGHT,
                                Colors::SHELF_V_LIGHT},

                               {Colors::SHELF_V_DARK,
                                Colors::CLEAR});
    return CPalette;
}

Bounds WallShelf::createBounds(int nX, int nY) {
    return Bounds(nX, nY, 11, 1);
}
