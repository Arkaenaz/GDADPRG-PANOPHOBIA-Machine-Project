/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: March 1, 2023
Description: Foyer room class
****************************************************/

#ifndef GAME_ROOMS_FOYER_ROOM_H
#define GAME_ROOMS_FOYER_ROOM_H

#include "Room.h"
#include "Parts/Walls/FoyerRoom/FoyerWalls.h"

namespace gameRooms {
    using namespace gameInteractable;
    class FoyerRoom : public gameRooms::Room {
        public:
            FoyerRoom();
    };
}

#endif