#include "Door.h"

using namespace gameInteractable;

Door::Door():gameInteractable::Interactable(){
    this->bToggled = false;
}

Door::Door(int nRoom, int nDirection):gameInteractable::Interactable(){
    this->nToggleType = -1;
    this->bToggled = false;
    this->nRoom = nRoom;
    this->nDirection = nDirection;
}

int Door::interact(){
    std::cout<<"door interaction"<<endl;
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

int Door::getRoom(){
    return this->nRoom;
}