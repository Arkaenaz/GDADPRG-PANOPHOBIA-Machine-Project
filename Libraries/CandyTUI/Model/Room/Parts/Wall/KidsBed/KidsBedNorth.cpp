/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "KidsBedNorth.h"

using namespace rooms;

KidsBedNorth::KidsBedNorth()
             : Wall(createItems(),
                    createInteractable(),
                    false) {
}

std::vector<Image> KidsBedNorth::createItems() {
    std::vector<Image> vecItems;

    vecItems.push_back(Window(3, 2));
    vecItems.push_back(Bed(Colors::KIDS_BED_LIGHT,
                             Colors::KIDS_BED_MID,
                             Colors::KIDS_BED_DARK,
                             16, 5));
    return vecItems;
}

std::vector<Interactable> KidsBedNorth::createInteractable() {
    std::vector<Interactable> vecInteractable;

    Palette CBright1 = Palette({Colors::FRAME_GOLD_LIGHT,
                                Colors::MIRROR_MID,
                                Colors::MIRROR_LIGHT,
                                Colors::MIRROR_DARK,
                                Colors::FRAME_GOLD_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Image CFrame1 = FrameType6(CBright1, Bounds(38, 3, 7, 5));
    vecInteractable.push_back(Frame(CFrame1, FrameTypeOff(CFrame1)));
    
    return vecInteractable;
}
