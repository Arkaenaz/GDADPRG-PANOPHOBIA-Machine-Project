/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "HallwaySouthEast.h"

using namespace rooms;

HallwaySouthEast::HallwaySouthEast()
                 : Wall(createItems(),
                        createInteractable(),
                        false) {
}

std::vector<Image> HallwaySouthEast::createItems() {
    std::vector<Image> vecItems;

    vecItems.push_back(Window(35, 2));

    return vecItems;
}

std::vector<Interactable> HallwaySouthEast::createInteractable() {
    std::vector<Interactable> vecInteractable;
    
    Palette CBright1 = Palette({Colors::FRAME_GOLD_LIGHT,
                                Colors::FRAME_PURPLE_DARK,
                                Colors::FRAME_PURPLE_LIGHT,
                                Colors::FRAME_GOLD_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Palette CBright2 = Palette({Colors::FRAME_GOLD_LIGHT,
                                Colors::FRAME_PURPLE_LIGHT,
                                Colors::WHITE,
                                Colors::FRAME_PURPLE_DARK,
                                Colors::FRAME_GOLD_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Palette CBright3 = Palette({Colors::FRAME_GOLD_LIGHT,
                                Colors::FRAME_PURPLE_LIGHT,
                                Colors::FRAME_PURPLE_DARK,
                                Colors::FRAME_GOLD_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    vecInteractable.push_back(UtilityDoor(1, 2));
    
    Image CFrame1 = FrameType1(CBright1, Bounds(16, 4, 4, 3));
    Image CFrame2 = FrameType6(CBright2, Bounds(21, 3, 7, 5));
    Image CFrame3 = FrameType1(CBright3, Bounds(29, 4, 4, 3));
    
    vecInteractable.push_back(Frame(CFrame1, FrameTypeOff(CFrame1)));
    vecInteractable.push_back(Frame(CFrame2, FrameTypeOff(CFrame2)));
    vecInteractable.push_back(Frame(CFrame3, FrameTypeOff(CFrame3)));

    return vecInteractable;
}
