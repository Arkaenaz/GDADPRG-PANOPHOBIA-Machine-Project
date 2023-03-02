#include "HallwayWalls.h"

using namespace gameArea;
using namespace gameInteractable;

HallwayWall1::HallwayWall1():WallOBJ(){
    //this->vecDecor.push_back(Door(living room, nDirection));
    this->createDecor(6);
}

HallwayWall2::HallwayWall2():WallOBJ(){
    //none
}
HallwayWall3::HallwayWall3():WallOBJ(){
    //this->vecDecor.push_back(Door(basement, nDirection));
    this->createDecor(4);
}
HallwayWall4::HallwayWall4():WallOBJ(){
    //this->vecDecor.push_back(Door(dining room, nDirection));
    //this->vecDecor.push_back(Door(kitchen, nDirection));
    this->createDecor(6);
}
HallwayWall5::HallwayWall5():WallOBJ(){
    //this->vecDecor.push_back(Door(utility, nDirection));
    this->createDecor(4);
}
HallwayWall6::HallwayWall6():WallOBJ(){
    this->createDecor(5);
}
HallwayWall7::HallwayWall7():WallOBJ(){
    this->vecDecor.push_back(Door(0,2));
    this->createDecor(7);
    this->vecDecor.push_back(Lightswitch());

}
HallwayWall8::HallwayWall8():WallOBJ(){
    this->vecDecor.push_back(Door(2,3));
    this->vecDecor.push_back(Door(3,3));
    this->vecDecor.push_back(Door(4,3));
}