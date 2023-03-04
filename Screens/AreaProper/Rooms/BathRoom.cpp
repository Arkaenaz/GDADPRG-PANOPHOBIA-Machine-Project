#include "BathRoom.h"

using namespace gameArea;

BathRoom::BathRoom():gameArea::Room(){
    this->vecWall.push_back(BathWall1());
    this->vecWall.push_back(BathWall2());
    this->vecWall.push_back(BathWall3());
    this->vecWall.push_back(BathWall4());
}