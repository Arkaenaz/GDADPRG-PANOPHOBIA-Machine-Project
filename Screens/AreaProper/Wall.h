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
        protected:
            std::vector<gameInteractable::Interactable*> vecDecor;
        
        public:
            Wall();
            
        public:
            //void pickDecor(gameInteractable::Interactable CInteractable);
            void pickDecor(gameInteractable::Interactable *pInteractable);
            int toggleInteractable(int nIndex);

            std::vector<bool> getInteractIndices();
            std::vector<bool> getDoorIndices();
            int getInteractableSize();
            gameInteractable::Interactable* getInteractable(int nIndex);
            Door* getDoor(int nIndex);

        protected:
            void createDecor(int nSize);
    };
}

#endif