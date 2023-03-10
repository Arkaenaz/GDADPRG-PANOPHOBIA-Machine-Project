#ifndef GAME_ROOMS_MASTER_ROOM_H
#define GAME_ROOMS_MASTER_ROOM_H

#include "Room.h"
#include "Parts/Walls/MasterRoom/MasterWalls.h"

namespace gameRooms {
    using namespace gameInteractable;
    class MasterRoom : public gameRooms::Room {
        public:
            MasterRoom();
    };
}

#endif