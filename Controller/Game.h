/****************************************************
Author: Shane Laurenze M. Cablayan
Date Created: February 18, 2022, 10:41 PM
Description: 
****************************************************/

#ifndef CONTROLLERS_GAME_H
#define CONTROLLERS_GAME_H

#include "vector"

#include "../Libraries/CandyTUI/TUIPrinter.h"
#include "../Utility/Interface.h"
#include "../Model/Player.h"

namespace controllers {
    using namespace utilities;
    using namespace gamePlayer;
    using namespace gameArea;
    class Game {
        private:
            std::vector<Player> vecPlayer;
            Area CArea;
            TUIPrinter CTUIPrinter;
            Interface CInterface;
            int nPlayer;
            
        private:
            std::vector<Player> createPlayerVector();
            void addPlayer();
            void removePlayer();

        public:
            Game();
        
        public:
            void title();
            void lobby();
            void start();
    };
}

#endif