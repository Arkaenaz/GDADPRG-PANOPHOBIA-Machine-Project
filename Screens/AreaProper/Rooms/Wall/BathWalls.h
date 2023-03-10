#ifndef GAME_ROOMS_BATH_WALLS_H
#define GAME_ROOMS_BATH_WALLS_H

#include "../../Wall.h"
#include "../Interactable/Decor.h"
#include "../Interactable/Door.h"
#include "../Interactable/Lightswitch.h"

namespace gameRooms {
    using namespace gameInteractable;
    class BathWall1 : public gameRooms::Wall {
        public:
            BathWall1();
    };
    class BathWall2 : public gameRooms::Wall {
        public:
            BathWall2();
    };
    class BathWall3 : public gameRooms::Wall {
        public:
            BathWall3();
    };
    class BathWall4 : public gameRooms::Wall {
        public:
            BathWall4();
    };
}

#endif