/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_IMAGES_INTERACTABLE_H
#define CANDY_TUI_IMAGES_INTERACTABLE_H

#include "Image.h"
#include "../Enum/EnumStates.h"

namespace images {
    using namespace graphics;
    
    class Interactable {
        protected:
            Image CImageOn;
            Image CImageOff;
            States EState;

        public:
            Interactable(Image CImageOn, Image CImageOff);

        public:
            void toggle();
            void swapPalette();

        public:
            Image getImage();
    };
}

#endif