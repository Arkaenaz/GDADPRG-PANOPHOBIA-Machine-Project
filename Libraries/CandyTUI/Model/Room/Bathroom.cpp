/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Bathroom.h"

using namespace rooms;

Bathroom::Bathroom()
         : Room(createWallVector(),
                createBrightPalette(),
                createDarkPalette()) {
}

std::vector<Wall> Bathroom::createWallVector() {
    std::vector<Wall> vecWall;

    Wall CWallNorth = BathroomNorth();
    Wall CWallEast = BathroomEast();
    Wall CWallSouth = BathroomSouth();
    Wall CWallWest = BathroomWest();

    vecWall = {CWallNorth,
               CWallEast,
               CWallSouth,
               CWallWest};

    return vecWall;
}

Palette Bathroom::createBrightPalette() {
    Palette CBright = Palette({Colors::BATHROOM_LIGHT,
                               Colors::BATHROOM_MID,
                               Colors::BATHROOM_DARK,
                               Colors::CARPET,
                               Colors::BATHROOM_LIGHT},

                              {Colors::CLEAR,
                               Colors::CLEAR,
                               Colors::CLEAR,
                               Colors::BATHROOM_LIGHT,
                               Colors::LIGHT_ON_DARK});
    return CBright;
}

Palette Bathroom::createDarkPalette() {
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
