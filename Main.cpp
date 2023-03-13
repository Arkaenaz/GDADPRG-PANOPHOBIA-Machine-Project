/****************************************************
Group: Group 4
Section: S11
Members: ARGUELLES, Joachim
         CABLAYAN, Shane Laurenze
         URSUA, James
****************************************************/

#include "iostream"

#include "Libraries/CandyTUI/TUIPrinter.cpp"

#include "Config/Settings.h"

#include "Controller/Game.cpp"

#include "Model/Player.cpp"
#include "Model/AreaProper.cpp"

#include "Model/Rooms/Room.cpp"
#include "Model/Rooms/BathRoom.cpp"
#include "Model/Rooms/FoyerRoom.cpp"
#include "Model/Rooms/HallwayRoom.cpp"
#include "Model/Rooms/KidsRoom.cpp"
#include "Model/Rooms/MasterRoom.cpp"
#include "Model/Rooms/Van.cpp"

#include "Model/Rooms/Parts/Floor.cpp"
#include "Model/Rooms/Parts/Interactable.cpp"
#include "Model/Rooms/Parts/Wall.cpp"

#include "Model/Rooms/Parts/Interactables/Decor.cpp"
#include "Model/Rooms/Parts/Interactables/Door.cpp"
#include "Model/Rooms/Parts/Interactables/Lightswitch.cpp"

#include "Model/Rooms/Parts/Walls/BathRoom/BathWalls.cpp"
#include "Model/Rooms/Parts/Walls/FoyerRoom/FoyerWalls.cpp"
#include "Model/Rooms/Parts/Walls/HallwayRoom/HallwayWalls.cpp"
#include "Model/Rooms/Parts/Walls/KidsRoom/KidsWalls.cpp"
#include "Model/Rooms/Parts/Walls/MasterRoom/MasterWalls.cpp"
#include "Model/Rooms/Parts/Walls/Van/VanWalls.cpp"

#include "Utility/Interface.cpp"
#include "Utility/Utility.cpp"
#include "Utility/VanPrinter.cpp"

int main() {

    Game CGame = Game();
    CGame.title();

    return 0;
}