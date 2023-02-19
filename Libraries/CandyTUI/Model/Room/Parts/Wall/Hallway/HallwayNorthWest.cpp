/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "HallwayNorthWest.h"

using namespace rooms;

HallwayNorthWest::HallwayNorthWest()
                 : Wall(createItems(),
                        createInteractable(),
                        false) {
}

std::vector<Image> HallwayNorthWest::createItems() {
    std::vector<Image> vecItems;

    return vecItems;
}

std::vector<Interactable> HallwayNorthWest::createInteractable() {
    std::vector<Interactable> vecInteractable;

    Palette CBright1 = Palette({Colors::FRAME_GOLD_LIGHT,
                                Colors::FRAME_MAGENTA_LIGHT,
                                Colors::WHITE,
                                Colors::FRAME_GOLD_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Palette CBright2 = Palette({Colors::FRAME_SILVER_LIGHT,
                                Colors::FRAME_MAGENTA_LIGHT,
                                Colors::FRAME_MAGENTA_DARK,
                                Colors::FRAME_SILVER_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Palette CBright3 = Palette({Colors::FRAME_SILVER_LIGHT,
                                Colors::FRAME_GREEN_DARK,
                                Colors::FRAME_GREEN_LIGHT,
                                Colors::FRAME_SILVER_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
                                
    Image CFrame1 = FrameType2(CBright1, Bounds(3, 2, 5, 4));
    Image CFrame2 = FrameType1(CBright2, Bounds(9, 2, 5, 4));
    Image CFrame3 = FrameType1(CBright2, Bounds(3, 6, 5, 4));
    Image CFrame4 = FrameType2(CBright1, Bounds(9, 6, 5, 4));

    Image CFrame5 = FrameType4(CBright3, Bounds(32, 4, 15, 4));

    vecInteractable.push_back(LivingRoomDoor(18, 2));
    vecInteractable.push_back(Frame(CFrame1, FrameTypeOff(CFrame1)));
    vecInteractable.push_back(Frame(CFrame2, FrameTypeOff(CFrame2)));
    vecInteractable.push_back(Frame(CFrame3, FrameTypeOff(CFrame3)));
    vecInteractable.push_back(Frame(CFrame4, FrameTypeOff(CFrame4)));

    vecInteractable.push_back(Frame(CFrame5, FrameTypeOff(CFrame5)));
    
    return vecInteractable;
}
