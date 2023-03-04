/****************************************************
Group: Group 4
Section: S11
Members: ARGUELLES, Joachim
         CABLAYAN, Shane Laurenze
         URSUA, James
****************************************************/

#include "iostream"

#include "Libraries/CandyTUI/TUIPrinter.cpp"

#include "Controller/Game.cpp"

#include "Model/Player.cpp"

#include "Screens/AreaProper.cpp"
#include "Screens/AreaProper/Floor.cpp"
#include "Screens/AreaProper/Interactable.cpp"
#include "Screens/AreaProper/Room.cpp"
#include "Screens/AreaProper/Wall.cpp"
#include "Screens/AreaProper/Rooms/BathRoom.cpp"
#include "Screens/AreaProper/Rooms/FoyerRoom.cpp"
#include "Screens/AreaProper/Rooms/HallwayRoom.cpp"
#include "Screens/AreaProper/Rooms/KidsRoom.cpp"
#include "Screens/AreaProper/Rooms/MasterRoom.cpp"
#include "Screens/AreaProper/Rooms/Van.cpp"
#include "Screens/AreaProper/Rooms/Interactable/Decor.cpp"
#include "Screens/AreaProper/Rooms/Interactable/Door.cpp"
#include "Screens/AreaProper/Rooms/Interactable/Lightswitch.cpp"
#include "Screens/AreaProper/Rooms/Wall/BathWall.cpp"
#include "Screens/AreaProper/Rooms/Wall/FoyerWalls.cpp"
#include "Screens/AreaProper/Rooms/Wall/HallwayWalls.cpp"
#include "Screens/AreaProper/Rooms/Wall/KidsWall.cpp"
#include "Screens/AreaProper/Rooms/Wall/MasterWall.cpp"

#include "Utility/Interface.cpp"
#include "Utility/Utility.cpp"

int main() {

    Game CGame = Game();
    CGame.title();

    return 0;
}