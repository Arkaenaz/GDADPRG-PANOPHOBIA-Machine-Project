/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "BathroomSouth.h"

using namespace rooms;

BathroomSouth::BathroomSouth()
              : Wall(createItems(),
                     createInteractable(),
                     false) {
}

std::vector<Image> BathroomSouth::createItems() {
    std::vector<Image> vecItems;

    vecItems.push_back(Window(3, 1, 3));
    vecItems.push_back(Toilet(21, 5));
    vecItems.push_back(ToiletPaper(30, 6));
    vecItems.push_back(Window(35, 1, 3));

    return vecItems;
}

std::vector<Interactable> BathroomSouth::createInteractable() {
    std::vector<Interactable> vecInteractable;
    
    Palette CBright1 = Palette({Colors::FRAME_GOLD_LIGHT,
                                Colors::FRAME_PURPLE_LIGHT,
                                Colors::FRAME_PURPLE_DARK,
                                Colors::FRAME_GOLD_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    
    Palette CBright2 = Palette({Colors::FRAME_GOLD_LIGHT,
                                Colors::FRAME_PURPLE_DARK,
                                Colors::FRAME_PURPLE_LIGHT,
                                Colors::FRAME_GOLD_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Image CFrame1 = FrameType1(CBright2, Bounds(17, 1, 4, 3));
    Image CFrame2 = FrameType1(CBright1, Bounds(22, 0, 5, 5));
    Image CFrame3 = FrameType1(CBright1, Bounds(28, 1, 4, 3));

    vecInteractable.push_back(Frame(CFrame1, FrameTypeOff(CFrame1)));
    vecInteractable.push_back(Frame(CFrame2, FrameTypeOff(CFrame2)));
    vecInteractable.push_back(Frame(CFrame3, FrameTypeOff(CFrame3)));
    
    return vecInteractable;
}
