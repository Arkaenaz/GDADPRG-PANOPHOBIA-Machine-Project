#include "KidsRoom.h"

using namespace gameArea;

KidsRoom::KidsRoom():RoomOBJ(){
    this->vecWall.push_back(KidsWall1());  
    this->vecWall.push_back(KidsWall2());  
    this->vecWall.push_back(KidsWall3());  
    this->vecWall.push_back(KidsWall4());  
}
