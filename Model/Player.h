/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 21, 2023
Description: Player class
****************************************************/

#ifndef GAME_ELEMENTS_PLAYER_H
#define GAME_ELEMENTS_PLAYER_H

#include "string"
<<<<<<< HEAD

#include "AreaProper.h"
=======
>>>>>>> c508d341fa82e1bb67254f394fedb764836fd3bd

#include "../Config/Settings.h"
#include "../Enum/EnumDirection.h"
#include "../Utility/Utility.h"
#include "../Libraries/CandyTUI/TUIPrinter.h"
#include "../Libraries/CandyTUI/Model/Enum/EnumRooms.h"

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

namespace gameElements {
    using namespace candyTUI;
    using namespace gameInteractable;

    class Player{
        private:
            std::string strName;

            int nRoom;
            int aDirection[6];
            //for knowing which direction you were looking at prior to looking at the floor
            int nPrevDirection;

            float fSanity;
            bool isDead;

        public:
            Player();
            Player(std::string strName);

            int pan(int nDirection, int nRoomSize);
            int move(Door CDoor);
            int interact(Area CArea, int nIndex);
            //void changeEquipment();
            //void viewJournal();

            void sanityDrain(bool bLight);

            int getRoom();
            int getDirection(int nRoom);
            int getPrevDirection();
            float getSanity();
            std::string getName();

            void setDirection(int nDirection, int nRoom);
            void setRoom(int nRoom);
    };
}

#endif