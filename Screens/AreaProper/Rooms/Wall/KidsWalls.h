#ifndef GAME_ELEMENTS_WALL_KIDS_H
#define GAME_ELEMENTS_WALL_KIDS_H

#include "../../Wall.h"
#include "../Interactable/Decor.h"
#include "../Interactable/Door.h"
#include "../Interactable/Lightswitch.h"

namespace gameArea{
    using namespace gameInteractable;
    class KidsWall1 : public gameArea::Wall{
        public:
            KidsWall1();
    };
    class KidsWall2 : public gameArea::Wall{
        public:
            KidsWall2();
    };
    class KidsWall3 : public gameArea::Wall{
        public:
            KidsWall3();
    };
    class KidsWall4 : public gameArea::Wall{
        public:
            KidsWall4();
    };
}

#endif