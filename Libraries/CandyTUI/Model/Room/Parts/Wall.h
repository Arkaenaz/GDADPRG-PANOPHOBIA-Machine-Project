/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_WALL_H
#define CANDY_TUI_ROOMS_WALL_H

#include "../../Graphics/Image.h"
#include "../../Graphics/Interactable.h"
#include "../../Layout/Size.h"

namespace rooms {
    using namespace images;

    class Wall {
        protected:
            std::vector<std::string> vecImage;
            std::vector<Image> vecItems;
            std::vector<Interactable> vecInteractable;
            Size CSize;
            bool bLight;

        public:
            Wall(std::vector<Image> vecItems, std::vector<Interactable> vecInteractable, bool hasLight);
            
        public:
            void swapPalette();
            void toggleInteractable(int nIndex);

        protected:
            int hasItem(Location CLocation, std::vector<Image> vecItems);
            void createImage();
            std::vector<Image> mergeImage();

        public:
            std::vector<std::string> getImageVector();
            Size getSize();
            bool hasLight();
    };
}

#endif