#include "AreaProper.h"

using namespace gameArea;

Area::Area(){
    //do something here
    //make the rooms and all that
}

int Area::toggleInteractable(int nRoom, int nWall, int nIndex){
    this->vecRoom[nRoom].toggleInteractable(nWall, nIndex);
}

Door* Area::getDoor(int nRoom, int nWall, int nIndex){
    this->vecRoom[nRoom].getDoor(nWall, nIndex);
}