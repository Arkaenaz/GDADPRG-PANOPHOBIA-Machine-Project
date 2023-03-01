#include "Interactable.h"

using namespace gameInteractable;

Interactable::Interactable(int nToggleable){
    this->nToggleable = nToggleable;
    this->bToggled = true;
}

int Interactable::interact(){
    setToggled();
}

bool Interactable::getToggled(){
    return this->bToggled;
}

int Interactable::getIndex(){
    return this->nIndex;
}

bool Interactable::setToggled(){
    if(this->nToggleable = 1 && !this->getToggled()){
        this->bToggled = true;
    }
    else if(this->nToggleable = 0 && this->getToggled()){
        this->bToggled = false;
    }
    else{
        this->bToggled = !this->bToggled;
    }
}