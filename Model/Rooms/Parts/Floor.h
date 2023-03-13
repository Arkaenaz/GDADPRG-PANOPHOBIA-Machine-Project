/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Floor class
****************************************************/

#ifndef GAME_ROOMS_FLOOR_H
#define GAME_ROOMS_FLOOR_H

#include "vector"

#include "../../../Config/Settings.h"
#include "Interactable.h"
#include "Interactables/Decor.h"

namespace gameRooms {
    using namespace gameInteractable;
    class Floor{
        private:
            std::vector<gameInteractable::Interactable*> vecDecor;
            int nDecor;

        public:
            Floor();

        public:
            void removeDecor(int nIndex);
            void placeDecor(gameInteractable::Interactable *CDecor);
            void toggleInteractable(int nIndex);

            int getInteractableIndex(int nIndex);
            int getInteractableWall(int nIndex);
            std::vector<bool> getInteractIndices();
            int getInteractableSize();
            gameInteractable::Interactable* getInteractable(int nIndex);
            //gameInteractable::Interactable getDecor(int nIndex);
            std::vector<int> getDecorIndices();
            int getDecor();
    };
}

#endif