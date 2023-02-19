/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "LivingRoomDoor.h"

using namespace rooms;

LivingRoomDoor::LivingRoomDoor(int nX, int nY)
               : Interactable(createImageOn(createOpenBrightPalette(),
                                            createOpenDarkPalette(),
                                            nX, nY),
                              createImageOff(createCloseBrightPalette(),
                                             createCloseDarkPalette(),
                                             nX, nY)) {
    this->EState = States::OFF;
}

Image LivingRoomDoor::createImageOn(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorOpen CDoorOpen = DoorOpen("LIVING ROOM", CBright, CDark, nX, nY);
    return CDoorOpen;
}

Image LivingRoomDoor::createImageOff(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorClose CDoorClose = DoorClose("LIVING ROOM", CBright, CDark, nX, nY);
    return CDoorClose;
}

Palette LivingRoomDoor::createOpenBrightPalette() {
    Palette CPalette = Palette({Colors::LIVING_ROOM_DARK,     // Door border FG.
                                Colors::LIVING_ROOM_LIGHT,
                                Colors::LIVING_ROOM_LIGHT,
                                Colors::LIVING_ROOM_LIGHT,
                                Colors::LIVING_ROOM_DARK,

                                Colors::OPEN_DOOR_LIGHT,
                                Colors::BLACK,
                                Colors::LIVING_ROOM_LIGHT,
                                Colors::OPEN_DOOR_MID,
                                Colors::OPEN_DOOR_DARK,

                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::LIVING_ROOM_DARK,
                                Colors::OPEN_DOOR_LIGHT,
                                Colors::CLEAR,
                                Colors::LIVING_ROOM_MID,

                                Colors::BLACK,
                                Colors::BLACK,
                                Colors::LIVING_ROOM_MID,
                                Colors::BLACK,
                                Colors::BLACK,

                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette LivingRoomDoor::createOpenDarkPalette() {
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

Palette LivingRoomDoor::createCloseBrightPalette() {
    Palette CPalette = Palette({Colors::LIVING_ROOM_DARK,     // Door border FG.
                                Colors::LIVING_ROOM_LIGHT,
                                Colors::LIVING_ROOM_LIGHT,
                                Colors::LIVING_ROOM_LIGHT,
                                Colors::LIVING_ROOM_MID,

                                Colors::LIVING_ROOM_DARK,
                                Colors::LIVING_ROOM_LIGHT,
                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_V_LIGHT,
                                Colors::KNOB_ON_LIGHT,

                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::LIVING_ROOM_DARK,
                                Colors::LIVING_ROOM_MID,
                                Colors::CLEAR,
                                Colors::LIVING_ROOM_MID,

                                Colors::LIVING_ROOM_MID,
                                Colors::LIVING_ROOM_MID,
                                Colors::LIVING_ROOM_MID,
                                Colors::LIVING_ROOM_MID,
                                Colors::CLEAR,

                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette LivingRoomDoor::createCloseDarkPalette() {
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
