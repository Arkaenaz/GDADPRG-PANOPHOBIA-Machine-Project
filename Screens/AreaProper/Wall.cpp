#include "Wall.h"

using namespace gameArea;
using namespace gameInteractable;

Wall::Wall(){

}

void Wall::pickDecor(Interactable CDecor){
    this->vecDecor.push_back(CDecor);
}

/*
int Wall::toggleInteractable(int nIndex, Floor CFloor){
    int nAction = this->vecDecor[nIndex].interact();
    if(nAction == 0){
        CFloor.dropDecor(this->vecDecor[nIndex]);
        this->vecDecor.erase(nIndex);
    }
}
*/

