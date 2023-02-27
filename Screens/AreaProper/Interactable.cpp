#include "Interactable.h"

using namespace gameInteractable;

Interactable::Interactable(int nIndex){
    this->nIndex = nIndex;
    this->bToggled = true;
}

int Interactable::interact(){
    this->bToggled = !this->bToggled;
    if(this->getToggled()){
        //decor pick-up
        return 1;
    }
    else{
        //decor drop
        return 0;
    }
}

bool Interactable::getToggled(){
    return this->bToggled;
}