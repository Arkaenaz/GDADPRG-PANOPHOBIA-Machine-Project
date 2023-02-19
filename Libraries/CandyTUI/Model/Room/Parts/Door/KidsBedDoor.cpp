/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "KidsBedDoor.h"

using namespace rooms;

KidsBedDoor::KidsBedDoor(int nX, int nY)
       : Interactable(createImageOn(createOpenBrightPalette(), createOpenDarkPalette(), nX, nY),
                      createImageOff(createCloseBrightPalette(), createCloseDarkPalette(), nX, nY)) {
    this->EState = States::OFF;
}

Image KidsBedDoor::createImageOn(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorOpen CDoorOpen = DoorOpen("KID'S BED  ", CBright, CDark, nX, nY);
    return CDoorOpen;
}

Image KidsBedDoor::createImageOff(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorClose CDoorClose = DoorClose("KID'S BED  ", CBright, CDark, nX, nY);
    return CDoorClose;
}

Palette KidsBedDoor::createOpenBrightPalette() {
    Palette CPalette = Palette({Colors::KIDS_BED_DARK,     // Door border FG.
                                Colors::KIDS_BED_LIGHT,
                                Colors::KIDS_BED_LIGHT,
                                Colors::KIDS_BED_LIGHT,
                                Colors::KIDS_BED_DARK,

                                Colors::OPEN_DOOR_LIGHT,
                                Colors::BLACK,
                                Colors::KIDS_BED_LIGHT,
                                Colors::OPEN_DOOR_MID,
                                Colors::OPEN_DOOR_DARK,

                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::KIDS_BED_DARK,
                                Colors::OPEN_DOOR_LIGHT,
                                Colors::CLEAR,
                                Colors::KIDS_BED_MID,

                                Colors::BLACK,
                                Colors::BLACK,
                                Colors::KIDS_BED_MID,
                                Colors::BLACK,
                                Colors::BLACK,

                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette KidsBedDoor::createOpenDarkPalette() {
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

Palette KidsBedDoor::createCloseBrightPalette() {
    Palette CPalette = Palette({Colors::KIDS_BED_DARK,     // Door border FG.
                                Colors::KIDS_BED_LIGHT,
                                Colors::KIDS_BED_LIGHT,
                                Colors::KIDS_BED_LIGHT,
                                Colors::KIDS_BED_MID,

                                Colors::KIDS_BED_DARK,
                                Colors::KIDS_BED_LIGHT,
                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_V_LIGHT,
                                Colors::KNOB_ON_LIGHT,

                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::KIDS_BED_DARK,
                                Colors::KIDS_BED_MID,
                                Colors::CLEAR,
                                Colors::KIDS_BED_MID,

                                Colors::KIDS_BED_MID,
                                Colors::KIDS_BED_MID,
                                Colors::KIDS_BED_MID,
                                Colors::KIDS_BED_MID,
                                Colors::CLEAR,

                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette KidsBedDoor::createCloseDarkPalette() {
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
