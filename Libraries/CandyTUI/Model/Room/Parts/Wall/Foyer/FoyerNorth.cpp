/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "FoyerNorth.h"

using namespace rooms;

FoyerNorth::FoyerNorth()
           : Wall(createItems(),
                  createInteractable(),
                  false) {
}

std::vector<Image> FoyerNorth::createItems() {
    std::vector<Image> vecItems;

    return vecItems;
}

std::vector<Interactable> FoyerNorth::createInteractable() {
    std::vector<Interactable> vecInteractable;

    HallwayDoor CHallwayDoor = HallwayDoor(18, 2);
    vecInteractable.push_back(CHallwayDoor);

    Palette CBright1 = Palette({Colors::FRAME_SILVER_LIGHT,
                                Colors::WHITE,
                                Colors::FRAME_MAGENTA_LIGHT,
                                Colors::FRAME_SILVER_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Palette CBright2 = Palette({Colors::FRAME_GOLD_LIGHT,
                                Colors::FRAME_GREEN_DARK,
                                Colors::FRAME_GREEN_LIGHT,
                                Colors::FRAME_GOLD_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Image CFrame1 = FrameType2(CBright1, Bounds(3, 3, 5, 3));
    Image CFrame2 = FrameType2(CBright1, Bounds(9, 3, 5, 3));
    Image CFrame3 = FrameType2(CBright1, Bounds(3, 6, 5, 3));
    Image CFrame4 = FrameType2(CBright1, Bounds(9, 6, 5, 3));

    Image CFrame5 = FrameType3(CBright2, Bounds(33, 4, 13, 4));
    
    vecInteractable.push_back(Frame(CFrame1, FrameTypeOff(CFrame1)));
    vecInteractable.push_back(Frame(CFrame2, FrameTypeOff(CFrame2)));
    vecInteractable.push_back(Frame(CFrame3, FrameTypeOff(CFrame3)));
    vecInteractable.push_back(Frame(CFrame4, FrameTypeOff(CFrame4)));

    vecInteractable.push_back(Frame(CFrame5, FrameTypeOff(CFrame5)));

    return vecInteractable;
}
