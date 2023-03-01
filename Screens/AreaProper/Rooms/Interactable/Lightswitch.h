/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Lightswitch class
****************************************************/

#ifndef GAME_ELEMENTS_INTERACTABLE_LIGHTSWITCH_H
#define GAME_ELEMENTS_INTERACTABLE_LIGHTSWITCH_H

#include "../../Interactable.h"

namespace gameInteractable{
    class Lightswitch : public InteractOBJ{
        public:
            Lightswitch();

        public:
            int interact();
    };
}

#endif