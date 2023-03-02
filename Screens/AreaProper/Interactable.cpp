#include "Interactable.h"

using namespace gameInteractable;

InteractOBJ::InteractOBJ(){
    this->nToggleType = -1;
    this->bToggled = true;
}

InteractOBJ::InteractOBJ(int nToggleType){
    this->nToggleType = nToggleType;
    this->bToggled = true;
}

/*InteractOBJ::interact   returns value from setToggled()
*/
int InteractOBJ::interact(){
    return this->setToggled();
}

/*InteractOBJ::interact   returns value from setToggled()
    return bToggled     = toggled boolean
*/
bool InteractOBJ::getToggled(){
    return this->bToggled;
}

/*InteractOBJ::interact   return index on wall, used for index consistency
    return nIndex       = index on the wall according to interactable manual
*/
int InteractOBJ::getIndex(){
    return this->nIndex;
}

/*InteractOBJ::setToggled   toggles the interactable according to its toggle type
    return getToggled() = bToggled value
*/
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

bool InteractOBJ::setToggled(bool bToggled){
    this->bToggled = bToggled;
    return this->getToggled();
}