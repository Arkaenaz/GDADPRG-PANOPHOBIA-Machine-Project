/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Room class
****************************************************/

#ifndef GAME_ELEMENTS_ROOM_H
#define GAME_ELEMENTS_ROOM_H

#include "iostream"
#include "vector"

#include "Floor.h"
#include "Wall.h"

namespace gameArea{
    using namespace gameInteractable;
    class Room{
        private:
            Floor CFloor;
            std::vector<Wall> vecWall;            
            bool bLight;
            float fTemperature;

        public:
            Room();

        public:
            int toggleInteractable(int nWall, int nIndex);

            bool getLight();
            float getTemperature();
            Door* getDoor(int nWall, int nIndex);
    };
}

#endif