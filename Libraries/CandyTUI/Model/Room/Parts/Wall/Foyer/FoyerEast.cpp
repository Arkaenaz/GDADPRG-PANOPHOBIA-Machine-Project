/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "FoyerEast.h"

using namespace rooms;

FoyerEast::FoyerEast()
          : Wall(createItems(),
                 createInteractable(),
                 false) {
}

std::vector<Image> FoyerEast::createItems() {
    std::vector<Image> vecItems;

    vecItems.push_back(Window(3, 2));
    vecItems.push_back(Window(35, 2));

    return vecItems;
}

std::vector<Interactable> FoyerEast::createInteractable() {
    std::vector<Interactable> vecInteractable;

    Palette CBright1 = Palette({Colors::FRAME_GOLD_LIGHT,
                                Colors::FRAME_RED_DARK,
                                Colors::FRAME_RED_LIGHT,
                                Colors::FRAME_GOLD_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Image CFrame1 = FrameType1(CBright1, Bounds(16, 4, 4, 3));
    Image CFrame2 = FrameType1(CBright1, Bounds(21, 3, 7, 5));
    Image CFrame3 = FrameType1(CBright1, Bounds(29, 4, 4, 3));
    
    vecInteractable.push_back(Frame(CFrame1, FrameTypeOff(CFrame1)));
    vecInteractable.push_back(Frame(CFrame2, FrameTypeOff(CFrame2)));
    vecInteractable.push_back(Frame(CFrame3, FrameTypeOff(CFrame3)));

    return vecInteractable;
}
