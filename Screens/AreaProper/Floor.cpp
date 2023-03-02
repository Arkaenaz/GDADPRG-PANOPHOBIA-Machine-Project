#include "Floor.h"

using namespace gameArea;
using namespace gameInteractable;

Floor::Floor(){
}

/*Floor::dropDecor   pushes CDecor into vecDecor
    @param CDecor       = Decor push
*/
void Floor::dropDecor(InteractOBJ CDecor){
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
    @param CWall        = WallOBJ
*/
int Floor::toggleInteractable(int nIndex, WallOBJ CWall){
    int nAction = this->vecDecor[nIndex].interact();
    if(nAction == 1){
        CWall.pickDecor(this->vecDecor[nIndex]);
        this->vecDecor.erase(vecDecor.begin()+nIndex);
    }
}

/*Floor::getInteractableIndex   returns original index of interactable
    returns getIndex()  = actual index according to interactable documentation
*/
int Floor::getInteractableIndex(int nIndex){
    return this->vecDecor[nIndex].getIndex();
}

