/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_MASTERS_BED_H
#define CANDY_TUI_ROOMS_MASTERS_BED_H

#include "../Graphics/Interactable.h"

#include "Parts/Wall.h"
#include "Parts/Wall/MastersBed/MastersBedNorth.h"
#include "Parts/Wall/MastersBed/MastersBedSouth.h"
#include "Parts/Wall/MastersBed/MastersBedEast.h"
#include "Parts/Wall/MastersBed/MastersBedWest.h"

namespace rooms {
    class MastersBed : public Room {
        public:
            MastersBed();

        private:
            std::vector<Wall> createWallVector();
            Palette createBrightPalette();
            Palette createDarkPalette();
    };
}

#endif