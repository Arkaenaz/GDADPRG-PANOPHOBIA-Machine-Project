#include "HallwayWalls.h"

using namespace gameArea;
using namespace gameInteractable;

HallwayWall1::HallwayWall1():gameArea::Wall(){
    this->vecDecor.push_back(new Door(-1, -1));
    this->createDecor(6);
}

HallwayWall2::HallwayWall2():gameArea::Wall(){
    //none
}
HallwayWall3::HallwayWall3():gameArea::Wall(){
    this->vecDecor.push_back(new Door(-1, -1));
    this->createDecor(4);
}
HallwayWall4::HallwayWall4():gameArea::Wall(){
    this->vecDecor.push_back(new Door(-1, -1));
    this->vecDecor.push_back(new Door(-1, -1));
    this->createDecor(6);
}
HallwayWall5::HallwayWall5():gameArea::Wall(){
    this->vecDecor.push_back(new Door(-1, -1));
    this->createDecor(4);
}
HallwayWall6::HallwayWall6():gameArea::Wall(){
    this->createDecor(5);
}
HallwayWall7::HallwayWall7():gameArea::Wall(){
    this->vecDecor.push_back(new Door(0,2));
    this->createDecor(7);
    this->vecDecor.push_back(new Lightswitch());

}
HallwayWall8::HallwayWall8():gameArea::Wall(){
    this->vecDecor.push_back(new Door(2,3));
    this->vecDecor.push_back(new Door(3,3));
    this->vecDecor.push_back(new Door(4,3));
}