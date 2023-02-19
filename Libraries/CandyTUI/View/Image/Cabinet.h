/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_IMAGES_CABINET_H
#define CANDY_TUI_IMAGES_CABINET_H

#include "../../Model/Enum/EnumColors.h"

#include "../../Model/Graphics/Image.h"
#include "../../Model/Graphics/ImageAnnotation.h"
#include "../../Model/Graphics/Palette.h"

namespace images {
    using namespace graphics;

    class Cabinet : public Image {
        public:
            Cabinet(Colors EColorLight, Colors EColorMid, Colors EColorDark, int nX, int nY);

        private:
            std::vector<ImageAnnotation> createAnnotationVector();
            Palette createBrightPalette(Colors EColorLight, Colors EColorMid, Colors EColorDark);
            Palette createDarkPalette();
            Bounds createBounds(int nX, int nY);
    };
}

#endif