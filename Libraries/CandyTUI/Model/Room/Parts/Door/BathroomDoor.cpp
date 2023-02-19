/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "BathroomDoor.h"

using namespace rooms;

BathroomDoor::BathroomDoor(int nX, int nY)
             : Interactable(createImageOn(createOpenBrightPalette(),
                                          createOpenDarkPalette(),
                                          nX, nY),
                            createImageOff(createCloseBrightPalette(),
                                           createCloseDarkPalette(),
                                           nX, nY)) {
    this->EState = States::OFF;
}

Image BathroomDoor::createImageOn(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorOpen CDoorOpen = DoorOpen("BATHROOM   ", CBright, CDark, nX, nY);
    return CDoorOpen;
}

Image BathroomDoor::createImageOff(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorClose CDoorClose = DoorClose("BATHROOM   ", CBright, CDark, nX, nY);
    return CDoorClose;
}

Palette BathroomDoor::createOpenBrightPalette() {
    Palette CPalette = Palette({Colors::BATHROOM_DARK,     // Door border FG.
                                Colors::BATHROOM_LIGHT,
                                Colors::BATHROOM_LIGHT,
                                Colors::BATHROOM_LIGHT,
                                Colors::BATHROOM_DARK,

                                Colors::OPEN_DOOR_LIGHT,
                                Colors::BLACK,
                                Colors::BATHROOM_LIGHT,
                                Colors::OPEN_DOOR_MID,
                                Colors::OPEN_DOOR_DARK,

                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::BATHROOM_DARK,
                                Colors::OPEN_DOOR_LIGHT,
                                Colors::CLEAR,
                                Colors::BATHROOM_MID,

                                Colors::BLACK,
                                Colors::BLACK,
                                Colors::BATHROOM_MID,
                                Colors::BLACK,
                                Colors::BLACK,

                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette BathroomDoor::createOpenDarkPalette() {
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

Palette BathroomDoor::createCloseBrightPalette() {
    Palette CPalette = Palette({Colors::BATHROOM_DARK,     // Door border FG.
                                Colors::BATHROOM_LIGHT,
                                Colors::BATHROOM_LIGHT,
                                Colors::BATHROOM_LIGHT,
                                Colors::BATHROOM_MID,

                                Colors::BATHROOM_DARK,
                                Colors::BATHROOM_LIGHT,
                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_V_LIGHT,
                                Colors::KNOB_ON_LIGHT,

                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::BATHROOM_DARK,
                                Colors::BATHROOM_MID,
                                Colors::CLEAR,
                                Colors::BATHROOM_MID,

                                Colors::BATHROOM_MID,
                                Colors::BATHROOM_MID,
                                Colors::BATHROOM_MID,
                                Colors::BATHROOM_MID,
                                Colors::CLEAR,

                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette BathroomDoor::createCloseDarkPalette() {
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
