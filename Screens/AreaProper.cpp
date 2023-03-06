#include "AreaProper.h"

using namespace gameArea;


Area::Area(){
    this->vecRoom = createRoomVector();
}

std::vector<gameArea::Room> Area::createRoomVector() {
    std::vector<gameArea::Room> vecRoom;

    vecRoom = {FoyerRoom(),
               HallwayRoom(),
               KidsRoom(),
               BathRoom(),
               MasterRoom(),
               Van()};

    return vecRoom;
}

void Area::initializeDoors() {
    Door *pDoor1 = getDoor(5, 0, 0);
    Door *pDoor2 = getDoor(0, 2, 0);
    connectDoor(5,0,pDoor1,pDoor2);
    connectDoor(0,2,pDoor1,pDoor2);
    pDoor1 = getDoor(0,0,0);
    pDoor2 = getDoor(1,6,0);
    connectDoor(0,0,pDoor1,pDoor2);
    connectDoor(1,6,pDoor1,pDoor2);
}

void Area::updateDoor(int nRoom, int nWall, int nIndex, int nAction) {
    Door *pDoor = getDoor(nRoom, nWall, nIndex);
    pDoor->update(nAction);
}

/*Area::toggleInteractable  handles interact action
    return -1           = invalid/error
            0           = decor drop
            1           = decor pick up
            2           = light off
            3           = light on
            4           = door close
            5           = door open

    @param nRoom        = room index
    @param nWall        = wall index
    @param nIndex       = interactable index
*/
int Area::toggleInteractable(int nRoom, int nWall, int nIndex){
    return this->vecRoom[nRoom].toggleInteractable(nWall, nIndex);
}

/*Area::getRoomSize   returns room size (number of gameArea::Walls)
    return getRoomSize() = vecWall size

    @param nRoom        = room index
*/
int Area::getRoomSize(int nRoom){
    return this->vecRoom[nRoom].getRoomSize()-1;
}

int Area::getFloorInteractableIndex(int nRoom, int nIndex){
    return this->vecRoom[nRoom].getFloorInteractableIndex(nIndex);
}

/*Area::getInteractIndices   returns vecIndex
    return vecIndex     = vector of valid interactables, this is everything except disabled decor (dropped decor)
*/
std::vector<bool> Area::getInteractIndices(int nRoom, int nWall){
    return this->vecRoom[nRoom].getInteractIndices(nWall);
}

/*Area::getDoorIndices   returns vecIndex
    return vecIndex     = vector of door bToggled values
*/
std::vector<bool> Area::getDoorIndices(int nRoom, int nWall){
    return this->vecRoom[nRoom].getInteractIndices(nWall);
}

void Area::connectDoor(int nRoom, int nWall, Door* pDoor1, Door* pDoor2) {
    this->vecRoom[nRoom].connectDoor(nWall, pDoor1, pDoor2);
}

/*Area::getDoor   returns Door*
    return getDoor      = Door* pointer

    @param nRoom        = room index
    @param nWall        = wall index
    @param nIndex       = door index
*/
Door* Area::getDoor(int nRoom, int nWall, int nIndex){
    return this->vecRoom[nRoom].getDoor(nWall, nIndex);
}

Lightswitch* Area::getLightswitch(int nRoom, int nWall){
    return this->vecRoom[nRoom].getLightswitch(nWall);
}

/*Area::getDoorIndices   returns vecIndex
    return vecIndex     = vector of floor decor int indices
*/
std::vector<int> Area::getFloorDecorIndices(int nRoom) {
    return this->vecRoom[nRoom].getFloorDecorIndices();
}

