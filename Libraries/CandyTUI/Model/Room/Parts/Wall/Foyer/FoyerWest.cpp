/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "FoyerWest.h"

using namespace rooms;

FoyerWest::FoyerWest()
          : Wall(createItems(),
                 createInteractable(),
                 false) {
}

std::vector<Image> FoyerWest::createItems() {
    std::vector<Image> vecItems;

    vecItems.push_back(Window(19, 2));

    return vecItems;
}

std::vector<Interactable> FoyerWest::createInteractable() {
    std::vector<Interactable> vecInteractable;

    KidsBedDoor CKidsBedDoor = KidsBedDoor(35, 2);
    vecInteractable.push_back(CKidsBedDoor);

    return vecInteractable;
}
