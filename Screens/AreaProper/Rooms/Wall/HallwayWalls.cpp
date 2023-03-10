#include "HallwayWalls.h"

using namespace gameRooms;
using namespace gameInteractable;

HallwayWall1::HallwayWall1() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(-1, -1));
    this->createDecor(6);
}

HallwayWall2::HallwayWall2() : gameRooms::Wall() {
    //none
}
HallwayWall3::HallwayWall3() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(-1, -1));
    this->createDecor(4);
}
HallwayWall4::HallwayWall4() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(-1, -1));
    this->vecDecor.push_back(new Door(-1, -1));
    this->createDecor(6);
}
HallwayWall5::HallwayWall5() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(-1, -1));
    this->createDecor(4);
}
HallwayWall6::HallwayWall6() : gameRooms::Wall() {
    this->createDecor(5);
}
HallwayWall7::HallwayWall7() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(0,2));
    this->createDecor(7);
    //this->vecDecor.push_back(new Lightswitch());
    this->pLightswitch = new Lightswitch();
}
HallwayWall8::HallwayWall8() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(2,3));
    this->vecDecor.push_back(new Door(3,3));
    this->vecDecor.push_back(new Door(4,3));
}