#include "MasterWalls.h"

using namespace gameArea;
using namespace gameInteractable;

MasterWall1::MasterWall1():gameArea::Wall(){
    //none
}
MasterWall2::MasterWall2():gameArea::Wall(){
    this->vecDecor.push_back(new Door(1, 3));
    this->createDecor(7);
    this->vecDecor.push_back(new Lightswitch());
}
MasterWall3::MasterWall3():gameArea::Wall(){
    this->createDecor(6);
}
MasterWall4::MasterWall4():gameArea::Wall(){
    //none
}