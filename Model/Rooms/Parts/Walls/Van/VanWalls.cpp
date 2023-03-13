#include "VanWalls.h"

using namespace gameRooms;
using namespace gameInteractable;

VanWall1::VanWall1() : gameRooms::Wall() {
    this->vecDecor.push_back(new Door(5,0,2));
}
VanWall2::VanWall2() : gameRooms::Wall() {
    
}

float VanWall2::sanityPlayer(float fSanity) {
    //display fSanity
    return 0;
}
float VanWall2::sanityAverage(float fSanity1,float fSanity2,float fSanity3,float fSanity4){
    //WIP
    return 0;
}

VanWall3::VanWall3() : gameRooms::Wall() {

}
void VanWall3::endRun() {
    //function meant to handle ending a game (may be placed elsewhere in later patches)
}

VanWall4::VanWall4() : gameRooms::Wall() {

}