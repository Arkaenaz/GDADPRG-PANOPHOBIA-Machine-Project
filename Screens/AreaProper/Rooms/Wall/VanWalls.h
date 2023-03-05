#ifndef GAME_ELEMENTS_WALL_VAN_H
#define GAME_ELEMENTS_WALL_VAN_H

#include "../../Wall.h"
#include "../Interactable/Decor.h"
#include "../Interactable/Door.h"
#include "../Interactable/Lightswitch.h"

namespace gameArea{
    using namespace gameInteractable;
    class VanWall1 : public gameArea::Wall{
        public:
            VanWall1();
    };
    class VanWall2 : public gameArea::Wall{
        public:
            VanWall2();
        
        public:

            float sanityPlayer(float fSanity);
            float sanityAverage(float fSanity1,float fSanity2,float fSanity3,float fSanity4);
            void endRun();
    };
    class VanWall3 : public gameArea::Wall{
        public:
            VanWall3();
    };
    class VanWall4 : public gameArea::Wall{
        public:
            VanWall4();
    };
}

#endif