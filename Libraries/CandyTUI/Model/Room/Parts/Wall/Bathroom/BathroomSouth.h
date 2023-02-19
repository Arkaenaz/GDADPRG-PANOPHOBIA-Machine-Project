/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_BATHROOM_SOUTH_H
#define CANDY_TUI_ROOMS_BATHROOM_SOUTH_H

#include "../../Wall.h"

#include "../../../../Graphics/Interactable.h"
#include "../../../../Graphics/Image.h"
#include "../../../../Graphics/Palette.h"

#include "../../../../../View/Image/Toilet.h"
#include "../../../../../View/Image/ToiletPaper.h"
#include "../../../../../View/Image/Window.h"
#include "../../../../../View/Image/Frame/FrameType1.h"

namespace rooms {
    using namespace images;
    
    class BathroomSouth : public Wall {
        public:
            BathroomSouth();

        private:
            std::vector<Image> createItems();
            std::vector<Interactable> createInteractable();
    };
}

#endif