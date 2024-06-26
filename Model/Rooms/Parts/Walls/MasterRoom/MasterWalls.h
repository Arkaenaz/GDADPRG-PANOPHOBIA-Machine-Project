#ifndef GAME_ROOMS_MASTER_WALLS_H
#define GAME_ROOMS_MASTER_WALLS_H

#include "../../Wall.h"
#include "../../Interactables/Decor.h"
#include "../../Interactables/Door.h"
#include "../../Interactables/Lightswitch.h"

namespace gameRooms {
    using namespace gameInteractable;
    class MasterWall1 : public gameRooms::Wall {
        public:
            MasterWall1();
    };
    class MasterWall2 : public gameRooms::Wall {
        public:
            MasterWall2();
    };
    class MasterWall3 : public gameRooms::Wall {
        public:
            MasterWall3();
    };
    class MasterWall4 : public gameRooms::Wall {
        public:
            MasterWall4();
    };
}

#endif