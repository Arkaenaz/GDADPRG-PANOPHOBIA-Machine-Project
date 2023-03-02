#include "MasterRoom.h"

using namespace gameArea;

MasterRoom::MasterRoom():RoomOBJ(){
    this->vecWall.push_back(MasterWall1());
    this->vecWall.push_back(MasterWall2());
    this->vecWall.push_back(MasterWall3());
    this->vecWall.push_back(MasterWall4());
}