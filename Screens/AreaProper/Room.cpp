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
    int nDir;
    if(nWall == -1){
        nDir = this->CFloor.getInteractableIndex(nIndex);
        nAction = this->CFloor.toggleInteractable(nIndex,this->vecWall[nDir]);
        if(nAction == 0){
            Decor* pDecor = this->CFloor.getDecor(nIndex);
            this->vecWall[this->CFloor.getInteractableWall(nIndex)].pickDecor(*pDecor);
        }
    }
    else{
        nAction = this->vecWall[nWall].toggleInteractable(nIndex,CFloor);
        if(nAction == 1){
            this->CFloor.dropDecor(this->vecWall[nWall].getInteractable(nIndex));
        }
    }
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