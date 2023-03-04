/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: March 1, 2023
Description: Foyer wall classes
****************************************************/

#ifndef GAME_ELEMENTS_WALL_FOYER_H
#define GAME_ELEMENTS_WALL_FOYER_H

#include "../../Wall.h"
#include "../Interactable/Decor.h"
#include "../Interactable/Door.h"
#include "../Interactable/Lightswitch.h"

namespace gameArea{
    using namespace gameInteractable;
    class FoyerWall1 : public gameArea::Wall{
        public:
            FoyerWall1();
    };
    class FoyerWall2 : public gameArea::Wall{
        public:
            FoyerWall2();
    };
    class FoyerWall3 : public gameArea::Wall{
        public:
            FoyerWall3();
    };
    class FoyerWall4 : public gameArea::Wall{
        public:
            FoyerWall4();
    };
}

#endif