/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_IMAGES_BORDER_H
#define CANDY_TUI_IMAGES_BORDER_H

#include "../../../Model/Enum/EnumBorderTypes.h"
#include "../../../Model/Enum/EnumColors.h"

#include "../../../Model/Graphics/Image.h"
#include "../../../Model/Graphics/ImageAnnotation.h"
#include "../../../Model/Graphics/Palette.h"

namespace images {
    using namespace graphics;

    class Border : public Image {
        public:
            Border(Colors EColorLight, Colors EColorDark, BorderTypes EType, int nWidth);

        private:
            std::vector<ImageAnnotation> createAnnotationVector(BorderTypes EType, int nWidth);
            Palette createBrightPalette(Colors EColorLight, Colors EColorDark);
            Palette createDarkPalette();
            Bounds createBounds(int nWidth);
    };
}

#endif