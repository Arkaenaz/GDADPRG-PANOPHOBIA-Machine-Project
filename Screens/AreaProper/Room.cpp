#include "Room.h"

using namespace gameArea;
using namespace gameInteractable;

RoomOBJ::RoomOBJ(){
    this->bLight = true;
}

int RoomOBJ::toggleInteractable(int nWall, int nIndex){
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

int RoomOBJ::getRoomSize(){
    return this->vecWall.size();
}

bool RoomOBJ::getLight(){
    return this->bLight;
}

float RoomOBJ::getTemperature(){
    return this->fTemperature;
}

Door* RoomOBJ::getDoor(int nWall, int nIndex){
    return this->vecWall[nWall].getDoor(nIndex);
}