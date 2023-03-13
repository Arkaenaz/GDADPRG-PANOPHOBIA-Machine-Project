#include "Interactable.h"

using namespace gameInteractable;

gameInteractable::Interactable::Interactable(int nWall, InteractablesType EType) {
    this->bToggled = true;
    this->nWall = nWall;
    this->EType = EType;
}

/*gameInteractable::Interactable::Interactable(int nToggleType){
    this->nToggleType = nToggleType;
    this->bToggled = true;
}*/

/*gameInteractable::Interactable::interact   returns value from setToggled()
*/
/*int gameInteractable::Interactable::interact(){
    return this->setToggled();
}*/

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
int gameInteractable::Interactable::getWall(){
    return this->nWall;
}

InteractablesType gameInteractable::Interactable::getInteractablesType() {
    return this->EType;
}

/*gameInteractable::Interactable::setToggled   toggles the interactable according to its toggle type
    return getToggled() = bToggled value
*/
void gameInteractable::Interactable::toggle(){
    if (SYSTEM_TEXT)
        std::cout << "Entered Interactable::toggle." << std::endl;
    this->bToggled = !this->bToggled;
}

void gameInteractable::Interactable::setToggled(bool bToggled){
    if (SYSTEM_TEXT)
        std::cout << "Entered Interactable::setToggled" << std::endl;
    this->bToggled = bToggled;
}