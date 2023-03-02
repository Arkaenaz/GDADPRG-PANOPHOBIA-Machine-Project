#include "Room.h"

using namespace gameArea;
using namespace gameInteractable;

RoomOBJ::RoomOBJ(){
    this->bLight = true;
}

/*RoomOBJ::toggleInteractable  handles interact action
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
int RoomOBJ::toggleInteractable(int nWall, int nIndex){
    int nAction;
    int nDir;
    if(nWall == -1){
        nDir = this->CFloor.getInteractableIndex(nIndex);
        nAction = this->CFloor.toggleInteractable(nIndex,this->vecWall[nDir]);
    }
    else{
        nAction = this->vecWall[nWall].toggleInteractable(nIndex,CFloor);
    }
    return nAction;
}

/*RoomOBJ::getRoomSize   returns room size (vecWall size)
    return vecWall      = vecWall size
*/
int RoomOBJ::getRoomSize(){
    return this->vecWall.size();
}

/*RoomOBJ::getLight   returns light state
    return bLight       = light toggled on/off
*/
bool RoomOBJ::getLight(){
    return this->bLight;
}

/*RoomOBJ::getLight   returns temperature
    return fTemperature = room temperature
*/
float RoomOBJ::getTemperature(){
    return this->fTemperature;
}

/*RoomOBJ::getDoor   returns Door*
    return getDoor      = Door* pointer

    @param nWall        = wall index
    @param nIndex       = door index
*/
Door* RoomOBJ::getDoor(int nWall, int nIndex){
    return this->vecWall[nWall].getDoor(nIndex);
}