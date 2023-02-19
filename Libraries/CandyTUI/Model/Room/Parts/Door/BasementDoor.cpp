/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "BasementDoor.h"

using namespace rooms;

BasementDoor::BasementDoor(int nX, int nY)
             : Interactable(createImageOn(createOpenBrightPalette(),
                                          createOpenDarkPalette(),
                                          nX, nY),
                            createImageOff(createCloseBrightPalette(),
                                           createCloseDarkPalette(),
                                           nX, nY)) {
    this->EState = States::OFF;
}

Image BasementDoor::createImageOn(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorOpen CDoorOpen = DoorOpen("BASEMENT   ", CBright, CDark, nX, nY);
    return CDoorOpen;
}

Image BasementDoor::createImageOff(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorClose CDoorClose = DoorClose("BASEMENT   ", CBright, CDark, nX, nY);
    return CDoorClose;
}

Palette BasementDoor::createOpenBrightPalette() {
    Palette CPalette = Palette({Colors::BASEMENT_DARK,     // Door border FG.
                                Colors::BASEMENT_LIGHT,
                                Colors::BASEMENT_LIGHT,
                                Colors::BASEMENT_LIGHT,
                                Colors::BASEMENT_DARK,

                                Colors::OPEN_DOOR_LIGHT,
                                Colors::BLACK,
                                Colors::BASEMENT_LIGHT,
                                Colors::OPEN_DOOR_MID,
                                Colors::OPEN_DOOR_DARK,

                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::BASEMENT_DARK,
                                Colors::OPEN_DOOR_LIGHT,
                                Colors::CLEAR,
                                Colors::BASEMENT_MID,

                                Colors::BLACK,
                                Colors::BLACK,
                                Colors::BASEMENT_MID,
                                Colors::BLACK,
                                Colors::BLACK,

                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette BasementDoor::createOpenDarkPalette() {
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

Palette BasementDoor::createCloseBrightPalette() {
    Palette CPalette = Palette({Colors::BASEMENT_DARK,     // Door border FG.
                                Colors::BASEMENT_LIGHT,
                                Colors::BASEMENT_LIGHT,
                                Colors::BASEMENT_LIGHT,
                                Colors::BASEMENT_MID,

                                Colors::BASEMENT_DARK,
                                Colors::BASEMENT_LIGHT,
                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_V_LIGHT,
                                Colors::KNOB_ON_LIGHT,

                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::BASEMENT_DARK,
                                Colors::BASEMENT_MID,
                                Colors::CLEAR,
                                Colors::BASEMENT_MID,

                                Colors::BASEMENT_MID,
                                Colors::BASEMENT_MID,
                                Colors::BASEMENT_MID,
                                Colors::BASEMENT_MID,
                                Colors::CLEAR,

                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette BasementDoor::createCloseDarkPalette() {
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
