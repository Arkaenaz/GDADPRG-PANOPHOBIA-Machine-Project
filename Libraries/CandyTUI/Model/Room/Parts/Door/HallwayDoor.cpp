/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "HallwayDoor.h"

using namespace rooms;

HallwayDoor::HallwayDoor(int nX, int nY)
       : Interactable(createImageOn(createOpenBrightPalette(), createOpenDarkPalette(), nX, nY),
                      createImageOff(createCloseBrightPalette(), createCloseDarkPalette(), nX, nY)) {
    this->EState = States::OFF;
}

Image HallwayDoor::createImageOn(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorOpen CDoorOpen = DoorOpen("HALLWAY    ", CBright, CDark, nX, nY);
    return CDoorOpen;
}

Image HallwayDoor::createImageOff(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorClose CDoorClose = DoorClose("HALLWAY    ", CBright, CDark, nX, nY);
    return CDoorClose;
}

Palette HallwayDoor::createOpenBrightPalette() {
    Palette CPalette = Palette({Colors::HALLWAY_DARK,     // Door border FG.
                                Colors::HALLWAY_LIGHT,
                                Colors::HALLWAY_LIGHT,
                                Colors::HALLWAY_LIGHT,
                                Colors::HALLWAY_DARK,

                                Colors::OPEN_DOOR_LIGHT,
                                Colors::BLACK,
                                Colors::HALLWAY_LIGHT,
                                Colors::OPEN_DOOR_MID,
                                Colors::OPEN_DOOR_DARK,

                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::HALLWAY_DARK,
                                Colors::OPEN_DOOR_LIGHT,
                                Colors::CLEAR,
                                Colors::HALLWAY_MID,

                                Colors::BLACK,
                                Colors::BLACK,
                                Colors::HALLWAY_MID,
                                Colors::BLACK,
                                Colors::BLACK,

                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette HallwayDoor::createOpenDarkPalette() {
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

Palette HallwayDoor::createCloseBrightPalette() {
    Palette CPalette = Palette({Colors::HALLWAY_DARK,     // Door border FG.
                                Colors::HALLWAY_LIGHT,
                                Colors::HALLWAY_LIGHT,
                                Colors::HALLWAY_LIGHT,
                                Colors::HALLWAY_MID,

                                Colors::HALLWAY_DARK,
                                Colors::HALLWAY_LIGHT,
                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_V_LIGHT,
                                Colors::KNOB_ON_LIGHT,

                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::HALLWAY_DARK,
                                Colors::HALLWAY_MID,
                                Colors::CLEAR,
                                Colors::HALLWAY_MID,

                                Colors::HALLWAY_MID,
                                Colors::HALLWAY_MID,
                                Colors::HALLWAY_MID,
                                Colors::HALLWAY_MID,
                                Colors::CLEAR,

                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette HallwayDoor::createCloseDarkPalette() {
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
