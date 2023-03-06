#include "BathWalls.h"

using namespace gameArea;
using namespace gameInteractable;

BathWall1::BathWall1():gameArea::Wall(){
    this->createDecor(3);
}
BathWall2::BathWall2():gameArea::Wall(){
    this->vecDecor.push_back(new Door(1, 3));
    this->createDecor(2);
    //this->vecDecor.push_back(new Lightswitch());
    this->pLightswitch = new Lightswitch();
}
BathWall3::BathWall3():gameArea::Wall(){
    this->createDecor(3);
}
BathWall4::BathWall4():gameArea::Wall(){
    this->createDecor(2);
}