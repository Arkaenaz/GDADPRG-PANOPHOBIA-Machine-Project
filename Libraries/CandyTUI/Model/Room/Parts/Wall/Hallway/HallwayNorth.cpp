/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "HallwayNorth.h"

using namespace rooms;

HallwayNorth::HallwayNorth()
             : Wall(createItems(),
                    createInteractable(),
                    false) {
}

std::vector<Image> HallwayNorth::createItems() {
    std::vector<Image> vecItems;

    vecItems.push_back(Window(3, 2));
    vecItems.push_back(Window(19, 2));
    vecItems.push_back(Window(35, 2));

    return vecItems;
}

std::vector<Interactable> HallwayNorth::createInteractable() {
    std::vector<Interactable> vecInteractable;

    return vecInteractable;
}
