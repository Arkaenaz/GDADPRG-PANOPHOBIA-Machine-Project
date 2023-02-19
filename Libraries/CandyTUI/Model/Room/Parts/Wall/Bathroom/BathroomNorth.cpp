/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "BathroomNorth.h"

using namespace rooms;

BathroomNorth::BathroomNorth()
              : Wall(createItems(),
                     createInteractable(),
                     false) {
}

std::vector<Image> BathroomNorth::createItems() {
    std::vector<Image> vecItems;

    vecItems.push_back(Cabinet(Colors::BATHROOM_LIGHT,
                               Colors::BATHROOM_MID,
                               Colors::BATHROOM_DARK,
                               18, 2));
                               
    vecItems.push_back(WallShelf(2, 6));

    return vecItems;
}

std::vector<Interactable> BathroomNorth::createInteractable() {
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

    Palette CBright2 = Palette({Colors::FRAME_BLUE_DARK,
                                Colors::FRAME_BLUE_LIGHT,
                                Colors::FRAME_BLUE_DARK,
                                Colors::FRAME_BLUE_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Palette CBright3 = Palette({Colors::FRAME_GOLD_LIGHT,
                                Colors::FRAME_GREEN_DARK,
                                Colors::FRAME_GREEN_LIGHT,
                                Colors::FRAME_GOLD_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
                                
    Image CFrame1 = FrameType6(CBright1, Bounds(37, 2, 7, 9));
    Image CFrame2 = FrameType2(CBright2, Bounds(3, 2, 5, 4));
    Image CFrame3 = FrameType1(CBright3, Bounds(8, 3, 4, 3));

    vecInteractable.push_back(Frame(CFrame2, FrameTypeOff(CFrame2)));
    vecInteractable.push_back(Frame(CFrame3, FrameTypeOff(CFrame3)));
  
    vecInteractable.push_back(Frame(CFrame1, FrameTypeOff(CFrame1)));

    return vecInteractable;
}
