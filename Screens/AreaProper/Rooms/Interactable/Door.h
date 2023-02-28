/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Door class
****************************************************/

#ifndef GAME_ELEMENTS_INTERACTABLE_DOOR_H
#define GAME_ELEMENTS_INTERACTABLE_DOOR_H

#include "../../Interactable.h"

namespace gameInteractable{
    class Door : public Interactable{
        private:
            //gives player room index where the door is connected to
            int nRoom;
            //to be used to set the player's direction when entering the connected room
            int nDirection;

            bool bOpen;

        public:
            Door();
            Door(int nRoom, int nDirection);

        public:
            int interact();

            int getRoom();
            int getDirection();

            bool isOpen();
    };
}

#endif