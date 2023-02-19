/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_HALLWAY_SOUTH_H
#define CANDY_TUI_ROOMS_HALLWAY_SOUTH_H

#include "../../Wall.h"

#include "../../../../Graphics/Interactable.h"
#include "../../../../Graphics/Image.h"
#include "../../../../Graphics/Palette.h"

#include "../../../../Room/Parts/Decor/Frame.h"

#include "../../../../../View/Image/Window.h"

#include "../../../../../View/Image/Frame/FrameType5.h"
#include "../../../../../View/Image/Frame/FrameType6.h"
#include "../../../../../View/Image/Frame/FrameTypeOff.h"

namespace rooms {
    using namespace images;
    
    class HallwaySouth : public Wall {
        public:
            HallwaySouth();

        private:
            std::vector<Image> createItems();
            std::vector<Interactable> createInteractable();
    };
}

#endif