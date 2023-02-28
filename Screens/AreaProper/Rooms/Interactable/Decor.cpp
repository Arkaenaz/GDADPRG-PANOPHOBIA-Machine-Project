#include "Decor.h"

using namespace gameInteractable;

Decor::Decor(int nIndex):Interactable(){
    this->nToggleable = 0;
    this->nIndex = nIndex;
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