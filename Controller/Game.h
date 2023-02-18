/****************************************************
Author: 
Date Created: February 18, 2022, 10:41 PM
Description: 
****************************************************/

#ifndef CONTROLLERS_GAME_H
#define CONTROLLERS_GAME_H

#include "../Utility/Interface.h"

namespace controllers {
    using namespace utilities;
    class Game {
        private:
            Interface CInterface;

        public:
            Game();
        
        public:
            void title();
            void lobby();
    };
}

#endif