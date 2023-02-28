/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 28, 2023
Description: Decor class
****************************************************/

#ifndef GAME_ELEMENTS_INTERACTABLE_DECOR_H
#define GAME_ELEMENTS_INTERACTABLE_DECOR_H

#include "../../Interactable.h"

namespace gameInteractable{
    class Decor : public Interactable{
        private:
            int nIndex;
            int nDirection;

        public:
            Decor(int nIndex);
        
        public:
            int getIndex();
    };
}

#endif