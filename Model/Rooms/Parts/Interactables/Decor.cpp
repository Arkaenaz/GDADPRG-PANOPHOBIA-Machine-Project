#include "Decor.h"

using namespace gameInteractable;

Decor::Decor(int nIndex):gameInteractable::Interactable(0){
    //this->nToggleType = 0;
    this->nIndex = nIndex;
    this->EType = Interactables::DECOR;
}

int Decor::interact(){
    bool bTemp = this->getToggled();
    this->setToggled();

    if(this->getToggled() != bTemp){
        if(this->getToggled()){
            //decor pick-up
            return 1;
        }
        else{
            //decor drop
            return 0;
        }
    }
    return -1;
}

bool Decor::setToggled(){
    this->bToggled = false;
    return this->getToggled();
}