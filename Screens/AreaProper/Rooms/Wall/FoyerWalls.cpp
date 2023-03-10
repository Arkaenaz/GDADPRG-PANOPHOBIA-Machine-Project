#include "FoyerWalls.h"

using namespace gameRooms;
using namespace gameInteractable;

FoyerWall1::FoyerWall1() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(1,0));
    this->createDecor(6);
}

FoyerWall2::FoyerWall2() : gameRooms::Wall() {
    this->createDecor(3);
}

FoyerWall3::FoyerWall3() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(5,0));
    //this->vecDecor.push_back(new Lightswitch());
    this->pLightswitch = new Lightswitch();
}

FoyerWall4::FoyerWall4() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(2,3));
}