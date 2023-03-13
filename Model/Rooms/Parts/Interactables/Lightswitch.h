/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Lightswitch class
****************************************************/

#ifndef GAME_INTERACTABLE_LIGHTSWITCH_H
#define GAME_INTERACTABLE_LIGHTSWITCH_H

#include "../Interactable.h"

namespace gameInteractable{
    class Lightswitch : public gameInteractable::Interactable {
        public:
            Lightswitch(int nWall);

        public:
            //int interact() override;
    };
}

#endif