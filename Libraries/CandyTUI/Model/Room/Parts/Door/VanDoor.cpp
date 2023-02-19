/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "VanDoor.h"

using namespace rooms;

VanDoor::VanDoor(int nX, int nY)
       : Interactable(createImageOn(createOpenBrightPalette(), createOpenDarkPalette(), nX, nY),
                      createImageOff(createCloseBrightPalette(), createCloseDarkPalette(), nX, nY)) {
    this->EState = States::OFF;
}

Image VanDoor::createImageOn(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorOpen CDoorOpen = DoorOpen("VAN        ", CBright, CDark, nX, nY);
    return CDoorOpen;
}

Image VanDoor::createImageOff(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorClose CDoorClose = DoorClose("VAN        ", CBright, CDark, nX, nY);
    return CDoorClose;
}

Palette VanDoor::createOpenBrightPalette() {
    Palette CPalette = Palette({Colors::VAN_DARK,     // Door border FG.
                                Colors::VAN_LIGHT,
                                Colors::VAN_LIGHT,
                                Colors::VAN_LIGHT,
                                Colors::VAN_DARK,

                                Colors::OPEN_DOOR_LIGHT,
                                Colors::BLACK,
                                Colors::VAN_LIGHT,
                                Colors::OPEN_DOOR_MID,
                                Colors::OPEN_DOOR_DARK,

                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::VAN_DARK,
                                Colors::OPEN_DOOR_LIGHT,
                                Colors::CLEAR,
                                Colors::VAN_MID,

                                Colors::BLACK,
                                Colors::BLACK,
                                Colors::VAN_MID,
                                Colors::BLACK,
                                Colors::BLACK,

                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette VanDoor::createOpenDarkPalette() {
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

Palette VanDoor::createCloseBrightPalette() {
    Palette CPalette = Palette({Colors::VAN_DARK,     // Door border FG.
                                Colors::VAN_LIGHT,
                                Colors::VAN_LIGHT,
                                Colors::VAN_LIGHT,
                                Colors::VAN_MID,

                                Colors::VAN_DARK,
                                Colors::VAN_LIGHT,
                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_V_LIGHT,
                                Colors::KNOB_ON_LIGHT,

                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::VAN_DARK,
                                Colors::VAN_MID,
                                Colors::CLEAR,
                                Colors::VAN_MID,

                                Colors::VAN_MID,
                                Colors::VAN_MID,
                                Colors::VAN_MID,
                                Colors::VAN_MID,
                                Colors::CLEAR,

                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette VanDoor::createCloseDarkPalette() {
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
