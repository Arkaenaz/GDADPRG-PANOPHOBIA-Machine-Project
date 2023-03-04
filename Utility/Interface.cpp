/****************************************************
Author: 
Date Created: February 18, 2022, 11:09 PM
Description: 
****************************************************/

#include "Interface.h"


using namespace utilities;
using namespace candyTUI;

Interface::Interface(){
    this->CTUIPrinter = TUIPrinter();
}

void Interface::printTitleScreen() {
    printCenter("PANOPHOBIA");        // prototype hadwahdgehaha
    std::cout << "\n" << std::endl;
    printCenter("[1] START");         // u are allowed to improve upon this
    std::cout << "\n" << std::endl;
    printCenter("[0]  EXIT");
    std::cout << std::endl;
}

void Interface::printLobbyScreen(std::vector<Player> vecPlayer, int nPlayer) {
    std::cout << "Player Count: " << nPlayer << std::endl;
    for (int i = 1; i <= nPlayer; i++) {
        std::cout << "Player " << i << ": " << /*vecPlayer[i].getName() <<*/ std::endl;
    }
    printCenter("[A] REMOVE PLAYER");
    std::cout << std::endl;
    printCenter("[D] ADD PLAYER");
    std::cout << "\n" << std::endl;
    printCenter("[1] START");
    std::cout << "\n" << std::endl;
    printCenter("[0]  BACK");
    std::cout << std::endl;
}

void Interface::printAreaProper(int nRoom, char cInput) {
    std::cout << "Printing Area." << std::endl;
    switch(cInput) {
        case 'a':
        case 'A':
            CTUIPrinter.turnLeft(static_cast<Rooms>(nRoom));
            break;
        case 'd':
        case 'D':
            CTUIPrinter.turnRight(static_cast<Rooms>(nRoom));
            break;
    }
    CTUIPrinter.printRoom(static_cast<Rooms>(nRoom));
}

void Interface::turnMultiple(int nNewDirection, int nRoomSize, Player CPlayer){

    int nOldDirection = CPlayer.getDirection(CPlayer.getRoom());
    //calculate shortest turning distance
    int nDistanceRight = std::min(std::abs(nNewDirection-nOldDirection), nRoomSize - std::abs(nNewDirection-nOldDirection));
    int nDistanceLeft = std::min(std::abs(nOldDirection-nNewDirection), nRoomSize - std::abs(nOldDirection-nNewDirection));
    bool bRight = (nDistanceRight < nDistanceLeft) ? true : false;

    while(CPlayer.getDirection(CPlayer.getRoom()) != nNewDirection){
        //turning right is shorter
        if(bRight){
            nOldDirection += 1;
            this->CTUIPrinter.turnRight(static_cast<Rooms>(CPlayer.getRoom()));
        }
        //turning left is shorter
        else{
            nOldDirection -= 1;
            this->CTUIPrinter.turnLeft(static_cast<Rooms>(CPlayer.getRoom()));
        }
        errMinMax(&nOldDirection,nRoomSize);
    }
    
}

char Interface::scanChar() {
    char cInput;
    std::cout << "[INPUT]: ";
    std::cin >> cInput;

    return cInput;
}

void Interface::printFor(std::string strText, int nWidth) {
    for (int i = 0; i < nWidth;i++) {
        std::cout << strText;
    }
}

void Interface::printCenter(std::string strText) {
    int nLength = strText.length();
    printFor(" ", SCREEN_WIDTH/2 - nLength/2);
    std::cout << strText;
}