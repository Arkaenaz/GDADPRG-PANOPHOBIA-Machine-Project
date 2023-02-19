/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "TUIPrinter.h"

using namespace candyTUI;

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                 CONSTRUCTORS                                  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

TUIPrinter::TUIPrinter() {
    this->CFloorPrinter = FloorPrinter();
    
    this->vecRoom = {Foyer(),
                     Hallway(),
                     KidsBed(),
                     Bathroom(),
                     MastersBed()};
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                  BEHAVIOURS                                   *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*
    [DESCRIPTION]:
        This function prints the room given by the value of [ERoom].
        See [Model/Enum/EnumRooms.h] for the list of possible values.

    [NOTE]:
        This function prints the CURRENT perspective / view of the room.
        Upon creation of [TUIPrinter], all rooms are viewing the NORTH
        wall by default (NORTH WEST in the case of Rooms::HALLWAY).

        If you turned a room (i.e. via [TUIPrinter::turLeft()] OR [TUIPrinter::turnRight()]),
        the turned perspective is SAVED for that room. Meaning, if you turned [Rooms::FOYER]
        to the RIGHT, the view you'll see when you call this function (passing [Rooms::FOYER]
        as the parameter), will now be the EAST wall of [Rooms::FOYER].
*/
void TUIPrinter::printRoom(Rooms ERoom) {
    std::cout << std::endl;
    this->vecRoom[this->getRoomIndex(ERoom)].print();
}

/*
    [DESCRIPTION]:
        This function prints a formatted version of [vecDecorIndex].
        When using this function:
            - The first parameter [ERoom] handles the printed header's
              title and colour.
            
            - The CONTENTS of the second parameter [vecDecorIndex] gets
              printed in the resulting boxes.

    [NOTE]:
        This function is meant to print the DECOR INDICES of ALL decor
        currently at a room's floor. Take note that you're in-charge of
        actually keeping track of the actual decor indices per room.
*/
void TUIPrinter::printFloor(Rooms ERoom, std::vector<int> vecDecorIndex) {
    this->CFloorPrinter.print(ERoom, vecDecorIndex, this->vecRoom[this->getRoomIndex(ERoom)].isLight());
}

/*
    [DESCRIPTION]:
        This function TOGGLES the lights of the room given by the value of
        [ERoom]. See [Model/Enum/EnumRooms.h] for the list of possible values.

    [NOTE]:
        ALL rooms start with the lights ON. [TUIPrinter] keeps track of the
        INDIVIDUAL light state of EACH room. Meaning, toggling the lights for
        [Rooms::FOYER] will only turn OFF the lights for the FOYER room. The
        lights for all OTHER rooms are unaffected.
*/
void TUIPrinter::toggleLight(Rooms ERoom) {
    this->vecRoom[this->getRoomIndex(ERoom)].toggleLight();
}

/*
    [DESCRIPTION]:
        This function TURNS the PERSPECTIVE of a room to the LEFT. The room
        getting turned is based on the value given by [ERoom]. See
        [Model/Enum/EnumRooms.h] for the list of possible values.

    [NOTE]:
        ALL rooms start by facing the NORTH wall (NORTH WEST in the case of
        Rooms::HALLWAY). [TUIPrinter] keeps track of the INDIVIDUAL perspective
        state of EACH room. Meaning, turning [Rooms::FOYER] to the LEFT will
        ONLY switch the perspective of [Rooms::FOYER]. All OTHER rooms are
        unaffected.
*/
void TUIPrinter::turnLeft(Rooms ERoom) {
    this->vecRoom[this->getRoomIndex(ERoom)].left();
}

/*
    [DESCRIPTION]:
        This function TURNS the PERSPECTIVE of a room to the RIGHT. The room
        getting turned is based on the value given by [ERoom]. See
        [Model/Enum/EnumRooms.h] for the list of possible values.

    [NOTE]:
        ALL rooms start by facing the NORTH wall (NORTH WEST in the case of
        Rooms::HALLWAY). [TUIPrinter] keeps track of the INDIVIDUAL perspective
        state of EACH room. Meaning, turning [Rooms::FOYER] to the RIGHT will
        ONLY switch the perspective of [Rooms::FOYER]. All OTHER rooms are
        unaffected.
*/
void TUIPrinter::turnRight(Rooms ERoom) {
    this->vecRoom[this->getRoomIndex(ERoom)].right();
}

/*
    [DESCRIPTION]:
        This function TOGGLES the INTERACTABLE of a specific WALL of a room.
        The room is based on the value given by [ERoom]. The wall number is
        based on the value given by [nWallIndex]. The interactable number
        is based on the value given by [nInteractableIndex].
        
        See [Model/Enum/EnumRooms.h] for the list of possible values for [ERoom].
        See the posted [Interactables Manual] for the valid values for each room's
        [nWallIndex], and each wall's [nInteractableIndex].

    [NOTE]:
        ALL rooms start with all DECOR placed on the wall, and all DOORS closed.
        [TUIPrinter] keeps track of the INDIVIDUAL states of EACH interactable
        for EACH room. Meaning, toggling [Rooms::FOYER], [nWallIndex = 0],
        [nInteractableIndex = 0] will ONLY toggle the FOYER's NORTH wall
        interactable (at INDEX 0). All OTHER room's NORTH wall, INDEX 0
        interactable are unaffected.
    
    [IMPORTANT]:
        YOU must ensure that the values of [nWallIndex] and [nInteractableIndex] are
        CORRECT for the passed [ERoom] value.
*/
void TUIPrinter::toggleInteractable(Rooms ERoom, int nWallIndex, int nInteractableIndex) {
    this->vecRoom[this->getRoomIndex(ERoom)].toggleInteractable(nWallIndex, nInteractableIndex);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                               GETTERS / SETTERS                               *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

int TUIPrinter::getRoomIndex(Rooms ERoom) {
    return static_cast<int>(ERoom);
}
