#include "Door.h"

using namespace gameInteractable;

Door::Door():gameInteractable::Interactable(){
    this->bToggled = false;
    this->EType = Interactables::DOOR;
}

Door::Door(int nRoom, int nDirection):gameInteractable::Interactable(){
    this->nToggleType = -1;
    this->bToggled = false;
    this->EType = Interactables::DOOR;
    this->nRoom = nRoom;
    this->nDirection = nDirection;
    this->pDoor = NULL;
}

int Door::interact(){
    this->bToggled = !this->bToggled;
    if(this->getToggled()){
        //door open0
        return 5;
    }
    else{  
        //door closed
        return 4;
    }
}

void Door::connectDoor(Door* pDoor) {
    this->pDoor = pDoor;
}

void Door::update(int nAction) {
    if (nAction == 4)
        this->pDoor->setToggled(true);
    else
        this->pDoor->setToggled(false);
}

int Door::getRoom(){
    return this->nRoom;
}

int Door::getDirection() {
    return this->nDirection;
}

Door* Door::getConnection() {
    return this->pDoor;
}