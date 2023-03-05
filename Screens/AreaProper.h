/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Area class
****************************************************/

#ifndef GAME_ELEMENTS_AREA_H
#define GAME_ELEMENTS_AREA_H

#include "iostream"
#include "vector"

#include "../Model/Player.h"
#include "AreaProper/Room.h"
#include "AreaProper/Rooms/FoyerRoom.h"
#include "AreaProper/Rooms/HallwayRoom.h"
#include "AreaProper/Rooms/KidsRoom.h"
#include "AreaProper/Rooms/MasterRoom.h"
#include "AreaProper/Rooms/BathRoom.h"
#include "AreaProper/Rooms/Van.h"

namespace gameArea{
    using namespace gameInteractable;
    class Area{
        private:
            
            std::vector<Room> vecRoom;

        public:
            Area();

            //void update(Player CPlayer);
            std::vector<Room> createRoomVector();

            int toggleInteractable(int nRoom, int nWall, int nIndex);

            int getRoomSize(int nRoom);
            std::vector<bool> getInteractIndices(int nRoom, int nWall);
            std::vector<bool> getDoorIndices(int nRoom, int nWall);
            Door* getDoor(int nRoom, int nWall, int nIndex);
            std::vector<int> getFloorDecorIndices(int nRoom);
    };
}

#endif