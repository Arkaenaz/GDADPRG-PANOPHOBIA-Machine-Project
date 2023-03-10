/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: March 1, 2023
Description: Foyer wall classes
****************************************************/

#ifndef GAME_ROOMS_FOYER_WALLS_H
#define GAME_ROOMS_FOYER_WALLS_H

#include "../../Wall.h"
#include "../Interactable/Decor.h"
#include "../Interactable/Door.h"
#include "../Interactable/Lightswitch.h"

namespace gameRooms {
    using namespace gameInteractable;
    class FoyerWall1 : public gameRooms::Wall {
        public:
            FoyerWall1();
    };
    class FoyerWall2 : public gameRooms::Wall {
        public:
            FoyerWall2();
    };
    class FoyerWall3 : public gameRooms::Wall {
        public:
            FoyerWall3();
    };
    class FoyerWall4 : public gameRooms::Wall {
        public:
            FoyerWall4();
    };
}

#endif