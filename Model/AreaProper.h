/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Area class
****************************************************/

#ifndef GAME_ELEMENTS_AREA_H
#define GAME_ELEMENTS_AREA_H

#include "iostream"
#include "vector"

#include "Player.h"
#include "Rooms/Room.h"

#include "Rooms/FoyerRoom.h"
#include "Rooms/HallwayRoom.h"
#include "Rooms/KidsRoom.h"
#include "Rooms/MasterRoom.h"
#include "Rooms/BathRoom.h"
#include "Rooms/Van.h"

namespace gameElements {
    using namespace gameRooms;
    using namespace gameInteractable;
    class Area{
        private:
            std::vector<gameRooms::Room> vecRoom;

        public:
            Area();

            void initializeDoors();
            std::vector<gameRooms::Room> createRoomVector();

            int toggleInteractable(int nRoom, int nWall, int nIndex);

            int getRoomSize(int nRoom);
            int getFloorInteractableIndex(int nRoom, int nIndex);
            int getFloorInteractableWall(int nRoom, int nIndex);
            std::vector<bool> getInteractIndices(int nRoom, int nWall);
            std::vector<bool> getDoorIndices(int nRoom, int nWall);
            void connectDoor(Door* pDoor1, Door* pDoor2);
            //void updateDoor(int nRoom, int nWall, int nIndex, int nAction);
            InteractablesType getInteractablesType(int nRoom, int nWall, int nIndex);
            Door* getDoor(int nRoom, int nWall, int nIndex);
            Lightswitch* getLightswitch(int nRoom, int nWall);
            std::vector<int> getFloorDecorIndices(int nRoom);
    };
}

#endif