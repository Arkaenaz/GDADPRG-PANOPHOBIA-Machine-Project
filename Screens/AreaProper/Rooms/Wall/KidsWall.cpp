#include "KidsWalls.h"

using namespace gameArea;
using namespace gameInteractable;

KidsWall1::KidsWall1():gameArea::Wall(){
    this->createDecor(1);
}
KidsWall2::KidsWall2():gameArea::Wall(){
    this->vecDecor.push_back(new Door(1, 3));
    this->vecDecor.push_back(new Door(0, 1));
    //this->vecDecor.push_back(new Lightswitch());
    this->pLightswitch = new Lightswitch();
}
KidsWall3::KidsWall3():gameArea::Wall(){
    this->createDecor(2);
}
KidsWall4::KidsWall4():gameArea::Wall(){
    this->createDecor(4);
}