/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "BathroomWest.h"

using namespace rooms;

BathroomWest::BathroomWest()
             : Wall(createItems(),
                    createInteractable(),
                    false) {
}

std::vector<Image> BathroomWest::createItems() {
    std::vector<Image> vecItems;
                             
    vecItems.push_back(Towel(Colors::FRAME_MAGENTA_LIGHT, 3, 5));
    vecItems.push_back(Window(35, 1, 3));
    vecItems.push_back(Bathtub(17, 5));

    return vecItems;
}

std::vector<Interactable> BathroomWest::createInteractable() {
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
                                Colors::FRAME_MAGENTA_LIGHT,
                                Colors::WHITE,
                                Colors::FRAME_MAGENTA_DARK,
                                Colors::FRAME_GOLD_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Image CFrame1 = FrameType1(CBright1, Bounds(2, 1, 5, 4));
    Image CFrame2 = FrameType6(CBright2, Bounds(7, 1, 5, 4));

    vecInteractable.push_back(Frame(CFrame1, FrameTypeOff(CFrame1)));
    vecInteractable.push_back(Frame(CFrame2, FrameTypeOff(CFrame2)));

    return vecInteractable;
}
