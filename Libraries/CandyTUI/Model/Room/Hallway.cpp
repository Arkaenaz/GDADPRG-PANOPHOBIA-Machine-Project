/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Hallway.h"

using namespace rooms;

Hallway::Hallway()
        : Room(createWallVector(),
               createBrightPalette(),
               createDarkPalette()) {
}

std::vector<Wall> Hallway::createWallVector() {
    std::vector<Wall> vecWall;

    Wall CWallNorthWest = HallwayNorthWest();
    Wall CWallNorth = HallwayNorth();
    Wall CWallNorthEast = HallwayNorthEast();

    Wall CWallEast = HallwayEast();

    Wall CWallSouthEast = HallwaySouthEast();
    Wall CWallSouth = HallwaySouth();
    Wall CWallSouthWest = HallwaySouthWest();

    Wall CWallWest = HallwayWest();

    vecWall = {CWallNorthWest,
               CWallNorth,
               CWallNorthEast,

               CWallEast,

               CWallSouthEast,
               CWallSouth,
               CWallSouthWest,

               CWallWest};

    return vecWall;
}

Palette Hallway::createBrightPalette() {
    Palette CBright = Palette({Colors::HALLWAY_LIGHT,
                               Colors::HALLWAY_MID,
                               Colors::HALLWAY_DARK,
                               Colors::CARPET,
                               Colors::HALLWAY_LIGHT},

                              {Colors::CLEAR,
                               Colors::CLEAR,
                               Colors::CLEAR,
                               Colors::HALLWAY_LIGHT,
                               Colors::LIGHT_ON_DARK});
    return CBright;
}

Palette Hallway::createDarkPalette() {
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
