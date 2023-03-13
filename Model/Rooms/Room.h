/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Room class
****************************************************/

#ifndef GAME_ROOMS_ROOM_H
#define GAME_ROOMS_ROOM_H

#include "iostream"
#include "vector"

#include "Parts/Wall.h"

namespace gameRooms {
    using namespace gameInteractable;
    class Room {
        protected:
            Floor CFloor;
            std::vector<Wall> vecWall;            
            bool bLight;
            float fTemperature;

        public:
            Room();

        public:
            int toggleInteractable(int nWall, int nIndex);

            int getRoomSize();
            bool getLight();
            float getTemperature();
            int getFloorInteractableIndex(int nIndex);
            int getFloorInteractableWall(int nIndex);
            std::vector<bool> getInteractIndices(int nWall);
            std::vector<bool> getDoorIndices(int nWall);
            //void connectDoor(int nWall, Door* pDoor1, Door* pDoor2);
            //void updateDoor(int nWall, int nIndex, int nAction);
            InteractablesType getInteractablesType(int nWall, int nIndex);
            Door* getDoor(int nWall, int nIndex);
            Lightswitch* getLightswitch(int nWall);
            std::vector<int> getFloorDecorIndices();
    };
}

#endif