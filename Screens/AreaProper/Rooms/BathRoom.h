#ifndef GAME_ELEMENTS_ROOM_BATH_H
#define GAME_ELEMENTS_ROOM_BATH_H

#include "../Room.h"
#include "Wall/BathWalls.h"

namespace gameArea{
    using namespace gameInteractable;
    class BathRoom : public gameArea::Room{
        public:
            BathRoom();
    };
}

#endif