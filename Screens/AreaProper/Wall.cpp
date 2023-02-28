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


