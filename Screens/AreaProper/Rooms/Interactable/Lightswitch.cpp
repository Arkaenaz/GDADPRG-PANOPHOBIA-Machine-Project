#include "Lightswitch.h"

using namespace gameInteractable;

Lightswitch::Lightswitch():gameInteractable::Interactable(){
    this->nToggleType = -1;
    this->bToggled = true;
}

int Lightswitch::interact(){
    this->bToggled = !this->bToggled;
    if(this->getToggled()){
        //lightswitch on
        return 3;
    }
    else{  
        //lightswitch off
        return 2;
    }
}