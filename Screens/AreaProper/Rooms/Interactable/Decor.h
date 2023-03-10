/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 28, 2023
Description: Decor class
****************************************************/

#ifndef GAME_INTERACTABLE_DECOR_H
#define GAME_INTERACTABLE_DECOR_H

#include "../../Interactable.h"

namespace gameInteractable{
    class Decor : public gameInteractable::Interactable {
        public:
            Decor(int nIndex);
        
        public:
            int interact() override;

            bool setToggled() override;
    };
}

#endif