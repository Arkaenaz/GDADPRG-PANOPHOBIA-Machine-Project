#include "FoyerWalls.h"

using namespace gameRooms;
using namespace gameInteractable;

FoyerWall1::FoyerWall1() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(0,0,2));
    this->createDecor(6,0);
}

FoyerWall2::FoyerWall2() : gameRooms::Wall() {
    this->createDecor(3,1);
}

FoyerWall3::FoyerWall3() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(0,2,0));
    //this->vecDecor.push_back(new Lightswitch());
    this->pLightswitch = new Lightswitch(2);
}

FoyerWall4::FoyerWall4() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(0,3,1));
}