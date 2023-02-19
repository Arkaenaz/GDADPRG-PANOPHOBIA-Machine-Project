/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_TUI_PRINTER_H
#define CANDY_TUI_TUI_PRINTER_H

#include "iostream"
#include "vector"
#include "cmath"

#include "Config/Settings.h"

#include "Model/Enum/EnumBorderTypes.h"
#include "Model/Enum/EnumColors.h"
#include "Model/Enum/EnumRooms.h"
#include "Model/Enum/EnumStates.h"

#include "Model/Layout/Bounds.cpp"
#include "Model/Layout/Location.cpp"
#include "Model/Layout/Size.cpp"

#include "Model/Graphics/Interactable.cpp"
#include "Model/Graphics/Image.cpp"
#include "Model/Graphics/ImageAnnotation.cpp"
#include "Model/Graphics/Palette.cpp"

#include "Model/Room/Room.cpp"
#include "Model/Room/Bathroom.cpp"
#include "Model/Room/Foyer.cpp"
#include "Model/Room/Hallway.cpp"
#include "Model/Room/KidsBed.cpp"
#include "Model/Room/MastersBed.cpp"

#include "Model/Room/Parts/Wall.cpp"
#include "Model/Room/Parts/Wall/Foyer/FoyerNorth.cpp"
#include "Model/Room/Parts/Wall/Foyer/FoyerEast.cpp"
#include "Model/Room/Parts/Wall/Foyer/FoyerSouth.cpp"
#include "Model/Room/Parts/Wall/Foyer/FoyerWest.cpp"
#include "Model/Room/Parts/Wall/Bathroom/BathroomNorth.cpp"
#include "Model/Room/Parts/Wall/Bathroom/BathroomEast.cpp"
#include "Model/Room/Parts/Wall/Bathroom/BathroomSouth.cpp"
#include "Model/Room/Parts/Wall/Bathroom/BathroomWest.cpp"
#include "Model/Room/Parts/Wall/Hallway/HallwayNorthWest.cpp"
#include "Model/Room/Parts/Wall/Hallway/HallwayNorth.cpp"
#include "Model/Room/Parts/Wall/Hallway/HallwayNorthEast.cpp"
#include "Model/Room/Parts/Wall/Hallway/HallwayEast.cpp"
#include "Model/Room/Parts/Wall/Hallway/HallwaySouthEast.cpp"
#include "Model/Room/Parts/Wall/Hallway/HallwaySouth.cpp"
#include "Model/Room/Parts/Wall/Hallway/HallwaySouthWest.cpp"
#include "Model/Room/Parts/Wall/Hallway/HallwayWest.cpp"
#include "Model/Room/Parts/Wall/KidsBed/KidsBedNorth.cpp"
#include "Model/Room/Parts/Wall/KidsBed/KidsBedEast.cpp"
#include "Model/Room/Parts/Wall/KidsBed/KidsBedSouth.cpp"
#include "Model/Room/Parts/Wall/KidsBed/KidsBedWest.cpp"
#include "Model/Room/Parts/Wall/MastersBed/MastersBedNorth.cpp"
#include "Model/Room/Parts/Wall/MastersBed/MastersBedEast.cpp"
#include "Model/Room/Parts/Wall/MastersBed/MastersBedSouth.cpp"
#include "Model/Room/Parts/Wall/MastersBed/MastersBedWest.cpp"

#include "Model/Room/Parts/Decor/Frame.cpp"

#include "Model/Room/Parts/Door/BasementDoor.cpp"
#include "Model/Room/Parts/Door/BathroomDoor.cpp"
#include "Model/Room/Parts/Door/DiningDoor.cpp"
#include "Model/Room/Parts/Door/FoyerDoor.cpp"
#include "Model/Room/Parts/Door/HallwayDoor.cpp"
#include "Model/Room/Parts/Door/KidsBedDoor.cpp"
#include "Model/Room/Parts/Door/KitchenDoor.cpp"
#include "Model/Room/Parts/Door/LivingRoomDoor.cpp"
#include "Model/Room/Parts/Door/MastersBedDoor.cpp"
#include "Model/Room/Parts/Door/UtilityDoor.cpp"
#include "Model/Room/Parts/Door/VanDoor.cpp"

#include "View/Helper/FloorPrinter.cpp"
#include "View/Image/Border/Border.cpp"

#include "View/Image/Bathtub.cpp"
#include "View/Image/Bed.cpp"
#include "View/Image/Cabinet.cpp"
#include "View/Image/Chair.cpp"
#include "View/Image/DoorClose.cpp"
#include "View/Image/DoorOpen.cpp"
#include "View/Image/Drawer.cpp"
#include "View/Image/Dresser.cpp"
#include "View/Image/LightBulb.cpp"
#include "View/Image/LightSwitch.cpp"
#include "View/Image/Shelf.cpp"
#include "View/Image/Sink.cpp"
#include "View/Image/Toilet.cpp"
#include "View/Image/ToiletPaper.cpp"
#include "View/Image/Towel.cpp"
#include "View/Image/WallShelf.cpp"
#include "View/Image/Window.cpp"

#include "View/Image/Frame/FrameType1.cpp"
#include "View/Image/Frame/FrameType2.cpp"
#include "View/Image/Frame/FrameType3.cpp"
#include "View/Image/Frame/FrameType4.cpp"
#include "View/Image/Frame/FrameType5.cpp"
#include "View/Image/Frame/FrameType6.cpp"
#include "View/Image/Frame/FrameTypeOff.cpp"

namespace candyTUI {
    using namespace rooms;
    using namespace helpers;

    class TUIPrinter {
        private:
            FloorPrinter CFloorPrinter;
            std::vector<Room> vecRoom;

        public:
            TUIPrinter();

        public:
            void printRoom(Rooms ERoom);
            void printFloor(Rooms ERoom, std::vector<int> vecDecorIndex);
            void toggleLight(Rooms ERoom);
            void turnLeft(Rooms ERoom);
            void turnRight(Rooms ERoom);
            void toggleInteractable(Rooms ERoom, int nWallIndex, int nInteractableIndex);

        private:
            int getRoomIndex(Rooms ERoom);
    };
}

#endif