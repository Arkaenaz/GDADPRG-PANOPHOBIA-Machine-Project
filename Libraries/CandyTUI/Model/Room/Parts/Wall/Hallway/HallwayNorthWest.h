/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_HALLWAY_NORTH_WEST_H
#define CANDY_TUI_ROOMS_HALLWAY_NORTH_WEST_H

#include "../../Wall.h"

#include "../../../../Graphics/Interactable.h"
#include "../../../../Graphics/Image.h"
#include "../../../../Graphics/Palette.h"

#include "../../../../Room/Parts/Door/LivingRoomDoor.h"

#include "../../../../../View/Image/Frame/FrameType1.h"
#include "../../../../../View/Image/Frame/FrameType2.h"
#include "../../../../../View/Image/Frame/FrameType4.h"
#include "../../../../../View/Image/Frame/FrameTypeOff.h"

namespace rooms {
    using namespace images;
    
    class HallwayNorthWest : public Wall {
        public:
            HallwayNorthWest();

        private:
            std::vector<Image> createItems();
            std::vector<Interactable> createInteractable();
    };
}

#endif