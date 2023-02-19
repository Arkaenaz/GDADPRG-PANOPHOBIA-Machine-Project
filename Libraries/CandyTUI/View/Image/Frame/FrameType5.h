/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_IMAGES_FRAME_TYPE_5_H
#define CANDY_TUI_IMAGES_FRAME_TYPE_5_H

#include "../../../Model/Graphics/Image.h"
#include "../../../Model/Graphics/ImageAnnotation.h"
#include "../../../Model/Graphics/Palette.h"
#include "../../../Model/Layout/Bounds.h"

namespace images {
    using namespace graphics;
    using namespace layouts;

    class FrameType5 : public Image {
        public:
            FrameType5(Palette CBright, Bounds CBounds);

        private:
            std::vector<ImageAnnotation> createAnnotationVector(Bounds CBounds);
            Palette createDarkPalette();
    };
}

#endif