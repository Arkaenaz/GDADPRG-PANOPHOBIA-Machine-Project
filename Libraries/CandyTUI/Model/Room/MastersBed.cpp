/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "MastersBed.h"

using namespace rooms;

MastersBed::MastersBed()
           : Room(createWallVector(),
                  createBrightPalette(),
                  createDarkPalette()) {
}

std::vector<Wall> MastersBed::createWallVector() {
    std::vector<Wall> vecWall;

    Wall CWallNorth = MastersBedNorth();
    Wall CWallEast = MastersBedEast();
    Wall CWallSouth = MastersBedSouth();
    Wall CWallWest = MastersBedWest();

    vecWall = {CWallNorth,
               CWallEast,
               CWallSouth,
               CWallWest};

    return vecWall;
}

Palette MastersBed::createBrightPalette() {
    Palette CBright = Palette({Colors::MASTERS_BED_LIGHT,
                               Colors::MASTERS_BED_MID,
                               Colors::MASTERS_BED_DARK,
                               Colors::CARPET,
                               Colors::MASTERS_BED_LIGHT},

                              {Colors::CLEAR,
                               Colors::CLEAR,
                               Colors::CLEAR,
                               Colors::MASTERS_BED_LIGHT,
                               Colors::LIGHT_ON_DARK});
    return CBright;
}

Palette MastersBed::createDarkPalette() {
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
