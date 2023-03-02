#include "KidsWalls.h"

using namespace gameArea;
using namespace gameInteractable;

KidsWall1::KidsWall1(){
    this->createDecor(1);
}
KidsWall2::KidsWall2(){
    this->vecDecor.push_back(Door(1, 3));
    this->vecDecor.push_back(Door(0, 1));
    this->vecDecor.push_back(Lightswitch());
}
KidsWall3::KidsWall3(){
    this->createDecor(2);
}
KidsWall4::KidsWall4(){
    this->createDecor(4);
}