/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_KIDS_BED_NORTH_H
#define CANDY_TUI_ROOMS_KIDS_BED_NORTH_H

#include "../../Wall.h"

#include "../../../../Graphics/Interactable.h"
#include "../../../../Graphics/Image.h"
#include "../../../../Graphics/Palette.h"

#include "../../../../Room/Parts/Decor/Frame.h"

#include "../../../../../View/Image/Bed.h"
#include "../../../../../View/Image/Window.h"

#include "../../../../../View/Image/Frame/FrameType6.h"
#include "../../../../../View/Image/Frame/FrameTypeOff.h"

namespace rooms {
    using namespace images;
    
    class KidsBedNorth : public Wall {
        public:
            KidsBedNorth();

        private:
            std::vector<Image> createItems();
            std::vector<Interactable> createInteractable();
    };
}

#endif