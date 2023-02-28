#include "Floor.h"

using namespace gameArea;
using namespace gameInteractable;

Floor::Floor(){

}

void Floor::dropDecor(Interactable CDecor){
    this->vecDecor.push_back(CDecor);
}

int Floor::toggleInteractable(int nIndex, Wall CWall){
    int nAction = this->vecDecor[nIndex].interact();
    if(nAction == 1){
        CWall.pickDecor(this->vecDecor[nIndex]);
        this->vecDecor.erase(vecDecor.begin()+nIndex);
    }
}

int Floor::getInteractableIndex(int nIndex){
    return this->vecDecor[nIndex].getIndex();
}

