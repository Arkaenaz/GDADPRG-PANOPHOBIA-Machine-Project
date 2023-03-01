#include "AreaProper.h"

using namespace gameArea;

Area::Area(){
    //do something here
    //make the rooms and all that
}

int Area::toggleInteractable(int nRoom, int nWall, int nIndex){
    return this->vecRoom[nRoom].toggleInteractable(nWall, nIndex);
}

int Area::getRoomSize(int nRoom){
    return this->vecRoom[nRoom].getRoomSize();
}

Door* Area::getDoor(int nRoom, int nWall, int nIndex){
    return this->vecRoom[nRoom].getDoor(nWall, nIndex);
}
