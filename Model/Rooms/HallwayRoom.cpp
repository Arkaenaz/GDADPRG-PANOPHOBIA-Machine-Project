#include "HallwayRoom.h"

using namespace gameRooms;

HallwayRoom::HallwayRoom():gameRooms::Room(){
    this->vecWall.push_back(HallwayWall1());
    this->vecWall.push_back(HallwayWall2());
    this->vecWall.push_back(HallwayWall3());
    this->vecWall.push_back(HallwayWall4());
    this->vecWall.push_back(HallwayWall5());
    this->vecWall.push_back(HallwayWall6());
    this->vecWall.push_back(HallwayWall7());
    this->vecWall.push_back(HallwayWall8());
}