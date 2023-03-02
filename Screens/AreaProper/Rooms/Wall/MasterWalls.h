#ifndef GAME_ELEMENTS_WALL_MASTER_H
#define GAME_ELEMENTS_WALL_MASTER_H

#include "../../Wall.h"
#include "../Interactable/Decor.h"
#include "../Interactable/Door.h"
#include "../Interactable/Lightswitch.h"

namespace gameArea{
    using namespace gameInteractable;
    class MasterWall1 : public WallOBJ{
        public:
            MasterWall1();
    };
    class MasterWall2 : public WallOBJ{
        public:
            MasterWall2();
    };
    class MasterWall3 : public WallOBJ{
        public:
            MasterWall3();
    };
    class MasterWall4 : public WallOBJ{
        public:
            MasterWall4();
    };
}

#endif