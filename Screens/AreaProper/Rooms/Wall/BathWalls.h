#ifndef GAME_ELEMENTS_WALL_BATH_H
#define GAME_ELEMENTS_WALL_BATH_H

#include "../../Wall.h"
#include "../Interactable/Decor.h"
#include "../Interactable/Door.h"
#include "../Interactable/Lightswitch.h"

namespace gameArea{
    using namespace gameInteractable;
    class BathWall1 : public WallOBJ{
        public:
            BathWall1();
    };
    class BathWall2 : public WallOBJ{
        public:
            BathWall2();
    };
    class BathWall3 : public WallOBJ{
        public:
            BathWall3();
    };
    class BathWall4 : public WallOBJ{
        public:
            BathWall4();
    };
}

#endif