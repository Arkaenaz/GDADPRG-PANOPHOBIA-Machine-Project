#include "FoyerRoom.h"

using namespace gameArea;

FoyerRoom::FoyerRoom():gameArea::Room(){
    this->vecWall.push_back(FoyerWall1());
    this->vecWall.push_back(FoyerWall2());
    this->vecWall.push_back(FoyerWall3());
    this->vecWall.push_back(FoyerWall4());
}