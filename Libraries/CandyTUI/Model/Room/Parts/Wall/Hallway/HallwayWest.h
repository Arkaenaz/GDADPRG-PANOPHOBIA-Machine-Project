/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_HALLWAY_WEST_H
#define CANDY_TUI_ROOMS_HALLWAY_WEST_H

#include "../../Wall.h"

#include "../../../../Graphics/Interactable.h"
#include "../../../../Graphics/Image.h"
#include "../../../../Graphics/Palette.h"

#include "../../../../Room/Parts/Door/KidsBedDoor.h"
#include "../../../../Room/Parts/Door/BathroomDoor.h"
#include "../../../../Room/Parts/Door/MastersBedDoor.h"

namespace rooms {
    using namespace images;
    
    class HallwayWest : public Wall {
        public:
            HallwayWest();

        private:
            std::vector<Image> createItems();
            std::vector<Interactable> createInteractable();
    };
}

#endif