/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: March 1, 2023
Description: Foyer room class
****************************************************/

#ifndef GAME_ELEMENTS_ROOM_FOYER_H
#define GAME_ELEMENTS_ROOM_FOYER_H

#include "../Room.h"
#include "Wall/FoyerWalls.h"

namespace gameArea{
    using namespace gameInteractable;
    class FoyerRoom : public RoomOBJ{
        public:
            FoyerRoom();
    };
}

#endif