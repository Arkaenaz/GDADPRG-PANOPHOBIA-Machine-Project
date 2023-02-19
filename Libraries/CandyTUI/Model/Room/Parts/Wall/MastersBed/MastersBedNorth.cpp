/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "MastersBedNorth.h"

using namespace rooms;

MastersBedNorth::MastersBedNorth()
                : Wall(createItems(),
                       createInteractable(),
                       false) {
}

std::vector<Image> MastersBedNorth::createItems() {
    std::vector<Image> vecItems;

    vecItems.push_back(Window(3, 2));
    vecItems.push_back(Window(35, 2));
    vecItems.push_back(Dresser(Colors::MASTERS_BED_LIGHT,
                               Colors::MASTERS_BED_MID,
                               Colors::MASTERS_BED_DARK,
                               18, 6));

    return vecItems;
}

std::vector<Interactable> MastersBedNorth::createInteractable() {
    std::vector<Interactable> vecInteractable;

    return vecInteractable;
}
