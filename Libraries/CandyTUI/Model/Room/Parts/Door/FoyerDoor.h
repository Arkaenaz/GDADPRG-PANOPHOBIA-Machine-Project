/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_FOYER_DOOR_H
#define CANDY_TUI_ROOMS_FOYER_DOOR_H

#include "../../../Graphics/Interactable.h"
#include "../../../Graphics/Image.h"
#include "../../../Graphics/Palette.h"

#include "../../../../View/Image/DoorClose.h"
#include "../../../../View/Image/DoorOpen.h"

namespace rooms {
    using namespace images;

    class FoyerDoor : public Interactable {
        public:
            FoyerDoor(int nX, int nY);

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