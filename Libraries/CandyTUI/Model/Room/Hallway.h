/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_HALLWAY_H
#define CANDY_TUI_ROOMS_HALLWAY_H

#include "../Graphics/Interactable.h"

#include "Parts/Wall.h"
#include "Parts/Wall/Hallway/HallwayNorthWest.h"
#include "Parts/Wall/Hallway/HallwayNorth.h"
#include "Parts/Wall/Hallway/HallwayNorthEast.h"

#include "Parts/Wall/Hallway/HallwayEast.h"

#include "Parts/Wall/Hallway/HallwaySouthEast.h"
#include "Parts/Wall/Hallway/HallwaySouth.h"
#include "Parts/Wall/Hallway/HallwaySouthWest.h"

#include "Parts/Wall/Hallway/HallwayWest.h"

namespace rooms {
    class Hallway : public Room {
        public:
            Hallway();

        private:
            std::vector<Wall> createWallVector();
            Palette createBrightPalette();
            Palette createDarkPalette();
    };
}

#endif