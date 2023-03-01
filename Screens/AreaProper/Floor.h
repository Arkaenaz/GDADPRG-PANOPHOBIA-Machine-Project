/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Floor class
****************************************************/

#ifndef GAME_ELEMENTS_FLOOR_H
#define GAME_ELEMENTS_FLOOR_H

#include "vector"

#include "Wall.h"
#include "Interactable.h"

namespace gameArea{
    using namespace gameInteractable;
    class Floor{
        private:
            std::vector<InteractOBJ> vecDecor;

        public:
            Floor();

        public:
            void dropDecor(Interactable CDecor);
            int toggleInteractable(int nIndex, Wall CWall);

            int getInteractableIndex(int nIndex);
    };
}

#endif