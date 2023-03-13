#include "BathWalls.h"

using namespace gameRooms;
using namespace gameInteractable;

BathWall1::BathWall1() : gameRooms::Wall() {
    this->createDecor(3,0);
}
BathWall2::BathWall2() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(4,1,3));
    this->createDecor(2,1);
    //this->vecDecor.push_back(new Lightswitch());
    this->pLightswitch = new Lightswitch(1);
}
BathWall3::BathWall3() : gameRooms::Wall() {
    this->createDecor(3,2);
}
BathWall4::BathWall4() : gameRooms::Wall() {
    this->createDecor(2,3);
}