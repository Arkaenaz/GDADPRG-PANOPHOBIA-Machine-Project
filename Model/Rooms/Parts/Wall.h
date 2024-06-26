/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Wall class
****************************************************/

#ifndef GAME_ROOMS_WALL_H
#define GAME_ROOMS_WALL_H

#include "vector"

#include "Floor.h"
#include "Interactables/Decor.h"
#include "Interactables/Door.h"
#include "Interactables/Lightswitch.h"

namespace gameRooms {
    using namespace gameInteractable;
    class Wall{
        protected:
            std::vector<gameInteractable::Interactable*> vecDecor;
            Lightswitch* pLightswitch;
        
        public:
            Wall();
            
        public:
            //void pickDecor(gameInteractable::Interactable CInteractable);
            void placeDecor(gameInteractable::Interactable *pInteractable, Floor *pFloor);
            void toggleInteractable(int nIndex);

            std::vector<bool> getInteractIndices();
            std::vector<bool> getDoorIndices();
            int getInteractableSize();
            //!void connectDoor(Door *pDoor1, Door *pDoor2);
            //!void updateDoor(int nIndex, int nAction);
            gameInteractable::Interactable* getInteractable(int nIndex);
            Door* getDoor(int nIndex);
            Lightswitch* getLightswitch();

        protected:
            void createDecor(int nWall, int nSize);
    };
}

#endif