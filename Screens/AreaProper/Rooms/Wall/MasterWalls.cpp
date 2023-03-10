#include "MasterWalls.h"

using namespace gameRooms;
using namespace gameInteractable;

MasterWall1::MasterWall1() : gameRooms::Wall() {
    //none
}
MasterWall2::MasterWall2() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(1, 3));
    this->createDecor(7);
    //this->vecDecor.push_back(new Lightswitch());
    this->pLightswitch = new Lightswitch();
}
MasterWall3::MasterWall3() : gameRooms::Wall() {
    this->createDecor(6);
}
MasterWall4::MasterWall4() : gameRooms::Wall() {
    //none
}