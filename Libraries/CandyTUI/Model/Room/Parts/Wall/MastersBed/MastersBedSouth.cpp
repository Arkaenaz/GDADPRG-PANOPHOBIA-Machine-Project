/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "MastersBedSouth.h"

using namespace rooms;

MastersBedSouth::MastersBedSouth()
                : Wall(createItems(),
                       createInteractable(),
                       false) {
}

std::vector<Image> MastersBedSouth::createItems() {
    std::vector<Image> vecItems;

    vecItems.push_back(WallShelf(2, 5));
    vecItems.push_back(Shelf(1, 7));
    vecItems.push_back(Chair(Colors::MASTERS_BED_LIGHT,
                             Colors::MASTERS_BED_MID,
                             Colors::MASTERS_BED_DARK,
                             17, 5));
    vecItems.push_back(Chair(Colors::MASTERS_BED_LIGHT,
                             Colors::MASTERS_BED_MID,
                             Colors::MASTERS_BED_DARK,
                             25, 5));

    return vecItems;
}

std::vector<Interactable> MastersBedSouth::createInteractable() {
    std::vector<Interactable> vecInteractable;

    Palette CBright1 = Palette({Colors::MASTERS_BED_MID,
                                Colors::MASTERS_BED_LIGHT,
                                Colors::FRAME_YELLOW_LIGHT,
                                Colors::MASTERS_BED_MID},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Palette CBright2 = Palette({Colors::FRAME_GOLD_LIGHT,
                                Colors::FRAME_BLUE_DARK,
                                Colors::FRAME_BLUE_LIGHT,
                                Colors::FRAME_GOLD_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});

    Palette CBright3 = Palette({Colors::FRAME_GOLD_LIGHT,
                                Colors::FRAME_MAGENTA_DARK,
                                Colors::FRAME_MAGENTA_LIGHT,
                                Colors::FRAME_GOLD_DARK},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});


    Image CFrame1 = FrameType2(CBright1, Bounds(3, 1, 5, 4));
    Image CFrame2 = FrameType1(CBright2, Bounds(8, 2, 4, 3));

    Image CFrame3 = FrameType1(CBright3, Bounds(36, 3, 4, 3));
    Image CFrame4 = FrameType1(CBright3, Bounds(41, 3, 4, 3));
    Image CFrame5 = FrameType1(CBright3, Bounds(36, 6, 4, 3));
    Image CFrame6 = FrameType1(CBright3, Bounds(41, 6, 4, 3));

    vecInteractable.push_back(Frame(CFrame1, FrameTypeOff(CFrame1)));
    vecInteractable.push_back(Frame(CFrame2, FrameTypeOff(CFrame2)));

    vecInteractable.push_back(Frame(CFrame3, FrameTypeOff(CFrame3)));
    vecInteractable.push_back(Frame(CFrame4, FrameTypeOff(CFrame4)));
    vecInteractable.push_back(Frame(CFrame5, FrameTypeOff(CFrame5)));
    vecInteractable.push_back(Frame(CFrame6, FrameTypeOff(CFrame6)));

    return vecInteractable;
}
