/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_FOYER_WEST_H
#define CANDY_TUI_ROOMS_FOYER_WEST_H

#include "../../Wall.h"

#include "../../../../Graphics/Interactable.h"
#include "../../../../Graphics/Image.h"
#include "../../../../Graphics/Palette.h"

#include "../../../../Room/Parts/Decor/Frame.h"
#include "../../../../Room/Parts/Door/KidsBedDoor.h"

#include "../../../../../View/Image/Window.h"


namespace rooms {
    using namespace images;
    
    class FoyerWest : public Wall {
        public:
            FoyerWest();

        private:
            std::vector<Image> createItems();
            std::vector<Interactable> createInteractable();
    };
}

#endif