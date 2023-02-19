/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_IMAGES_FRAME_TYPE_OFF_H
#define CANDY_TUI_IMAGES_FRAME_TYPE_OFF_H

#include "../../../Model/Graphics/Image.h"
#include "../../../Model/Graphics/Palette.h"

namespace images {
    using namespace graphics;
    using namespace layouts;

    class FrameTypeOff : public Image {
        public:
            FrameTypeOff(Image CFrame);
            
        private:
            Palette createPalette();
    };
}

#endif