/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_IMAGES_DOOR_OPEN_H
#define CANDY_TUI_IMAGES_DOOR_OPEN_H

#include "../../Model/Graphics/Image.h"
#include "../../Model/Graphics/ImageAnnotation.h"
#include "../../Model/Graphics/Palette.h"

namespace images {
    using namespace graphics;

    class DoorOpen : public Image {
        public:
            DoorOpen(std::string strLabel, Palette CBright, Palette CDark, int nX, int nY);

        private:
            std::vector<ImageAnnotation> createAnnotationVector(std::string strLabel);
            Bounds createBounds(int nX, int nY);
    };
}

#endif