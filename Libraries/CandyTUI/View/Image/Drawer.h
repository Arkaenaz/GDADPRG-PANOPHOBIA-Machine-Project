/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_IMAGES_DRAWER_H
#define CANDY_TUI_IMAGES_DRAWER_H

#include "../../Model/Enum/EnumColors.h"

#include "../../Model/Graphics/Image.h"
#include "../../Model/Graphics/ImageAnnotation.h"
#include "../../Model/Graphics/Palette.h"

namespace images {
    using namespace graphics;

    class Drawer : public Image {
        public:
            Drawer(Colors EColorMid, Colors EColorDark, int nX, int nY);

        private:
            std::vector<ImageAnnotation> createAnnotationVector();
            Palette createBrightPalette(Colors EColorMid, Colors EColorDark);
            Palette createDarkPalette();
            Bounds createBounds(int nX, int nY);
    };
}

#endif