#ifndef GAME_ROOMS_VAN_WALLS_H
#define GAME_ROOMS_VAN_WALLS_H

#include "../../Wall.h"
#include "../Interactable/Decor.h"
#include "../Interactable/Door.h"
#include "../Interactable/Lightswitch.h"

namespace gameRooms {
    using namespace gameInteractable;
    class VanWall1 : public gameRooms::Wall{
        public:
            VanWall1();
    };
    class VanWall2 : public gameRooms::Wall{
        public:
            VanWall2();
        
        public:

            float sanityPlayer(float fSanity);
            float sanityAverage(float fSanity1,float fSanity2,float fSanity3,float fSanity4);
            
    };
    class VanWall3 : public gameRooms::Wall{
        public:
            VanWall3();

        public:
            void endRun();
    };
    class VanWall4 : public gameRooms::Wall{
        public:
            VanWall4();
    };
}

#endif