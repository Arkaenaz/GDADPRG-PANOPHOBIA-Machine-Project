#include "BathWalls.h"

using namespace gameArea;
using namespace gameInteractable;

BathWall1::BathWall1():WallOBJ(){
    this->createDecor(3);
}
BathWall2::BathWall2():WallOBJ(){
    this->vecDecor.push_back(Door(1, 3));
    this->createDecor(2);
    this->vecDecor.push_back(Lightswitch());
}
BathWall3::BathWall3():WallOBJ(){
    this->createDecor(3);
}
BathWall4::BathWall4():WallOBJ(){
    this->createDecor(2);
}