/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_BATHROOM_NORTH_H
#define CANDY_TUI_ROOMS_BATHROOM_NORTH_H

#include "../../Wall.h"

#include "../../../../Graphics/Interactable.h"
#include "../../../../Graphics/Image.h"
#include "../../../../Graphics/Palette.h"

#include "../../../../../View/Image/Cabinet.h"
#include "../../../../../View/Image/WallShelf.h"
#include "../../../../../View/Image/Frame/FrameType1.h"
#include "../../../../../View/Image/Frame/FrameType2.h"
#include "../../../../../View/Image/Frame/FrameType6.h"

namespace rooms {
    using namespace images;
    
    class BathroomNorth : public Wall {
        public:
            BathroomNorth();

        private:
            std::vector<Image> createItems();
            std::vector<Interactable> createInteractable();
    };
}

#endif