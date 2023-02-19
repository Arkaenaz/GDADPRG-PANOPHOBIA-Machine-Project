/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_FRAME_H
#define CANDY_TUI_ROOMS_FRAME_H

#include "../../../Graphics/Interactable.h"
#include "../../../Graphics/Image.h"
#include "../../../Graphics/Palette.h"

#include "../../../../View/Image/DoorClose.h"
#include "../../../../View/Image/DoorOpen.h"

namespace rooms {
    using namespace images;

    class Frame : public Interactable {
        public:
            Frame(Image CImageOn, Image CImageOff);
    };
}

#endif