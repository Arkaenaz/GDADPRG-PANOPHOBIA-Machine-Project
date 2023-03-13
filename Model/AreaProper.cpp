#include "AreaProper.h"

using namespace gameElements;


Area::Area(){
    this->vecRoom = createRoomVector();
}

std::vector<gameRooms::Room> Area::createRoomVector() {
    std::vector<gameRooms::Room> vecRoom;

    vecRoom = {FoyerRoom(),
               HallwayRoom(),
               KidsRoom(),
               BathRoom(),
               MasterRoom(),
               Van()};

    return vecRoom;
}


void Area::initializeDoors() {
    if (SYSTEM_TEXT)
        std::cout << "Entered Area::initializeDoors." << std::endl;
    // foyer <-> van
    connectDoor(this->getDoor(0,2,0), this->getDoor(5,0,0));
    // foyer <-> hallway
    connectDoor(this->getDoor(0, 0, 0), this->getDoor(1, 6, 0));
    // foyer <-> kid's bed
    connectDoor(this->getDoor(0, 3, 0), this->getDoor(2,1,1));
    // hallway <-> living room
    connectDoor(this->getDoor(1,0,0), nullptr);
    // hallway <-> basement
    connectDoor(this->getDoor(1,2,0), nullptr);
    // hallway <-> dining room
    connectDoor(this->getDoor(1,3,0), nullptr);
    // hallway <-> kitchen
    connectDoor(this->getDoor(1,3,1), nullptr);
    // hallway <-> utility
    connectDoor(this->getDoor(1,4,0), nullptr);
    // hallway <-> kid's bed
    connectDoor(this->getDoor(1,7,0), this->getDoor(2,1,0));
    // hallway <-> bathroom
    connectDoor(this->getDoor(1,7,1), this->getDoor(3,1,0));
    // hallway <-> master's
    connectDoor(this->getDoor(1,7,2), this->getDoor(4,1,0));
}

/*void Area::updateDoor(int nRoom, int nWall, int nIndex, int nAction) {
    Door *pDoor = getDoor(nRoom, nWall, nIndex);
    pDoor->update(nAction);
}*/

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

int Area::getFloorInteractableWall(int nRoom, int nIndex) {
    return this->vecRoom[nRoom].getFloorInteractableWall(nIndex);
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

void Area::connectDoor(Door* pDoor1, Door* pDoor2) {
    if (SYSTEM_TEXT) std::cout << "Entered Area::connectDoor." << std::endl;
    if (pDoor1 != nullptr) {
        if (SYSTEM_TEXT) std::cout << "Connecting First Door..." << std::endl;
        pDoor1->connectDoor(pDoor2);
    }
    if (pDoor2 != nullptr) {
        if (SYSTEM_TEXT) std::cout << "Connecting Second Door..." << std::endl;
        pDoor2->connectDoor(pDoor1);
    }
}

InteractablesType Area::getInteractablesType(int nRoom, int nWall, int nIndex) {
    return this->vecRoom[nRoom].getInteractablesType(nWall, nIndex);
}

/*Area::getDoor   returns Door*
    return getDoor      = Door* pointer

    @param nRoom        = room index
    @param nWall        = wall index
    @param nIndex       = door index
*/
Door* Area::getDoor(int nRoom, int nWall, int nIndex) {
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

