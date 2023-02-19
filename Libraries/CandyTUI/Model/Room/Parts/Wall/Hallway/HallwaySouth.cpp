/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "HallwaySouth.h"

using namespace rooms;

HallwaySouth::HallwaySouth()
             : Wall(createItems(),
                    createInteractable(),
                    false) {
}

std::vector<Image> HallwaySouth::createItems() {
    std::vector<Image> vecItems;

    vecItems.push_back(Window(19, 2));

    return vecItems;
}

std::vector<Interactable> HallwaySouth::createInteractable() {
    std::vector<Interactable> vecInteractable;
    
    Palette CBright1 = Palette({Colors::FRAME_GOLD_LIGHT,
                                Colors::FRAME_ORANGE_LIGHT,
                                Colors::WHITE,
                                Colors::FRAME_ORANGE_DARK,
                                Colors::FRAME_GOLD_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Palette CBright2 = Palette({Colors::FRAME_GOLD_LIGHT,
                                Colors::FRAME_GOLD_DARK},
                                
                               {Colors::CLEAR,
                                Colors::CLEAR});
                                
    Image CFrame1 = FrameType6(CBright1, Bounds(3, 5, 6, 4));
    Image CFrame2 = FrameType6(CBright1, Bounds(10, 2, 6, 4));

    Image CFrame3 = FrameType5(CBright2, Bounds(34, 3, 3, 5));
    Image CFrame4 = FrameType5(CBright2, Bounds(38, 3, 3, 5));
    Image CFrame5 = FrameType5(CBright2, Bounds(42, 3, 3, 5));

    vecInteractable.push_back(Frame(CFrame1, FrameTypeOff(CFrame1)));
    vecInteractable.push_back(Frame(CFrame2, FrameTypeOff(CFrame2)));

    vecInteractable.push_back(Frame(CFrame3, FrameTypeOff(CFrame3)));
    vecInteractable.push_back(Frame(CFrame4, FrameTypeOff(CFrame4)));
    vecInteractable.push_back(Frame(CFrame5, FrameTypeOff(CFrame5)));
    
    return vecInteractable;
}
