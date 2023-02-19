/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_FOYER_NORTH_H
#define CANDY_TUI_ROOMS_FOYER_NORTH_H

#include "../../Wall.h"

#include "../../../../Graphics/Interactable.h"
#include "../../../../Graphics/Image.h"
#include "../../../../Graphics/Palette.h"

#include "../../../../Room/Parts/Decor/Frame.h"
#include "../../../../Room/Parts/Door/HallwayDoor.h"

#include "../../../../../View/Image/Frame/FrameType2.h"
#include "../../../../../View/Image/Frame/FrameType3.h"

namespace rooms {
    using namespace images;
    
    class FoyerNorth : public Wall {
        public:
            FoyerNorth();

        private:
            std::vector<Image> createItems();
            std::vector<Interactable> createInteractable();
    };
}

#endif