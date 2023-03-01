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
#include "../Screens/AreaProper.h"
#include "../Libraries/CandyTUI/TUIPrinter.h"
#include "../Libraries/CandyTUI/Model/Enum/EnumRooms.h"

namespace gamePlayer{

    using namespace std;
    using namespace candyTUI;
    using namespace gameArea;
    using namespace gameInteractable;

    class Player{
        private:
            string strName;

            int nRoom;
            int aDirection[6];

            float fSanity;
            bool isDead;

        public:
            Player();

            void pan(int nDirection, int nRoomSize);
            int move(Door CDoor);
            void move(int nRoom, int nDirection);
            void interact(int nIndex);
            void changeEquipment();
            void viewJournal();

            void drainSanity(float PASSIVE_DRAIN);

            int getRoom();
            int getDirection(int nRoom);
            float getSanity();

            void setDirection(int nDirection, int nRoom);
    };
}

#endif