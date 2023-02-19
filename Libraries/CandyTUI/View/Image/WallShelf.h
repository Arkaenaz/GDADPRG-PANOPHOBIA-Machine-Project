/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_IMAGES_WALL_SHELF_H
#define CANDY_TUI_IMAGES_WALL_SHELF_H

#include "../../Model/Enum/EnumColors.h"

#include "../../Model/Graphics/Image.h"
#include "../../Model/Graphics/ImageAnnotation.h"
#include "../../Model/Graphics/Palette.h"

namespace images {
    using namespace graphics;

    class WallShelf : public Image {
        public:
            WallShelf(int nX, int nY);

        private:
            std::vector<ImageAnnotation> createAnnotationVector();
            Palette createBrightPalette();
            Palette createDarkPalette();
            Bounds createBounds(int nX, int nY);
    };
}

#endif