#include "Lightswitch.h"

using namespace gameInteractable;

Lightswitch::Lightswitch(int nWall) : gameInteractable::Interactable(nWall, InteractablesType::LIGHT_SWITCH){

}

/*int Lightswitch::interact(){
    this->bToggled = !this->bToggled;
    if(this->getToggled()){
        //lightswitch on
        return 3;
    }
    else{  
        //lightswitch off
        return 2;
    }
}*/