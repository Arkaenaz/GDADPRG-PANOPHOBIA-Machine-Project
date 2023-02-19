/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_KIDS_BED_H
#define CANDY_TUI_ROOMS_KIDS_BED_H

#include "../Graphics/Interactable.h"

#include "Parts/Wall.h"
#include "Parts/Wall/KidsBed/KidsBedNorth.h"
#include "Parts/Wall/KidsBed/KidsBedSouth.h"
#include "Parts/Wall/KidsBed/KidsBedEast.h"
#include "Parts/Wall/KidsBed/KidsBedWest.h"

namespace rooms {
    class KidsBed : public Room {
        public:
            KidsBed();

        private:
            std::vector<Wall> createWallVector();
            Palette createBrightPalette();
            Palette createDarkPalette();
    };
}

#endif