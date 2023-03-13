#include "Door.h"

using namespace gameInteractable;

/*Door::Door(int nRoom, int nWall) : gameInteractable::Interactable() {
    this->nToggleType = -1;
    this->bToggled = false;
    this->EType = Interactables::DOOR;
    this->nRoom = nRoom;
    this->nWall = nWall;
    this->pDoor = NULL;
}*/

Door::Door(int nRoom, int nWall, int nOppositeWall) : gameInteractable::Interactable(nWall, InteractablesType::DOOR) {
    this->nRoom = nRoom;
    this->nOppositeWall = nOppositeWall;
}

/*int Door::interact(){
    this->bToggled = !this->bToggled;
    if(this->getToggled()){
        //door open0
        return 5;
    }
    else{  
        //door closed
        return 4;
    }
}*/

void Door::connectDoor(Door* pDoor) {
    this->pDoor = pDoor;
    if (SYSTEM_TEXT)
        std::cout << "Door connected." << std::endl;
}

/*void Door::update(int nAction) {
    if (nAction == 4)
        this->pDoor->setToggled(true);
    else
        this->pDoor->setToggled(false);
}*/

void Door::toggle() {
    if (SYSTEM_TEXT)
        std::cout << "Entered Door::toggle." << std::endl;
    this->bToggled = !this->bToggled;
    if (pDoor != nullptr)
        this->pDoor->setToggled(this->bToggled);
}

int Door::getRoom() {
    return this->nRoom;
}

Door* Door::getConnection() {
    return this->pDoor;
}

int Door::getOppositeWall() {
    return this->nOppositeWall;
}