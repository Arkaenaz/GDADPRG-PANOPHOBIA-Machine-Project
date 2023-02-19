/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "HallwayEast.h"

using namespace rooms;

HallwayEast::HallwayEast()
            : Wall(createItems(),
                   createInteractable(),
                   false) {
}

std::vector<Image> HallwayEast::createItems() {
    std::vector<Image> vecItems;
    
    return vecItems;
}

std::vector<Interactable> HallwayEast::createInteractable() {
    std::vector<Interactable> vecInteractable;

    Palette CBright1 = Palette({Colors::FRAME_SILVER_LIGHT,
                                Colors::FRAME_SILVER_DARK},
                                
                               {Colors::CLEAR,
                                Colors::CLEAR});

    Palette CBright2 = Palette({Colors::FRAME_SILVER_LIGHT,
                                Colors::FRAME_BLUE_DARK,
                                Colors::FRAME_BLUE_LIGHT,
                                Colors::FRAME_SILVER_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
                                
    Palette CBright3 = Palette({Colors::FRAME_SILVER_LIGHT,
                                Colors::FRAME_BLUE_LIGHT,
                                Colors::FRAME_BLUE_DARK,
                                Colors::FRAME_SILVER_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Image CFrame1 = FrameType5(CBright1, Bounds(18, 3, 3, 4));
    Image CFrame2 = FrameType1(CBright2, Bounds(22, 2, 5, 3));
    Image CFrame3 = FrameType1(CBright3, Bounds(22, 5, 5, 3));
    Image CFrame4 = FrameType5(CBright1, Bounds(28, 3, 3, 4));

    vecInteractable.push_back(DiningDoor(1, 2));
    vecInteractable.push_back(KitchenDoor(35, 2));

    vecInteractable.push_back(Frame(CFrame1, FrameTypeOff(CFrame1)));
    vecInteractable.push_back(Frame(CFrame2, FrameTypeOff(CFrame2)));
    vecInteractable.push_back(Frame(CFrame3, FrameTypeOff(CFrame3)));
    vecInteractable.push_back(Frame(CFrame4, FrameTypeOff(CFrame4)));

    return vecInteractable;
}
