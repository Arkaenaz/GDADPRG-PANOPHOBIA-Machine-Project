#ifndef GAME_ELEMENTS_WALL_BATH_H
#define GAME_ELEMENTS_WALL_BATH_H

#include "../../Wall.h"
#include "../Interactable/Decor.h"
#include "../Interactable/Door.h"
#include "../Interactable/Lightswitch.h"

namespace gameArea{
    using namespace gameInteractable;
    class BathWall1 : public gameArea::Wall{
        public:
            BathWall1();
    };
    class BathWall2 : public gameArea::Wall{
        public:
            BathWall2();
    };
    class BathWall3 : public gameArea::Wall{
        public:
            BathWall3();
    };
    class BathWall4 : public gameArea::Wall{
        public:
            BathWall4();
    };
}

#endif