/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "KitchenDoor.h"

using namespace rooms;

KitchenDoor::KitchenDoor(int nX, int nY)
            : Interactable(createImageOn(createOpenBrightPalette(),
                                         createOpenDarkPalette(),
                                         nX, nY),
                           createImageOff(createCloseBrightPalette(),
                                          createCloseDarkPalette(),
                                          nX, nY)) {
    this->EState = States::OFF;
}

Image KitchenDoor::createImageOn(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorOpen CDoorOpen = DoorOpen("KITCHEN    ", CBright, CDark, nX, nY);
    return CDoorOpen;
}

Image KitchenDoor::createImageOff(Palette CBright, Palette CDark, int nX, int nY) {
    // [TODO]: Centralised label padding. But that's not a priority.
    DoorClose CDoorClose = DoorClose("KITCHEN    ", CBright, CDark, nX, nY);
    return CDoorClose;
}

Palette KitchenDoor::createOpenBrightPalette() {
    Palette CPalette = Palette({Colors::KITCHEN_DARK,     // Door border FG.
                                Colors::KITCHEN_LIGHT,
                                Colors::KITCHEN_LIGHT,
                                Colors::KITCHEN_LIGHT,
                                Colors::KITCHEN_DARK,

                                Colors::OPEN_DOOR_LIGHT,
                                Colors::BLACK,
                                Colors::KITCHEN_LIGHT,
                                Colors::OPEN_DOOR_MID,
                                Colors::OPEN_DOOR_DARK,

                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::KITCHEN_DARK,
                                Colors::OPEN_DOOR_LIGHT,
                                Colors::CLEAR,
                                Colors::KITCHEN_MID,

                                Colors::BLACK,
                                Colors::BLACK,
                                Colors::KITCHEN_MID,
                                Colors::BLACK,
                                Colors::BLACK,

                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette KitchenDoor::createOpenDarkPalette() {
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

Palette KitchenDoor::createCloseBrightPalette() {
    Palette CPalette = Palette({Colors::KITCHEN_DARK,     // Door border FG.
                                Colors::KITCHEN_LIGHT,
                                Colors::KITCHEN_LIGHT,
                                Colors::KITCHEN_LIGHT,
                                Colors::KITCHEN_MID,

                                Colors::KITCHEN_DARK,
                                Colors::KITCHEN_LIGHT,
                                Colors::KNOB_ON_LIGHT,
                                Colors::KNOB_ON_V_LIGHT,
                                Colors::KNOB_ON_LIGHT,

                                Colors::KNOB_ON_DARK,
                                Colors::WHITE},
                               
                               {Colors::CLEAR,          // Door border BG.
                                Colors::KITCHEN_DARK,
                                Colors::KITCHEN_MID,
                                Colors::CLEAR,
                                Colors::KITCHEN_MID,

                                Colors::KITCHEN_MID,
                                Colors::KITCHEN_MID,
                                Colors::KITCHEN_MID,
                                Colors::KITCHEN_MID,
                                Colors::CLEAR,

                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette KitchenDoor::createCloseDarkPalette() {
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
