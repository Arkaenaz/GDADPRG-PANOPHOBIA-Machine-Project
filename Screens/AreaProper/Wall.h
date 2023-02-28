/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Wall class
****************************************************/

#ifndef GAME_ELEMENTS_WALL_H
#define GAME_ELEMENTS_WALL_H

#include "vector"

#include "Floor.h"
#include "Rooms/Interactable/Decor.h"
#include "Rooms/Interactable/Door.h"
#include "Rooms/Interactable/Lightswitch.h"

namespace gameArea{
    using namespace gameInteractable;
    class Wall{
        private:
            std::vector<Interactable> vecDecor;
        
        public:
            Wall();
            
        public:
            void pickDecor(Interactable CInteractable);
            void pickDecor(Decor CDecor);

            int toggleInteractable(int nIndex, Floor CFloor);
            Door* getDoor(int nIndex);
    };
}

#endif