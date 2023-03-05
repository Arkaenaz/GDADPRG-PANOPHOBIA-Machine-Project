#include "VanWalls.h"

using namespace gameArea;
using namespace gameInteractable;

VanWall1::VanWall1():gameArea::Wall(){
    this->vecDecor.push_back(Door(0, 0));
}
VanWall2::VanWall2():gameArea::Wall(){
    
}

float VanWall2::sanityPlayer(float fSanity){
    //display fSanity
    return 0;
}
float VanWall2::sanityAverage(float fSanity1,float fSanity2,float fSanity3,float fSanity4){
    //WIP
    return 0;
}

VanWall3::VanWall3():gameArea::Wall(){

}
void VanWall3::endRun(){

}

VanWall4::VanWall4():gameArea::Wall(){

}