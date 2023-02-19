/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_MASTERS_BED_NORTH_H
#define CANDY_TUI_ROOMS_MASTERS_BED_NORTH_H

#include "../../Wall.h"

#include "../../../../Graphics/Interactable.h"
#include "../../../../Graphics/Image.h"
#include "../../../../Graphics/Palette.h"

#include "../../../../../View/Image/Dresser.h"
#include "../../../../../View/Image/Window.h"

namespace rooms {
    using namespace images;
    
    class MastersBedNorth : public Wall {
        public:
            MastersBedNorth();

        private:
            std::vector<Image> createItems();
            std::vector<Interactable> createInteractable();
    };
}

#endif