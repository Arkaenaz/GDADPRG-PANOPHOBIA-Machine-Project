/****************************************************
Author: 
Date Created: 
Description: 
****************************************************/

#ifndef GAME_ELEMENTS_VAN_H
#define GAME_ELEMENTS_VAN_H

#include "../Room.h"

namespace gameArea{
    class Van{

        public:
            Van();
        

        public:

            float sanityPlayer(float fSanity);
            float sanityAverage(float fSanity1,float fSanity2,float fSanity3,float fSanity4);
            void endRun();
    };

}

#endif

