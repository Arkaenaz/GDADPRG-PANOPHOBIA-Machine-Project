/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "HallwaySouthWest.h"

using namespace rooms;

HallwaySouthWest::HallwaySouthWest()
                 : Wall(createItems(),
                        createInteractable(),
                        true) {
}

std::vector<Image> HallwaySouthWest::createItems() {
    std::vector<Image> vecItems;

    vecItems.push_back(Window(3, 2));
    vecItems.push_back(LightBulb(21, 0));
    vecItems.push_back(LightSwitch(31, 4));

    return vecItems;
}

std::vector<Interactable> HallwaySouthWest::createInteractable() {
    std::vector<Interactable> vecInteractable;
    
    Palette CBright1 = Palette({Colors::FRAME_SILVER_LIGHT,
                                Colors::FRAME_YELLOW_LIGHT,
                                Colors::FRAME_YELLOW_DARK,
                                Colors::FRAME_SILVER_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Image CFrame1 = FrameType1(CBright1, Bounds(37, 1, 4, 3));
    Image CFrame2 = FrameType1(CBright1, Bounds(42, 1, 4, 3));

    Image CFrame3 = FrameType1(CBright1, Bounds(37, 4, 4, 3));
    Image CFrame4 = FrameType1(CBright1, Bounds(42, 4, 4, 3));
    
    Image CFrame5 = FrameType1(CBright1, Bounds(37, 7, 4, 3));
    Image CFrame6 = FrameType1(CBright1, Bounds(42, 7, 4, 3));

    vecInteractable.push_back(FoyerDoor(18, 2));

    vecInteractable.push_back(Frame(CFrame1, FrameTypeOff(CFrame1)));
    vecInteractable.push_back(Frame(CFrame2, FrameTypeOff(CFrame2)));

    vecInteractable.push_back(Frame(CFrame3, FrameTypeOff(CFrame3)));
    vecInteractable.push_back(Frame(CFrame4, FrameTypeOff(CFrame4)));
    
    vecInteractable.push_back(Frame(CFrame5, FrameTypeOff(CFrame5)));
    vecInteractable.push_back(Frame(CFrame6, FrameTypeOff(CFrame6)));

    return vecInteractable;
}
