#include "Floor.h"
#include "Wall.h"

using namespace gameArea;
using namespace gameInteractable;

Floor::Floor(){
}

void Floor::eraseDecor(int nIndex){
    if(nIndex < (int)this->vecDecor.size()){
        this->vecDecor.erase(vecDecor.begin()+nIndex);
    }
}

/*Floor::dropDecor   pushes CDecor into vecDecor
    @param CDecor       = Decor push
*/
void Floor::dropDecor(gameInteractable::Interactable *CDecor){
    this->vecDecor.push_back(CDecor);
}

/*Floor::toggleInteractable  handles interact action
    return -1           = invalid/error
            0           = decor drop
            1           = decor pick up
            2           = light off
            3           = light on
            4           = door close
            5           = door open

    @param nIndex       = interactable index
*/
int Floor::toggleInteractable(int nIndex){
    int nAction = this->vecDecor[nIndex]->interact();
    /*if(nAction == 1){
        //Decor* pDecor = dynamic_cast<Decor*>(&this->vecDecor[nIndex]);
        //pWall->pickDecor(*pDecor);
        this->vecDecor.erase(vecDecor.begin()+nIndex);
    }*/

    return nAction;
}

/*Floor::getInteractableIndex   returns original index of interactable
    returns getIndex()  = actual index according to interactable documentation
*/
int Floor::getInteractableIndex(int nIndex){
    return this->vecDecor[nIndex]->getIndex();
}

int Floor::getInteractableWall(int nIndex){
    return this->vecDecor[nIndex]->getDirection();
}

/*Floor::getInteractIndices   returns vecIndex
    return vecIndex     = vector of interactables on floor
*/
std::vector<bool> Floor::getInteractIndices(){
    int nSize = this->getInteractableSize();
    int i;
    std::vector<bool> vecIndex;
    for(i = 0; i < nSize; i++){
        vecIndex.push_back(true);
    }
    return vecIndex;
}

/*Floor::getInteractableSize   returns gameInteractable::Interactable
    return size         = vecDecor size
*/
int Floor::getInteractableSize(){
    return this->vecDecor.size();
}

/*Floor::getInteractable   returns gameInteractable::Interactable
    return vecDecor     = gameInteractable::Interactable

    @param nIndex       = interactable index
*/
gameInteractable::Interactable* Floor::getInteractable(int nIndex){
    return this->vecDecor[nIndex];
}


/*Floor::getDecor   returns Decor pointer from vecDecor vector for special use case
    return pDecor     = Decor*

    @param nIndex       = interactable index
*/
/*
gameInteractable::Interactable Floor::getDecor(int nIndex){
    return this->vecDecor[nIndex];
}
*/

std::vector<int> Floor::getDecorIndices() {
    int nSize = this->getInteractableSize();
    int i;
    std::vector<int> vecIndex;
    for(i = 0; i < nSize; i++){
        vecIndex.push_back(this->vecDecor[i]->getIndex());
    }
    return vecIndex;
}