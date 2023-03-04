#include "MasterRoom.h"

using namespace gameArea;

MasterRoom::MasterRoom():gameArea::Room(){
    this->vecWall.push_back(MasterWall1());
    this->vecWall.push_back(MasterWall2());
    this->vecWall.push_back(MasterWall3());
    this->vecWall.push_back(MasterWall4());
}