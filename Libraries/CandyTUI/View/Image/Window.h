/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_IMAGES_WINDOW_H
#define CANDY_TUI_IMAGES_WINDOW_H

#include "../../Model/Enum/EnumColors.h"

#include "../../Model/Graphics/Image.h"
#include "../../Model/Graphics/ImageAnnotation.h"
#include "../../Model/Graphics/Palette.h"

#include "../../Model/Layout/Bounds.h"

namespace images {
    using namespace graphics;

    class Window : public Image {
        public:
            Window(int nX, int nY);
            Window(int nX, int nY, int nHeight);

        private:
            std::vector<ImageAnnotation> createAnnotationVector(Bounds CBounds);
            Palette createBrightPalette();
            Palette createDarkPalette();
            Bounds createBounds(int nX, int nY);
    };
}

#endif