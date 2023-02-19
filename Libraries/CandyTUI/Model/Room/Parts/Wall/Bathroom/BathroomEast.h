/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_BATHROOM_EAST_H
#define CANDY_TUI_ROOMS_BATHROOM_EAST_H

#include "../../Wall.h"

#include "../../../../Graphics/Interactable.h"
#include "../../../../Graphics/Image.h"
#include "../../../../Graphics/Palette.h"

#include "../../../../Room/Parts/Decor/Frame.h"
#include "../../../../Room/Parts/Door/HallwayDoor.h"

#include "../../../../../View/Image/LightBulb.h"
#include "../../../../../View/Image/LightSwitch.h"
#include "../../../../../View/Image/Sink.h"
#include "../../../../../View/Image/Window.h"

#include "../../../../../View/Image/Frame/FrameType6.h"
#include "../../../../../View/Image/Frame/FrameTypeOff.h"

namespace rooms {
    using namespace images;
    
    class BathroomEast : public Wall {
        public:
            BathroomEast();

        private:
            std::vector<Image> createItems();
            std::vector<Interactable> createInteractable();
    };
}

#endif