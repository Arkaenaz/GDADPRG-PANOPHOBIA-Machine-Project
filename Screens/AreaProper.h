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
    using namespace gameInteractable;
    class Area{
        private:
            
            std::vector<gameArea::Room> vecRoom;

        public:
            Area();

            int toggleInteractable(int nRoom, int nWall, int nIndex);

            int getRoomSize(int nRoom);
            std::vector<bool> getInteractIndices(int nRoom, int nWall);
            std::vector<bool> getDoorIndices(int nRoom, int nWall);
            Door* getDoor(int nRoom, int nWall, int nIndex);
    };
}

#endif