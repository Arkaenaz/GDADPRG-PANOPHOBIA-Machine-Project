/****************************************************
Author: Jay Benedict F. Ursua
Date Created: March 2, 2023
Description: Hallway room class
****************************************************/

#ifndef GAME_ROOMS_HALLWAY_ROOM_H
#define GAME_ROOMS_HALLWAY_ROOM_H

#include "../Room.h"
#include "Wall/HallwayWalls.h"

namespace gameRooms {
    using namespace gameInteractable;
    class HallwayRoom : public gameRooms::Room {
        public:
            HallwayRoom();
    };
}

#endif