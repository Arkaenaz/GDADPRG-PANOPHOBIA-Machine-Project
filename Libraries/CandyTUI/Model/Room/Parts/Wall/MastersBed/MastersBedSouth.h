/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_MASTERS_BED_SOUTH_H
#define CANDY_TUI_ROOMS_MASTERS_BED_SOUTH_H

#include "../../Wall.h"

#include "../../../../Graphics/Interactable.h"
#include "../../../../Graphics/Image.h"
#include "../../../../Graphics/Palette.h"

#include "../../../../Room/Parts/Decor/Frame.h"

#include "../../../../../View/Image/Chair.h"
#include "../../../../../View/Image/Shelf.h"
#include "../../../../../View/Image/WallShelf.h"
#include "../../../../../View/Image/Window.h"

#include "../../../../../View/Image/Frame/FrameType1.h"
#include "../../../../../View/Image/Frame/FrameType2.h"
#include "../../../../../View/Image/Frame/FrameTypeOff.h"

namespace rooms {
    using namespace images;
    
    class MastersBedSouth : public Wall {
        public:
            MastersBedSouth();

        private:
            std::vector<Image> createItems();
            std::vector<Interactable> createInteractable();
    };
}

#endif