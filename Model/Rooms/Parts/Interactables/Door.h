/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Door class
****************************************************/

#ifndef GAME_INTERACTABLE_DOOR_H
#define GAME_INTERACTABLE_DOOR_H

#include "../Interactable.h"
#include "../../../../Config/Settings.h"

namespace gameInteractable{
    class Door : public gameInteractable::Interactable {
        private:
            int nRoom;
            int nOppositeWall;
            Door* pDoor;

        public:
            Door(int nRoom, int nWall, int nOppositeWall);

        public:
            void connectDoor(Door* pDoor);
            //void update(int nAction);
            void toggle() override;
            int getRoom();
            Door* getConnection();
            int getOppositeWall();
    };
}

#endif