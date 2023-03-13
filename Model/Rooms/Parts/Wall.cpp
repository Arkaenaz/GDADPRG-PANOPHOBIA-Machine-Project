#include "Wall.h"

using namespace gameRooms;
using namespace gameInteractable;

gameRooms::Wall::Wall(){

}

/*gameArea::Wall::pickDecor   toggles CInteractable's toggle, essentially placing it back onto the wall by enabling it
    @param CInteractable= Decor to toggle
*/
void gameRooms::Wall::placeDecor(gameInteractable::Interactable *pInteractable, Floor *pFloor) {
    if (SYSTEM_TEXT)
        std::cout << "Entered Wall::placeDecor." << std::endl;
    pFloor->removeDecor(pInteractable->getIndex());
}

/*gameArea::Wall::toggleInteractable  handles interact action
    return -1           = invalid/error
            0           = decor drop
            1           = decor pick up
            2           = light off
            3           = light on
            4           = door close
            5           = door open

    @param nIndex       = interactable index

*/
void gameRooms::Wall::toggleInteractable(int nIndex){
    if (SYSTEM_TEXT)
        std::cout << "Entered Wall::toggleInteractable." << std::endl;
    this->vecDecor[nIndex]->toggle();
    //object is dropped
    /*if(nAction == 0){
        pFloor->dropDecor(this->vecDecor[nIndex]);
        //this->vecDecor[nIndex].setToggled();
    }*/
    
}

/*gameArea::Wall::getInteractIndices   returns vecIndex
    return vecIndex     = vector of valid interactables, only false if decor is dropped/untoggled
*/
std::vector<bool> gameRooms::Wall::getInteractIndices(){
    int nSize = this->getInteractableSize();
    int i;
    std::vector<bool> vecIndex;
    for(i = 0; i < nSize; i++){
        /*Decor* pDecor = dynamic_cast<Decor*>(this->vecDecor[i]);
        if(pDecor){
            //problems might arise if i try to use getToggled() on a null object so i separated the condition from previous
            if(!pDecor->getToggled()){
                vecIndex.push_back(false);
            }
        }
        vecIndex.push_back(true);*/
        vecIndex.push_back(this->vecDecor[i]->getToggled());
    }
    return vecIndex;
}

/*gameArea::Wall::getDoorIndices   returns vecIndex
    return vecIndex     = vector of door bToggled values
*/
std::vector<bool> gameRooms::Wall::getDoorIndices(){
    int nSize = this->getInteractableSize();
    int i;
    std::vector<bool> vecIndex;
    for(i = 0; i < nSize; i++){
        Door* pDoor = this->getDoor(i);
        if(pDoor){
            vecIndex.push_back(pDoor->getToggled());
        }
        else{
            i = nSize; //force loop to stop if no more doors, assuming doors are always the first indices in the vector
        }
    }
    return vecIndex;
}

/*gameArea::Wall::getInteractableSize   returns gameInteractable::Interactable
    return size         = vecDecor size
*/
int gameRooms::Wall::getInteractableSize(){
    return this->vecDecor.size();
}

/*gameArea::Wall::getInteractable   returns gameInteractable::Interactable
    return vecDecor     = gameInteractable::Interactable

    @param nIndex       = interactable index
*/
gameInteractable::Interactable* gameRooms::Wall::getInteractable(int nIndex){
    return this->vecDecor[nIndex];
}

//! deprecated
/*void gameRooms::Wall::connectDoor(Door *pDoor1, Door *pDoor2) {
    pDoor1->connectDoor(pDoor2);
}*/

/*void gameArea::Wall::updateDoor(int nIndex, int nAction) {
    Door *pDoor = this->getDoor(nIndex);
    pDoor->update(nAction);
}*/

/*gameArea::Wall::getDoor   returns Door*
    return getDoor      = Door* pointer

    @param nIndex       = door index
*/
Door* gameRooms::Wall::getDoor(int nIndex){
    Door* pDoor = dynamic_cast<Door*>(this->vecDecor[nIndex]);
    return pDoor;
}

Lightswitch* gameRooms::Wall::getLightswitch(){
    return this->pLightswitch;
}

/*gameArea::Wall::createDecor   creates Decor objects until vecDecor size hits nSize
    @param nSize        = target size
*/
void gameRooms::Wall::createDecor(int nSize, int nWall){
    if (SYSTEM_TEXT)
        std::cout << "Entered Wall::createDecor." << std::endl;
    int i = this->vecDecor.size();
    for(;i < nSize;i++){
        this->vecDecor.push_back(new Decor(i, nWall));
    }
}

