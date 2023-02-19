/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Foyer.h"

using namespace rooms;

Foyer::Foyer()
       : Room(createWallVector(),
              createBrightPalette(),
              createDarkPalette()) {
}

std::vector<Wall> Foyer::createWallVector() {
    std::vector<Wall> vecWall;

    Wall CWallNorth = FoyerNorth();
    Wall CWallEast = FoyerEast();
    Wall CWallSouth = FoyerSouth();
    Wall CWallWest = FoyerWest();

    vecWall = {CWallNorth,
               CWallEast,
               CWallSouth,
               CWallWest};

    return vecWall;
}

Palette Foyer::createBrightPalette() {
    Palette CBright = Palette({Colors::FOYER_LIGHT,
                               Colors::FOYER_MID,
                               Colors::FOYER_DARK,
                               Colors::CARPET,
                               Colors::FOYER_LIGHT},

                              {Colors::CLEAR,
                               Colors::CLEAR,
                               Colors::CLEAR,
                               Colors::FOYER_LIGHT,
                               Colors::LIGHT_ON_DARK});
    return CBright;
}

Palette Foyer::createDarkPalette() {
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
