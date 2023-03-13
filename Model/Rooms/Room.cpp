#include "Room.h"

using namespace gameRooms;
using namespace gameInteractable;

gameRooms::Room::Room(){
    this->bLight = true;
}

/*gameArea::Room::toggleInteractable  handles interact action
    return -1           = invalid/error
            0           = decor drop
            1           = decor pick up
            2           = light off
            3           = light on
            4           = door close
            5           = door open

    @param nWall        = wall index
    @param nIndex       = interactable index
*/
int gameRooms::Room::toggleInteractable(int nWall, int nIndex) {
    if (SYSTEM_TEXT)
        std::cout << "Entered Room::toggleInteractable." << std::endl;
    if (nWall == -1) {
        if (this->CFloor.getDecor() > nIndex) {
            this->CFloor.removeDecor(nIndex);
            this->vecWall[this->CFloor.getInteractableWall(nIndex)].toggleInteractable(this->CFloor.getInteractableIndex(nIndex));
            return 1;
        }
    }
    else {
        gameInteractable::Interactable *pInteractable = vecWall[nWall].getInteractable(nIndex);
        if (pInteractable->getInteractablesType() == InteractablesType::DECOR) {
            this->CFloor.placeDecor(vecWall[nWall].getInteractable(nIndex));
            this->vecWall[nWall].toggleInteractable(nIndex);
            return 1;
        }
        else if (pInteractable->getInteractablesType() == InteractablesType::DOOR) {
            this->vecWall[nWall].toggleInteractable(nIndex);
            return 1;
        }
    }
    return -1;
                
    

    /*int nAction;

    // the line of code below, particularly the first and only if statement, 
    // has a 50/50 chance of crashing and i do not understand why
    if(nWall == -1){
        nAction = this->CFloor.toggleInteractable(nIndex);
        //std::cout<<"it returned"<<endl;
        if(nAction == 1){
            //std::cout<<"getting decor"<<endl;
            gameInteractable::Interactable *pInteractable = this->CFloor.getInteractable(nIndex);
            std::cout << pInteractable->getIndex() << std::endl;
            //std::cout<<"picking decor"<<endl;
            this->vecWall[this->CFloor.getInteractableWall(nIndex)].pickDecor(pInteractable);
            //std::cout<<"erasing decor"<<endl;
            this->CFloor.remove(nIndex);
        }
    }
    else{
        nAction = this->vecWall[nWall].toggleInteractable(nIndex);
        if(nAction == 0){
            this->CFloor.placeDecor(this->vecWall[nWall].getInteractable(nIndex));
            //this->CFloor.getInteractable(this->CFloor.getInteractableSize()-1)->setToggled(true);
        }
    }
    std::cout << "returning" << std::endl;
    return nAction;*/
}

/*gameArea::Room::getRoomSize   returns room size (vecWall size)
    return vecWall      = vecWall size
*/
int gameRooms::Room::getRoomSize(){
    return this->vecWall.size();
}

/*gameArea::Room::getLight   returns light state
    return bLight       = light toggled on/off
*/
bool gameRooms::Room::getLight(){
    return this->bLight;
}

/*gameArea::Room::getLight   returns temperature
    return fTemperature = room temperature
*/
float gameRooms::Room::getTemperature(){
    return this->fTemperature;
}

int gameRooms::Room::getFloorInteractableIndex(int nIndex){
    return this->CFloor.getInteractableIndex(nIndex);
}

int gameRooms::Room::getFloorInteractableWall(int nIndex) {
    return this->CFloor.getInteractableWall(nIndex);
}

/*gameArea::Room::getInteractIndices   returns vecIndex
    return vecIndex     = vector of valid interactables, this is everything except disabled decor (dropped decor)
*/
std::vector<bool> gameRooms::Room::getInteractIndices(int nWall){
    if(nWall == -1){
        return this->CFloor.getInteractIndices();
    }
    else{
        return this->vecWall[nWall].getInteractIndices();
    }
}

/*void gameArea::Room::connectDoor(int nWall, Door* pDoor1, Door* pDoor2) {
    this->vecWall[nWall].connectDoor(pDoor1, pDoor2);
}*/

/*void gameArea::Room::updateDoor(int nRoom, int nWall, int nIndex, int nAction) {

}*/

/*gameArea::Room::getDoorIndices   returns vecIndex
    return vecIndex     = vector of door bToggled values
*/
std::vector<bool> gameRooms::Room::getDoorIndices(int nWall){
    return this->vecWall[nWall].getDoorIndices();
}

InteractablesType gameRooms::Room::getInteractablesType(int nWall, int nIndex) {
    gameInteractable::Interactable *pInteractable = this->vecWall[nWall].getInteractable(nIndex);
    return pInteractable->getInteractablesType();
}

/*gameArea::Room::getDoor   returns Door*
    return getDoor      = Door* pointer

    @param nWall        = wall index
    @param nIndex       = door index
*/
Door* gameRooms::Room::getDoor(int nWall, int nIndex){
    return this->vecWall[nWall].getDoor(nIndex);
}

Lightswitch* gameRooms::Room::getLightswitch(int nWall){
    return this->vecWall[nWall].getLightswitch();
}

std::vector<int> gameRooms::Room::getFloorDecorIndices() {
    return this->CFloor.getDecorIndices();
}