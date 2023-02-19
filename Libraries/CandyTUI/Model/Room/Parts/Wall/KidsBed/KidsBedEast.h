/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_KIDS_BED_EAST_H
#define CANDY_TUI_ROOMS_KIDS_BED_EAST_H

#include "../../Wall.h"

#include "../../../../Graphics/Interactable.h"
#include "../../../../Graphics/Image.h"
#include "../../../../Graphics/Palette.h"

#include "../../../../Room/Parts/Door/FoyerDoor.h"
#include "../../../../Room/Parts/Door/HallwayDoor.h"

#include "../../../../../View/Image/LightBulb.h"
#include "../../../../../View/Image/LightSwitch.h"
#include "../../../../../View/Image/Window.h"

namespace rooms {
    using namespace images;
    
    class KidsBedEast : public Wall {
        public:
            KidsBedEast();

        private:
            std::vector<Image> createItems();
            std::vector<Interactable> createInteractable();
    };
}

#endif