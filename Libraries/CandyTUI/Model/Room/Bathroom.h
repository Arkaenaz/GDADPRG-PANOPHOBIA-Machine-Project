/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_BATHROOM_H
#define CANDY_TUI_ROOMS_BATHROOM_H

#include "../Graphics/Interactable.h"

#include "Parts/Wall.h"
#include "Parts/Wall/Bathroom/BathroomNorth.h"
#include "Parts/Wall/Bathroom/BathroomSouth.h"
#include "Parts/Wall/Bathroom/BathroomEast.h"
#include "Parts/Wall/Bathroom/BathroomWest.h"

namespace rooms {
    class Bathroom : public Room {
        public:
            Bathroom();

        private:
            std::vector<Wall> createWallVector();
            Palette createBrightPalette();
            Palette createDarkPalette();
    };
}

#endif