/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "KidsBedSouth.h"

using namespace rooms;

KidsBedSouth::KidsBedSouth()
             : Wall(createItems(),
                    createInteractable(),
                    false) {
}

std::vector<Image> KidsBedSouth::createItems() {
    std::vector<Image> vecItems;

    vecItems.push_back(Window(3, 2));
    vecItems.push_back(WallShelf(19, 5));
    vecItems.push_back(Drawer(Colors::KIDS_BED_MID,
                              Colors::KIDS_BED_DARK,
                              18, 8));
    vecItems.push_back(Window(35, 2));

    return vecItems;
}

std::vector<Interactable> KidsBedSouth::createInteractable() {
    std::vector<Interactable> vecInteractable;

    Palette CBright1 = Palette({Colors::KIDS_BED_MID,
                                Colors::KIDS_BED_V_LIGHT,
                                Colors::KIDS_BED_LIGHT,
                                Colors::KIDS_BED_MID},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Palette CBright2 = Palette({Colors::FRAME_SILVER_LIGHT,
                                Colors::FRAME_PURPLE_DARK,
                                Colors::FRAME_PURPLE_LIGHT,
                                Colors::FRAME_SILVER_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
                                
    Image CFrame1 = FrameType2(CBright1, Bounds(20, 1, 5, 4));
    Image CFrame2 = FrameType1(CBright2, Bounds(25, 2, 4, 3));

    vecInteractable.push_back(Frame(CFrame1, FrameTypeOff(CFrame1)));
    vecInteractable.push_back(Frame(CFrame2, FrameTypeOff(CFrame2)));
    
    return vecInteractable;
}
