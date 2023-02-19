/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "FoyerDoor.h"

using namespace rooms;

FoyerDoor::FoyerDoor(int nX, int nY)
          : Interactable(createImageOn(createOpenBrightPalette(),
                                       createOpenDarkPalette(),
                                       nX, nY),
                         createImageOff(createCloseBrightPalette(),
                                        createCloseDarkPalette(),
                                        nX, nY)) {
    this->EState = States::OFF;
}

Image FoyerDoor::createImageOn(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorOpen CDoorOpen = DoorOpen("FOYER      ", CBright, CDark, nX, nY);
    return CDoorOpen;
}

Image FoyerDoor::createImageOff(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorClose CDoorClose = DoorClose("FOYER      ", CBright, CDark, nX, nY);
    return CDoorClose;
}

Palette FoyerDoor::createOpenBrightPalette() {
    Palette CPalette = Palette({Colors::FOYER_DARK,     // Door border FG.
                                Colors::FOYER_LIGHT,
                                Colors::FOYER_LIGHT,
                                Colors::FOYER_LIGHT,
                                Colors::FOYER_DARK,

                                Colors::OPEN_DOOR_LIGHT,
                                Colors::BLACK,
                                Colors::FOYER_LIGHT,
                                Colors::OPEN_DOOR_MID,
                                Colors::OPEN_DOOR_DARK,

                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::FOYER_DARK,
                                Colors::OPEN_DOOR_LIGHT,
                                Colors::CLEAR,
                                Colors::FOYER_MID,

                                Colors::BLACK,
                                Colors::BLACK,
                                Colors::FOYER_MID,
                                Colors::BLACK,
                                Colors::BLACK,

                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette FoyerDoor::createOpenDarkPalette() {
    Palette CPalette = Palette({Colors::OFF_DARK,     // Door border FG.
                                Colors::OFF_LIGHT,
                                Colors::OFF_LIGHT,
                                Colors::OFF_LIGHT,
                                Colors::OFF_DARK,

                                Colors::OPEN_DOOR_LIGHT,
                                Colors::BLACK,
                                Colors::OFF_LIGHT,
                                Colors::OPEN_DOOR_MID,
                                Colors::OPEN_DOOR_DARK,

                                Colors::KNOB_OFF_LIGHT,
                                Colors::KNOB_OFF_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::OFF_DARK,
                                Colors::OPEN_DOOR_LIGHT,
                                Colors::CLEAR,
                                Colors::OFF_MID,

                                Colors::BLACK,
                                Colors::BLACK,
                                Colors::OFF_MID,
                                Colors::BLACK,
                                Colors::BLACK,

                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette FoyerDoor::createCloseBrightPalette() {
    Palette CPalette = Palette({Colors::FOYER_DARK,     // Door border FG.
                                Colors::FOYER_LIGHT,
                                Colors::FOYER_LIGHT,
                                Colors::FOYER_LIGHT,
                                Colors::FOYER_MID,

                                Colors::FOYER_DARK,
                                Colors::FOYER_LIGHT,
                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_V_LIGHT,
                                Colors::KNOB_ON_LIGHT,

                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::FOYER_DARK,
                                Colors::FOYER_MID,
                                Colors::CLEAR,
                                Colors::FOYER_MID,

                                Colors::FOYER_MID,
                                Colors::FOYER_MID,
                                Colors::FOYER_MID,
                                Colors::FOYER_MID,
                                Colors::CLEAR,

                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette FoyerDoor::createCloseDarkPalette() {
    Palette CPalette = Palette({Colors::OFF_DARK,
                                Colors::OFF_LIGHT,
                                Colors::OFF_LIGHT,
                                Colors::OFF_LIGHT,
                                Colors::OFF_MID,

                                Colors::OFF_DARK,
                                Colors::OFF_LIGHT,
                                Colors::KNOB_OFF_LIGHT,
                                Colors::KNOB_OFF_V_LIGHT,
                                Colors::KNOB_OFF_LIGHT,

                                Colors::KNOB_OFF_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,
                                Colors::OFF_DARK,
                                Colors::OFF_MID,
                                Colors::CLEAR,
                                Colors::OFF_MID,

                                Colors::OFF_MID,
                                Colors::OFF_MID,
                                Colors::OFF_MID,
                                Colors::OFF_MID,
                                Colors::CLEAR,

                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}
