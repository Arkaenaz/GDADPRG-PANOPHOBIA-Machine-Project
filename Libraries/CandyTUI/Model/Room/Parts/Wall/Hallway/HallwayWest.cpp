/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "HallwayWest.h"

using namespace rooms;

HallwayWest::HallwayWest()
            : Wall(createItems(),
                   createInteractable(),
                   false) {
}

std::vector<Image> HallwayWest::createItems() {
    std::vector<Image> vecItems;
                             
    return vecItems;
}

std::vector<Interactable> HallwayWest::createInteractable() {
    std::vector<Interactable> vecInteractable;
    
    vecInteractable.push_back(KidsBedDoor(1, 2));
    vecInteractable.push_back(BathroomDoor(18, 2));
    vecInteractable.push_back(MastersBedDoor(35, 2));

    return vecInteractable;
}
