#ifndef GAME_ELEMENTS_WALL_KIDS_H
#define GAME_ELEMENTS_WALL_KIDS_H

#include "../../Wall.h"
#include "../Interactable/Decor.h"
#include "../Interactable/Door.h"
#include "../Interactable/Lightswitch.h"

namespace gameArea{
    using namespace gameInteractable;
    class KidsWall1 : public WallOBJ{
        public:
            KidsWall1();
    };
    class KidsWall2 : public WallOBJ{
        public:
            KidsWall2();
    };
    class KidsWall3 : public WallOBJ{
        public:
            KidsWall3();
    };
    class KidsWall4 : public WallOBJ{
        public:
            KidsWall4();
    };
}

#endif