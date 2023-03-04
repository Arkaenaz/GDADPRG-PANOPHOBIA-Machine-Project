/****************************************************
Author: Jay Benedict F. Ursua
Date Created: March 2, 2023
Description: Hallway room class
****************************************************/

#ifndef GAME_ELEMENTS_ROOM_HALLWAY_H
#define GAME_ELEMENTS_ROOM_HALLWAY_H

#include "../Room.h"
#include "Wall/HallwayWalls.h"

namespace gameArea{
    using namespace gameInteractable;
    class HallwayRoom : public gameArea::Room{
        public:
            HallwayRoom();
    };
}

#endif