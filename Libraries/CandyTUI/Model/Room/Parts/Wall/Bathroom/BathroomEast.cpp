/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "BathroomEast.h"

using namespace rooms;

BathroomEast::BathroomEast()
             : Wall(createItems(),
                    createInteractable(),
                    true) {
}

std::vector<Image> BathroomEast::createItems() {
    std::vector<Image> vecItems;
    
    vecItems.push_back(LightBulb(21, 0));
    vecItems.push_back(LightSwitch(14, 4));

    vecItems.push_back(Sink(20, 4));

    vecItems.push_back(Dresser(Colors::BATHROOM_MID,
                               Colors::BATHROOM_DARK,
                               Colors::BATHROOM_DARK,
                               34, 6));
                               
    return vecItems;
}

std::vector<Interactable> BathroomEast::createInteractable() {
    std::vector<Interactable> vecInteractable;

    Palette CBright1 = Palette({Colors::FRAME_SILVER_LIGHT,
                                Colors::MIRROR_MID,
                                Colors::MIRROR_LIGHT,
                                Colors::MIRROR_DARK,
                                Colors::FRAME_SILVER_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});


    Image CFrame1 = FrameType6(CBright1, Bounds(37, 2, 7, 4));

    vecInteractable.push_back(HallwayDoor(1, 2));
    vecInteractable.push_back(Frame(CFrame1, FrameTypeOff(CFrame1)));

    return vecInteractable;
}
