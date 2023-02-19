/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "KidsBedEast.h"

using namespace rooms;

KidsBedEast::KidsBedEast()
            : Wall(createItems(),
                   createInteractable(),
                   true) {
}

std::vector<Image> KidsBedEast::createItems() {
    std::vector<Image> vecItems;
    
    vecItems.push_back(LightBulb(21, 0));
    vecItems.push_back(LightSwitch(14, 4));

    return vecItems;
}

std::vector<Interactable> KidsBedEast::createInteractable() {
    std::vector<Interactable> vecInteractable;

    vecInteractable.push_back(FoyerDoor(35, 2));
    vecInteractable.push_back(HallwayDoor(1, 2));

    return vecInteractable;
}
