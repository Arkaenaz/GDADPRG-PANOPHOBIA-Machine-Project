/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_FOYER_SOUTH_H
#define CANDY_TUI_ROOMS_FOYER_SOUTH_H

#include "../../Wall.h"

#include "../../../../Graphics/Interactable.h"
#include "../../../../Graphics/Image.h"
#include "../../../../Graphics/Palette.h"

#include "../../../../Room/Parts/Door/VanDoor.h"

#include "../../../../../View/Image/LightBulb.h"
#include "../../../../../View/Image/LightSwitch.h"
#include "../../../../../View/Image/Window.h"

#include "../../../../../View/Image/Frame/FrameType1.h"
#include "../../../../../View/Image/Frame/FrameType2.h"
#include "../../../../../View/Image/Frame/FrameType3.h"
#include "../../../../../View/Image/Frame/FrameType4.h"
#include "../../../../../View/Image/Frame/FrameType5.h"

namespace rooms {
    using namespace images;
    
    class FoyerSouth : public Wall {
        public:
            FoyerSouth();

        private:
            std::vector<Image> createItems();
            std::vector<Interactable> createInteractable();
    };
}

#endif