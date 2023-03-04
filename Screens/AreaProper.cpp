#include "AreaProper.h"

using namespace gameArea;


Area::Area(){
    this->vecRoom = createRoomVector();
}

std::vector<gameArea::Room> createRoomVector() {
    std::vector<gameArea::Room> vecRoom;

    vecRoom = {FoyerRoom(),
               HallwayRoom(),
               KidsRoom(),
               BathRoom(),
               MasterRoom()};

    return vecRoom;
}

/*void Area::update(Player CPlayer) {
    Room CRoom = CPlayer.getRoom();

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
    return this->vecRoom[nRoom].getRoomSize();
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

/*Area::getDoor   returns Door*
    return getDoor      = Door* pointer

    @param nRoom        = room index
    @param nWall        = wall index
    @param nIndex       = door index
*/
Door* Area::getDoor(int nRoom, int nWall, int nIndex){
    return this->vecRoom[nRoom].getDoor(nWall, nIndex);
}
