#ifndef GAME_ROOMS_KIDS_ROOM_H
#define GAME_ROOMS_KIDS_ROOM_H

#include "Room.h"
#include "Parts/Walls/KidsRoom/KidsWalls.h"

namespace gameRooms {
    using namespace gameInteractable;
    class KidsRoom : public gameRooms::Room {
        public:
            KidsRoom();
    };
}

#endif