/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "KidsBedWest.h"

using namespace rooms;

KidsBedWest::KidsBedWest()
            : Wall(createItems(),
                   createInteractable(),
                   false) {
}

std::vector<Image> KidsBedWest::createItems() {
    std::vector<Image> vecItems;
    
    vecItems.push_back(Window(3, 2));
    vecItems.push_back(Chair(Colors::KIDS_BED_LIGHT,
                             Colors::KIDS_BED_MID,
                             Colors::KIDS_BED_DARK,
                             17, 5));
    vecItems.push_back(Chair(Colors::KIDS_BED_LIGHT,
                             Colors::KIDS_BED_MID,
                             Colors::KIDS_BED_DARK,
                             25, 5));

    return vecItems;
}

std::vector<Interactable> KidsBedWest::createInteractable() {
    std::vector<Interactable> vecInteractable;

    Palette CBright1 = Palette({Colors::FRAME_SILVER_LIGHT,
                                Colors::FRAME_ORANGE_DARK,
                                Colors::FRAME_ORANGE_LIGHT,
                                Colors::FRAME_SILVER_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Image CFrame1 = FrameType1(CBright1, Bounds(36, 3, 4, 3));
    Image CFrame2 = FrameType1(CBright1, Bounds(41, 3, 4, 3));
    Image CFrame3 = FrameType1(CBright1, Bounds(36, 6, 4, 3));
    Image CFrame4 = FrameType1(CBright1, Bounds(41, 6, 4, 3));

    vecInteractable.push_back(Frame(CFrame1, FrameTypeOff(CFrame1)));
    vecInteractable.push_back(Frame(CFrame2, FrameTypeOff(CFrame2)));
    vecInteractable.push_back(Frame(CFrame3, FrameTypeOff(CFrame3)));
    vecInteractable.push_back(Frame(CFrame4, FrameTypeOff(CFrame4)));
    
    return vecInteractable;
}
