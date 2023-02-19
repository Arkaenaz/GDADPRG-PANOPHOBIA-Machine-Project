/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "MastersBedDoor.h"

using namespace rooms;

MastersBedDoor::MastersBedDoor(int nX, int nY)
               : Interactable(createImageOn(createOpenBrightPalette(),
                                            createOpenDarkPalette(),
                                            nX, nY),
                              createImageOff(createCloseBrightPalette(),
                                             createCloseDarkPalette(),
                                             nX, nY)) {
    this->EState = States::OFF;
}

Image MastersBedDoor::createImageOn(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorOpen CDoorOpen = DoorOpen("MASTER'S   ", CBright, CDark, nX, nY);
    return CDoorOpen;
}

Image MastersBedDoor::createImageOff(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorClose CDoorClose = DoorClose("MASTER'S   ", CBright, CDark, nX, nY);
    return CDoorClose;
}

Palette MastersBedDoor::createOpenBrightPalette() {
    Palette CPalette = Palette({Colors::MASTERS_BED_DARK,     // Door border FG.
                                Colors::MASTERS_BED_LIGHT,
                                Colors::MASTERS_BED_LIGHT,
                                Colors::MASTERS_BED_LIGHT,
                                Colors::MASTERS_BED_DARK,

                                Colors::OPEN_DOOR_LIGHT,
                                Colors::BLACK,
                                Colors::MASTERS_BED_LIGHT,
                                Colors::OPEN_DOOR_MID,
                                Colors::OPEN_DOOR_DARK,

                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::MASTERS_BED_DARK,
                                Colors::OPEN_DOOR_LIGHT,
                                Colors::CLEAR,
                                Colors::MASTERS_BED_MID,

                                Colors::BLACK,
                                Colors::BLACK,
                                Colors::MASTERS_BED_MID,
                                Colors::BLACK,
                                Colors::BLACK,

                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette MastersBedDoor::createOpenDarkPalette() {
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

Palette MastersBedDoor::createCloseBrightPalette() {
    Palette CPalette = Palette({Colors::MASTERS_BED_DARK,     // Door border FG.
                                Colors::MASTERS_BED_LIGHT,
                                Colors::MASTERS_BED_LIGHT,
                                Colors::MASTERS_BED_LIGHT,
                                Colors::MASTERS_BED_MID,

                                Colors::MASTERS_BED_DARK,
                                Colors::MASTERS_BED_LIGHT,
                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_V_LIGHT,
                                Colors::KNOB_ON_LIGHT,

                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::MASTERS_BED_DARK,
                                Colors::MASTERS_BED_MID,
                                Colors::CLEAR,
                                Colors::MASTERS_BED_MID,

                                Colors::MASTERS_BED_MID,
                                Colors::MASTERS_BED_MID,
                                Colors::MASTERS_BED_MID,
                                Colors::MASTERS_BED_MID,
                                Colors::CLEAR,

                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette MastersBedDoor::createCloseDarkPalette() {
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
