#include "HallwayWalls.h"

using namespace gameRooms;
using namespace gameInteractable;

HallwayWall1::HallwayWall1() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(1,0,6));
    this->createDecor(6,0);
}

HallwayWall2::HallwayWall2() : gameRooms::Wall() {
    //none
}
HallwayWall3::HallwayWall3() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(1,2,4));
    this->createDecor(4,2);
}
HallwayWall4::HallwayWall4() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(1,3,7));
    this->vecDecor.push_back(new Door(1,3,7));
    this->createDecor(6,3);
}
HallwayWall5::HallwayWall5() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(1,4,1));
    this->createDecor(4,4);
}
HallwayWall6::HallwayWall6() : gameRooms::Wall() {
    this->createDecor(5,5);
}
HallwayWall7::HallwayWall7() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(1,6,0));
    this->createDecor(7,6);
    //this->vecDecor.push_back(new Lightswitch());
    this->pLightswitch = new Lightswitch(6);
}
HallwayWall8::HallwayWall8() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(1,7,3));
    this->vecDecor.push_back(new Door(1,7,3));
    this->vecDecor.push_back(new Door(1,7,3));
}