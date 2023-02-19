/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "FoyerSouth.h"

using namespace rooms;

FoyerSouth::FoyerSouth()
           : Wall(createItems(),
                  createInteractable(),
                  true) {

}

std::vector<Image> FoyerSouth::createItems() {
    std::vector<Image> vecItems;

    vecItems.push_back(Window(3, 2));
    vecItems.push_back(LightBulb(21, 0));
    vecItems.push_back(LightSwitch(31, 4));
    vecItems.push_back(Window(35, 2));

    return vecItems;
}

std::vector<Interactable> FoyerSouth::createInteractable() {
    std::vector<Interactable> vecInteractable;

    vecInteractable.push_back(VanDoor(18, 2));

    return vecInteractable;
}
