#include "Van.h"

using namespace gameRooms;

Van::Van() : gameRooms::Room(){
    this->vecWall.push_back(VanWall1());
    this->vecWall.push_back(VanWall2());
    this->vecWall.push_back(VanWall3());
    this->vecWall.push_back(VanWall4());
}

