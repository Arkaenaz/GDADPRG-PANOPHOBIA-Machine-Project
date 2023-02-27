/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Door class
****************************************************/

#ifndef GAME_ELEMENTS_INTERACTABLE_DOOR_H
#define GAME_ELEMENTS_INTERACTABLE_DOOR_H

#include "../../Interactable.h"

namespace gameInteractable{
    class Door : public Interactable{
        public:
            Door();

        public:
            int interact();
    };
}

#endif