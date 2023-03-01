#include "Wall.h"

using namespace gameArea;
using namespace gameInteractable;

WallOBJ::WallOBJ(){

}

void WallOBJ::pickDecor(InteractOBJ CInteractable){
    //empty but leaving this here just in case
}

void WallOBJ::pickDecor(Decor CDecor){
    this->vecDecor[CDecor.getIndex()].setToggled();
}


int WallOBJ::toggleInteractable(int nIndex, Floor CFloor){
    int nAction = this->vecDecor[nIndex].interact();
    if(nAction == 0){
        CFloor.dropDecor(this->vecDecor[nIndex]);
        this->vecDecor[nIndex].setToggled();
    }
}

Door* WallOBJ::getDoor(int nIndex){
    Door* pDoor = dynamic_cast<Door*>(&this->vecDecor[nIndex]);
    return pDoor;
}

void WallOBJ::createDecor(int nSize){
    int i = this->vecDecor.size();
    for(i ; i < nSize ; i++){
        this->vecDecor.push_back(Decor(i));
    }
}

