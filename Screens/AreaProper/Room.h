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
    class Room{
        private:
            Floor CFloor;
            std::vector<Wall> vecWall;            
            bool bLight;
            float fTemperature;

        public:
            Room();

        public:
            int toggleInteractable(int nWall, int nIndex, int nPrevDir);

            bool getLight();
            float getTemperature();
    };
}

#endif