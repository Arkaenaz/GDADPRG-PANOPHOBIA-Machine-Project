/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "MastersBedEast.h"

using namespace rooms;

MastersBedEast::MastersBedEast()
               : Wall(createItems(),
                      createInteractable(),
                      true) {
}

std::vector<Image> MastersBedEast::createItems() {
    std::vector<Image> vecItems;
    
    vecItems.push_back(LightBulb(21, 0));
    vecItems.push_back(LightSwitch(31, 4));

    return vecItems;
}

std::vector<Interactable> MastersBedEast::createInteractable() {
    std::vector<Interactable> vecInteractable;

    Palette CBright1 = Palette({Colors::FRAME_SILVER_LIGHT,
                                Colors::FRAME_YELLOW_DARK,
                                Colors::FRAME_YELLOW_LIGHT,
                                Colors::FRAME_SILVER_DARK},
                                
                               {Colors::CLEAR,
                                Colors::FRAME_YELLOW_DARK,
                                Colors::FRAME_YELLOW_LIGHT,
                                Colors::CLEAR});

    Palette CBright2 = Palette({Colors::FRAME_SILVER_LIGHT,
                                Colors::FRAME_SILVER_DARK},
                                
                               {Colors::CLEAR,
                                Colors::CLEAR});

    Palette CBright3 = Palette({Colors::FRAME_SILVER_LIGHT,
                                Colors::FRAME_PURPLE_DARK,
                                Colors::FRAME_PURPLE_LIGHT,
                                Colors::FRAME_SILVER_DARK},
                                
                               {Colors::CLEAR,
                                Colors::FRAME_PURPLE_DARK,
                                Colors::FRAME_PURPLE_LIGHT,
                                Colors::CLEAR});

    Palette CBright4 = Palette({Colors::FRAME_SILVER_LIGHT,
                                Colors::FRAME_PURPLE_LIGHT,
                                Colors::FRAME_PURPLE_DARK,
                                Colors::FRAME_SILVER_DARK},
                                
                               {Colors::CLEAR,
                                Colors::FRAME_PURPLE_LIGHT,
                                Colors::FRAME_PURPLE_DARK,
                                Colors::CLEAR});

    Image CFrame1 = FrameType4(CBright1, Bounds(3, 4, 11, 4));
    Image CFrame2 = FrameType5(CBright2, Bounds(35, 3, 3, 5));

    Image CFrame3 = FrameType1(CBright4, Bounds(39, 1, 5, 3));
    Image CFrame4 = FrameType1(CBright3, Bounds(39, 4, 5, 3));
    Image CFrame5 = FrameType1(CBright4, Bounds(39, 7, 5, 3));

    Image CFrame6 = FrameType5(CBright2, Bounds(45, 3, 3, 5));

    vecInteractable.push_back(HallwayDoor(18, 2));
    vecInteractable.push_back(Frame(CFrame1, FrameTypeOff(CFrame1)));

    vecInteractable.push_back(Frame(CFrame2, FrameTypeOff(CFrame2)));

    vecInteractable.push_back(Frame(CFrame3, FrameTypeOff(CFrame3)));
    vecInteractable.push_back(Frame(CFrame4, FrameTypeOff(CFrame4)));
    vecInteractable.push_back(Frame(CFrame5, FrameTypeOff(CFrame5)));
    
    vecInteractable.push_back(Frame(CFrame6, FrameTypeOff(CFrame6)));

    return vecInteractable;
}
