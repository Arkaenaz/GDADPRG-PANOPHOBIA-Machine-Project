#include "Room.h"

using namespace gameArea;

Room::Room(){
    this->bLight = true;
}

int Room::toggleInteractable(int nWall, int nIndex, int nPrevDir){
    int nAction;
    if(nWall == -1){
        nAction = this->CFloor.toggleInteractable(nIndex,this->vecWall[nPrevDir]);
    }
    else{
        nAction = this->vecWall[nWall].toggleInteractable(nIndex,CFloor);
    }
    return nAction;
}