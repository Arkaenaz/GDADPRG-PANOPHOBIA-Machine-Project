/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_MASTERS_BED_WEST_H
#define CANDY_TUI_ROOMS_MASTERS_BED_WEST_H

#include "../../Wall.h"

#include "../../../../Graphics/Interactable.h"
#include "../../../../Graphics/Image.h"
#include "../../../../Graphics/Palette.h"

#include "../../../../../View/Image/Bed.h"
#include "../../../../../View/Image/Window.h"

namespace rooms {
    using namespace images;
    
    class MastersBedWest : public Wall {
        public:
            MastersBedWest();

        private:
            std::vector<Image> createItems();
            std::vector<Interactable> createInteractable();
    };
}

#endif