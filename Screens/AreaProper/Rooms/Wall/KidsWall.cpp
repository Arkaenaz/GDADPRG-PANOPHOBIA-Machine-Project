#include "KidsWalls.h"

using namespace gameArea;
using namespace gameInteractable;

KidsWall1::KidsWall1():WallOBJ(){
    this->createDecor(1);
}
KidsWall2::KidsWall2():WallOBJ(){
    this->vecDecor.push_back(Door(1, 3));
    this->vecDecor.push_back(Door(0, 1));
    this->vecDecor.push_back(Lightswitch());
}
KidsWall3::KidsWall3():WallOBJ(){
    this->createDecor(2);
}
KidsWall4::KidsWall4():WallOBJ(){
    this->createDecor(4);
}