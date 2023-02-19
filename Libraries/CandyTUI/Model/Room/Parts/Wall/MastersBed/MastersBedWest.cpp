/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "MastersBedWest.h"

using namespace rooms;

MastersBedWest::MastersBedWest()
               : Wall(createItems(),
                      createInteractable(),
                      false) {
}

std::vector<Image> MastersBedWest::createItems() {
    std::vector<Image> vecItems;
                             
    vecItems.push_back(Window(3, 2));
    vecItems.push_back(Bed(Colors::MASTERS_BED_LIGHT,
                             Colors::MASTERS_BED_MID,
                             Colors::MASTERS_BED_DARK,
                             16, 5));
    vecItems.push_back(Window(35, 2));

    return vecItems;
}

std::vector<Interactable> MastersBedWest::createInteractable() {
    std::vector<Interactable> vecInteractable;

    return vecInteractable;
}
