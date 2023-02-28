#include "Room.h"

using namespace gameArea;

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