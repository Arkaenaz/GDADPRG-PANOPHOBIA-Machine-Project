#include "Room.h"

using namespace gameArea;
using namespace gameInteractable;

Room::Room(){
    this->bLight = true;
}

int Room::toggleInteractable(int nWall, int nIndex){
    int nAction;
    int nDir;
    if(nWall == -1){
        nDir = this->CFloor.getInteractableIndex(nIndex);
        nAction = this->CFloor.toggleInteractable(nIndex,this->vecWall[nDir]);
    }
    else{
        nAction = this->vecWall[nWall].toggleInteractable(nIndex,CFloor);
    }
    return nAction;
}

bool Room::getLight(){
    return this->bLight;
}

float Room::getTemperature(){
    return this->fTemperature;
}

Door* Room::getDoor(int nWall, int nIndex){
    return this->vecWall[nWall].getDoor(nIndex);
}