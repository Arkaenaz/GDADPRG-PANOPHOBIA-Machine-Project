#include "Interactable.h"

using namespace gameInteractable;

InteractOBJ::InteractOBJ(int nToggleType){
    this->nToggleType = nToggleType;
    this->bToggled = true;
}

int InteractOBJ::interact(){
    return setToggled();
}

bool InteractOBJ::getToggled(){
    return this->bToggled;
}

int InteractOBJ::getIndex(){
    return this->nIndex;
}

bool InteractOBJ::setToggled(){
    if((this->nToggleType = 1) && (!this->getToggled())){
        this->bToggled = true;
    }
    else if((this->nToggleType = 0) && (this->getToggled())){
        this->bToggled = false;
    }
    else{
        this->bToggled = !this->bToggled;
    }
    return this->getToggled();
}