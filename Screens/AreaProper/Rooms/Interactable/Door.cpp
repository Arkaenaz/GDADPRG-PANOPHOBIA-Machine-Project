#include "Door.h"

using namespace gameInteractable;

Door::Door():Interactable(){
    this->bToggled = false;
}

Door::Door(int nRoom, int nDirection):Interactable(){
    this->nToggleType = -1;
    this->bToggled = false;
    this->nRoom = nRoom;
    this->nDirection = nDirection;
}

int Door::interact(){
    this->bToggled = !this->bToggled;
    if(this->getToggled()){
        //door open
        return 5;
    }
    else{  
        //door closed
        return 4;
    }
}

int Door::getRoom(){
    return this->nRoom;
}

int Door::getDirection(){
    return this->nDirection;
}