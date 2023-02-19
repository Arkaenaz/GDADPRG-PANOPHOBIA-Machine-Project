/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_BATHROOM_DOOR_H
#define CANDY_TUI_ROOMS_BATHROOM_DOOR_H

#include "../../../Graphics/Interactable.h"
#include "../../../Graphics/Image.h"
#include "../../../Graphics/Palette.h"

#include "../../../../View/Image/DoorClose.h"
#include "../../../../View/Image/DoorOpen.h"

namespace rooms {
    using namespace images;

    class BathroomDoor : public Interactable {
        public:
            BathroomDoor(int nX, int nY);

        private:
            Image createImageOn(Palette CBright, Palette CDark, int nX, int nY);
            Image createImageOff(Palette CBright, Palette CDark, int nX, int nY);
            Palette createOpenBrightPalette();
            Palette createOpenDarkPalette();
            Palette createCloseBrightPalette();
            Palette createCloseDarkPalette();
    };
}

#endif