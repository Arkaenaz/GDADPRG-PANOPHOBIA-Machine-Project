/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_FOYER_H
#define CANDY_TUI_ROOMS_FOYER_H

#include "../Graphics/Interactable.h"

#include "Parts/Wall.h"
#include "Parts/Wall/Foyer/FoyerNorth.h"
#include "Parts/Wall/Foyer/FoyerEast.h"
#include "Parts/Wall/Foyer/FoyerSouth.h"
#include "Parts/Wall/Foyer/FoyerWest.h"

namespace rooms {
    class Foyer : public Room {
        public:
            Foyer();

        private:
            std::vector<Wall> createWallVector();
            Palette createBrightPalette();
            Palette createDarkPalette();
    };
}

#endif