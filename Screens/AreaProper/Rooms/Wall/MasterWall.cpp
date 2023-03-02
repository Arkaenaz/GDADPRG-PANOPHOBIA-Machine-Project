#include "MasterWalls.h"

using namespace gameArea;
using namespace gameInteractable;

MasterWall1::MasterWall1():WallOBJ(){
    //none
}
MasterWall2::MasterWall2():WallOBJ(){
    this->vecDecor.push_back(Door(1, 3));
    this->createDecor(7);
    this->vecDecor.push_back(Lightswitch());
}
MasterWall3::MasterWall3():WallOBJ(){
    this->createDecor(6);
}
MasterWall4::MasterWall4():WallOBJ(){
    //none
}