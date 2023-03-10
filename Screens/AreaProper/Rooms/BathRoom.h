#ifndef GAME_ROOMS_BATH_ROOM_H
#define GAME_ROOMS_BATH_ROOM_H

#include "../Room.h"
#include "Wall/BathWalls.h"

namespace gameRooms {
    using namespace gameInteractable;
    class BathRoom : public gameRooms::Room {
        public:
            BathRoom();
    };
}

#endif