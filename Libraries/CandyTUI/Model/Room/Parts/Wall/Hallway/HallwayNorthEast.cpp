/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "HallwayNorthEast.h"

using namespace rooms;

HallwayNorthEast::HallwayNorthEast()
                 : Wall(createItems(),
                        createInteractable(),
                        false) {
}

std::vector<Image> HallwayNorthEast::createItems() {
    std::vector<Image> vecItems;


    return vecItems;
}

std::vector<Interactable> HallwayNorthEast::createInteractable() {
    std::vector<Interactable> vecInteractable;

    Palette CBright1 = Palette({Colors::FRAME_SILVER_LIGHT,
                                Colors::FRAME_SILVER_DARK},
                                
                               {Colors::CLEAR,
                                Colors::CLEAR});

    Image CFrame1 = FrameType5(CBright1, Bounds(34, 2, 3, 7));
    Image CFrame2 = FrameType5(CBright1, Bounds(38, 2, 3, 7));
    Image CFrame3 = FrameType5(CBright1, Bounds(42, 2, 3, 7));
    
    vecInteractable.push_back(BasementDoor(18, 2));

    vecInteractable.push_back(Frame(CFrame1, FrameTypeOff(CFrame1)));
    vecInteractable.push_back(Frame(CFrame2, FrameTypeOff(CFrame2)));
    vecInteractable.push_back(Frame(CFrame3, FrameTypeOff(CFrame3)));

    return vecInteractable;
}
