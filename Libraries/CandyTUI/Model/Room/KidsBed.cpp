/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "KidsBed.h"

using namespace rooms;

KidsBed::KidsBed()
        : Room(createWallVector(),
               createBrightPalette(),
               createDarkPalette()) {
}

std::vector<Wall> KidsBed::createWallVector() {
    std::vector<Wall> vecWall;

    Wall CWallNorth = KidsBedNorth();
    Wall CWallEast = KidsBedEast();
    Wall CWallSouth = KidsBedSouth();
    Wall CWallWest = KidsBedWest();

    vecWall = {CWallNorth,
               CWallEast,
               CWallSouth,
               CWallWest};

    return vecWall;
}

Palette KidsBed::createBrightPalette() {
    Palette CBright = Palette({Colors::KIDS_BED_LIGHT,
                               Colors::KIDS_BED_MID,
                               Colors::KIDS_BED_DARK,
                               Colors::CARPET,
                               Colors::KIDS_BED_LIGHT},

                              {Colors::CLEAR,
                               Colors::CLEAR,
                               Colors::CLEAR,
                               Colors::KIDS_BED_LIGHT,
                               Colors::LIGHT_ON_DARK});
    return CBright;
}

Palette KidsBed::createDarkPalette() {
    Palette CDark = Palette({Colors::OFF_V_LIGHT,
                             Colors::OFF_MID,
                             Colors::OFF_DARK,
                             Colors::OFF_CARPET,
                             Colors::OFF_V_LIGHT},
                            
                            {Colors::CLEAR,
                             Colors::CLEAR,
                             Colors::CLEAR,
                             Colors::OFF_V_LIGHT,
                             Colors::LIGHT_OFF_DARK});
    return CDark;
}
