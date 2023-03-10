#ifndef GAME_ROOMS_KIDS_WALLS_H
#define GAME_ROOMS_KIDS_WALLS_H

#include "../../Wall.h"
#include "../Interactable/Decor.h"
#include "../Interactable/Door.h"
#include "../Interactable/Lightswitch.h"

namespace gameRooms {
    using namespace gameInteractable;
    class KidsWall1 : public gameRooms::Wall {
        public:
            KidsWall1();
    };
    class KidsWall2 : public gameRooms::Wall {
        public:
            KidsWall2();
    };
    class KidsWall3 : public gameRooms::Wall {
        public:
            KidsWall3();
    };
    class KidsWall4 : public gameRooms::Wall {
        public:
            KidsWall4();
    };
}

#endif