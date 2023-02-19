/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_ROOMS_ROOM_H
#define CANDY_TUI_ROOMS_ROOM_H

#include "../../Config/Settings.h"
#include "../Enum/EnumColors.h"

#include "../Layout/Bounds.h"
#include "../Layout/Size.h"

#include "../Graphics/Image.h"
#include "../Graphics/ImageAnnotation.h"
#include "../Graphics/Interactable.h"
#include "../Graphics/Palette.h"

#include "Parts/Wall.h"

namespace rooms {
    class Room {
        protected:
            std::vector<Wall> vecWall;
            Palette CBright;
            Palette CDark;
            Size CSize;
            int nActiveIndex;
            bool bLight;

            Image CTopBorder;
            Image CSideBorder;
            Image CBottomBorder;

        public:
            Room(std::vector<Wall> vecWall, Palette CBright, Palette CDark);

        public:
            void left();
            void right();
            void toggleLight();
            void toggleInteractable(int nWallIndex, int nInteractableIndex);
            void print();
            bool isLight();

        protected:
            Image createTopBorder(Palette CBright, Palette CDark, bool hasLight);
            Image createSideBorder(Palette CBright, Palette CDark);
            Image createBottomBorder(Palette CBright, Palette CDark);
            void setActiveIndex(int nActiveIndex);
    };
}

#endif