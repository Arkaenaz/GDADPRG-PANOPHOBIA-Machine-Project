#include "Wall.h"

using namespace gameArea;
using namespace gameInteractable;

Wall::Wall(){

}

void Wall::pickDecor(Interactable CInteractable){
    //empty but leaving this here just in case
}

void Wall::pickDecor(Decor CDecor){
    this->vecDecor[CDecor.getIndex()].setToggled();
}


int Wall::toggleInteractable(int nIndex, Floor CFloor){
    int nAction = this->vecDecor[nIndex].interact();
    if(nAction == 0){
        CFloor.dropDecor(this->vecDecor[nIndex]);
        this->vecDecor[nIndex].setToggled();
    }
}

Door* Wall::getDoor(int nIndex){
    Door* pDoor = dynamic_cast<Door*>(&this->vecDecor[nIndex]);
    return pDoor;
}

void Wall::createDecor(int nStart, int nSize){
    int i;
    for(i = nStart; i < nSize; i++){
        this->vecDecor.push_back(Decor(i));
    }
}

