#include "Interactable.h"

using namespace gameInteractable;

gameInteractable::Interactable::Interactable(){
    this->nToggleType = -1;
    this->bToggled = true;
}

gameInteractable::Interactable::Interactable(int nToggleType){
    this->nToggleType = nToggleType;
    this->bToggled = true;
}

/*gameInteractable::Interactable::interact   returns value from setToggled()
*/
int gameInteractable::Interactable::interact(){
    return this->setToggled();
}

/*gameInteractable::Interactable::getToggled   returns value from setToggled()
    return bToggled     = toggled boolean
*/
bool gameInteractable::Interactable::getToggled(){
    return this->bToggled;
}

/*gameInteractable::Interactable::getIndex   return index on wall, used for index consistency
    return nIndex       = index on the wall according to interactable manual
*/
int gameInteractable::Interactable::getIndex(){
    return this->nIndex;
}

/*gameInteractable::Interactable::getDirection   direction/wall index
    return nDirection   = direction/wall
*/
int gameInteractable::Interactable::getDirection(){
    return this->nDirection;
}

/*gameInteractable::Interactable::setToggled   toggles the interactable according to its toggle type
    return getToggled() = bToggled value
*/
bool gameInteractable::Interactable::setToggled(){
    this->bToggled = !this->bToggled;
    return this->getToggled();
}

bool gameInteractable::Interactable::setToggled(bool bToggled){
    this->bToggled = bToggled;
    return this->getToggled();
}