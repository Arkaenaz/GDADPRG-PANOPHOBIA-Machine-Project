/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Room class
****************************************************/

#ifndef GAME_ELEMENTS_ROOM_H
#define GAME_ELEMENTS_ROOM_H

#include "iostream"
#include "vector"

namespace gameArea{
   class WallOBJ;
}

#include "Wall.h"

namespace gameArea{
    using namespace gameInteractable;
    class RoomOBJ{
        protected:
            Floor CFloor;
            std::vector<WallOBJ> vecWall;            
            bool bLight;
            float fTemperature;

        public:
            RoomOBJ();

        public:
            int toggleInteractable(int nWall, int nIndex);

            int getRoomSize();
            bool getLight();
            float getTemperature();
            Door* getDoor(int nWall, int nIndex);
    };
}

#endif