#include "Door.h"

using namespace gameInteractable;

Door::Door():Interactable(){
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