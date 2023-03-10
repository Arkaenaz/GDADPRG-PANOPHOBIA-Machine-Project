/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Door class
****************************************************/

#ifndef GAME_INTERACTABLE_DOOR_H
#define GAME_INTERACTABLE_DOOR_H

#include "../../Interactable.h"

namespace gameInteractable{
    class Door : public gameInteractable::Interactable {
        private:
            //gives player room index where the door is connected to
            int nRoom;
            Door* pDoor;

        public:
            Door();
            Door(int nRoom, int nDirection);

        public:
            int interact() override;
            void connectDoor(Door* CDoor);
            void update(int nAction);
            int getRoom();
            int getDirection();
            Door* getConnection();
    };
}

#endif