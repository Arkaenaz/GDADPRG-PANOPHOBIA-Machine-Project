/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_BATHROOM_SOUTH_WEST_H
#define CANDY_TUI_ROOMS_BATHROOM_SOUTH_WEST_H

#include "../../Wall.h"

#include "../../../../Graphics/Interactable.h"
#include "../../../../Graphics/Image.h"
#include "../../../../Graphics/Palette.h"

#include "../../../../Room/Parts/Door/FoyerDoor.h"

#include "../../../../../View/Image/LightBulb.h"
#include "../../../../../View/Image/LightSwitch.h"
#include "../../../../../View/Image/Window.h"

#include "../../../../../View/Image/Frame/FrameType1.h"

namespace rooms {
    using namespace images;
    
    class HallwaySouthWest : public Wall {
        public:
            HallwaySouthWest();

        private:
            std::vector<Image> createItems();
            std::vector<Interactable> createInteractable();
    };
}

#endif