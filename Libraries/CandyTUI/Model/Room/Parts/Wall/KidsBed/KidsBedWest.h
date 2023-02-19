/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_KIDS_BED_WEST_H
#define CANDY_TUI_ROOMS_KIDS_BED_WEST_H

#include "../../Wall.h"

#include "../../../../Graphics/Interactable.h"
#include "../../../../Graphics/Image.h"
#include "../../../../Graphics/Palette.h"

#include "../../../../../View/Image/Chair.h"
#include "../../../../../View/Image/Window.h"
#include "../../../../../View/Image/Frame/FrameType1.h"

namespace rooms {
    using namespace images;
    
    class KidsBedWest : public Wall {
        public:
            KidsBedWest();

        private:
            std::vector<Image> createItems();
            std::vector<Interactable> createInteractable();
    };
}

#endif