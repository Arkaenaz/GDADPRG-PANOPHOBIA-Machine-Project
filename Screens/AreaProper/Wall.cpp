#include "Wall.h"

using namespace gameArea;
using namespace gameInteractable;

WallOBJ::WallOBJ(){

}

/*WallOBJ::pickDecor   toggles CDecor's toggle, essentially placing it back onto the wall by enabling it
    @param CDecor       = Decor to toggle
*/
void WallOBJ::pickDecor(Decor CDecor){
    this->vecDecor[CDecor.getIndex()].setToggled(true);
}

/*WallOBJ::toggleInteractable  handles interact action
    return -1           = invalid/error
            0           = decor drop
            1           = decor pick up
            2           = light off
            3           = light on
            4           = door close
            5           = door open

    @param nIndex       = interactable index
    @param CFloor       = Floor
*/
int WallOBJ::toggleInteractable(int nIndex, Floor CFloor){
    int nAction = this->vecDecor[nIndex].interact();
    //object is dropped
    if(nAction == 0){
        CFloor.dropDecor(this->vecDecor[nIndex]);
        //this->vecDecor[nIndex].setToggled();
    }
}

/*WallOBJ::getDoor   returns InteractOBJ
    return vecDecor     = InteractOBJ

    @param nIndex       = interactable index
*/
InteractOBJ WallOBJ::getInteractable(int nIndex){
    return this->vecDecor[nIndex];
}

/*WallOBJ::getDoor   returns Door*
    return getDoor      = Door* pointer

    @param nIndex       = door index
*/
Door* WallOBJ::getDoor(int nIndex){
    Door* pDoor = dynamic_cast<Door*>(&this->vecDecor[nIndex]);
    return pDoor;
}

/*WallOBJ::createDecor   creates Decor objects until vecDecor size hits nSize
    @param nSize        = target size
*/
void WallOBJ::createDecor(int nSize){
    int i = this->vecDecor.size();
    for(i ; i < nSize ; i++){
        this->vecDecor.push_back(Decor(i));
    }
}

