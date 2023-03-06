#include "Room.h"

using namespace gameArea;
using namespace gameInteractable;

gameArea::Room::Room(){
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
int gameArea::Room::toggleInteractable(int nWall, int nIndex){
    int nAction;

    // the line of code below, particularly the first and only if statement, 
    // has a 50/50 chance of crashing and i do not understand why
    if(nWall == -1){
        nAction = this->CFloor.toggleInteractable(nIndex);
        //std::cout<<"it returned"<<endl;
        if(nAction == 1){
            //std::cout<<"getting decor"<<endl;
            gameInteractable::Interactable *pInteractable = this->CFloor.getInteractable(nIndex);
            std::cout<<pInteractable->getIndex()<<endl;
            //std::cout<<"picking decor"<<endl;
            this->vecWall[this->CFloor.getInteractableWall(nIndex)].pickDecor(pInteractable);
            //std::cout<<"erasing decor"<<endl;
            this->CFloor.eraseDecor(nIndex);
        }
    }
    else{
        nAction = this->vecWall[nWall].toggleInteractable(nIndex);
        if(nAction == 0){
            this->CFloor.dropDecor(this->vecWall[nWall].getInteractable(nIndex));
            //this->CFloor.getInteractable(this->CFloor.getInteractableSize()-1)->setToggled(true);
        }
    }
    std::cout<<"returning"<<endl;
    return nAction;
}

/*gameArea::Room::getRoomSize   returns room size (vecWall size)
    return vecWall      = vecWall size
*/
int gameArea::Room::getRoomSize(){
    return this->vecWall.size();
}

/*gameArea::Room::getLight   returns light state
    return bLight       = light toggled on/off
*/
bool gameArea::Room::getLight(){
    return this->bLight;
}

/*gameArea::Room::getLight   returns temperature
    return fTemperature = room temperature
*/
float gameArea::Room::getTemperature(){
    return this->fTemperature;
}

int gameArea::Room::getFloorInteractableIndex(int nIndex){
    return this->CFloor.getInteractableIndex(nIndex);
}

/*gameArea::Room::getInteractIndices   returns vecIndex
    return vecIndex     = vector of valid interactables, this is everything except disabled decor (dropped decor)
*/
std::vector<bool> gameArea::Room::getInteractIndices(int nWall){
    if(nWall == -1){
        return this->CFloor.getInteractIndices();
    }
    else{
        return this->vecWall[nWall].getInteractIndices();
    }
}

/*gameArea::Room::getDoorIndices   returns vecIndex
    return vecIndex     = vector of door bToggled values
*/
std::vector<bool> gameArea::Room::getDoorIndices(int nWall){
    return this->vecWall[nWall].getDoorIndices();
}

/*gameArea::Room::getDoor   returns Door*
    return getDoor      = Door* pointer

    @param nWall        = wall index
    @param nIndex       = door index
*/
Door* gameArea::Room::getDoor(int nWall, int nIndex){
    return this->vecWall[nWall].getDoor(nIndex);
}

std::vector<int> gameArea::Room::getFloorDecorIndices() {
    return this->CFloor.getDecorIndices();
}