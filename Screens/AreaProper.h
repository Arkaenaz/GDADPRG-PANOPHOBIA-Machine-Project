/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Area class
****************************************************/

#ifndef GAME_ELEMENTS_AREA_H
#define GAME_ELEMENTS_AREA_H

#include "iostream"
#include "vector"

#include "AreaProper/Room.h"

namespace gameArea{
    class Area{
        private:
            
            std::vector<Room> vecRoom;

        public:
            Area();

            void toggleInteractable(int nRoom, int nWall, int nIndex);


    };
}

#endif