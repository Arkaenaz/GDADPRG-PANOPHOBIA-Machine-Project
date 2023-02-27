/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 21, 2023
Description: Player class
****************************************************/

#ifndef GAME_ELEMENTS_PLAYER_H
#define GAME_ELEMENTS_PLAYER_H

#include "iostream"

#include "../Enum/EnumDirection.h"
#include "../Utility/Utility.h"
#include "../Libraries/CandyTUI/TUIPrinter.h"
#include "../Libraries/CandyTUI/Model/Enum/EnumRooms.h"

namespace gamePlayer{

    using namespace std;
    using namespace candyTUI;

    class Player{
        private:
            string strName;
            int nRoom;
            int nDirection[6];
            float fSanity;
            bool isDead;

        public:
            Player();

            void pan(int nDirection);
            void move(int nRoom);
            void interact(int nIndex);
            void changeEquipment();
            void viewJournal();

            void drainSanity(float PASSIVE_DRAIN);

            int getRoom();
            int getDirection(int nIndex);
            float getSanity();
    };
}

#endif