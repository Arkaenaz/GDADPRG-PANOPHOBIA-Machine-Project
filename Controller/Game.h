/****************************************************
Author: Shane Laurenze M. Cablayan
Date Created: February 18, 2022, 10:41 PM
Description: 
****************************************************/

#ifndef CONTROLLERS_GAME_H
#define CONTROLLERS_GAME_H

#include "vector"

#include "../Libraries/CandyTUI/TUIPrinter.h"
#include "../Utility/VanPrinter.h"
#include "../Utility/Interface.h"
#include "../Model/Player.h"

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

namespace controllers {
    using namespace utilities;
    using namespace gameElements;
    class Game {
        private:
            std::vector<Player> vecPlayer;
            Area CArea;
            TUIPrinter CTUIPrinter;
            VanPrinter CVPrinter;
            Interface CInterface;
            int nPlayer;
            
        private:
            std::vector<Player> createPlayerVector();
            void addPlayer();
            void removePlayer();
            
            void printPerspective(int nTurn);
            void playerInput(char cInput, int nTurn);

            void turnMultiple(int nNewDirection, int nRoomSize, int nTurn);
            void panLeft(int nTurn);
            void panRight(int nTurn);
            void panUpDown(int nTurn);
            void playerInteract(int nTurn, int nIndex);
            void enterDoor(int nTurn, int nIndex);
            void toggleLight(int nTurn);

        public:
            Game();
        
        public:
            void title();
            void lobby();
            void start();
    };
}

#endif