/****************************************************
Author: Shane Laurenze M. Cablayan
Date Created: February 18, 2022, 11:09 PM
Description: 
****************************************************/

#include "Interface.h"


using namespace utilities;
using namespace candyTUI;

Interface::Interface(){
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

char Interface::scanChar(std::string strMessage) {
    char cInput;
    std::cout << "[" << strMessage << "]: ";
    std::cin >> cInput;

    return cInput;
}

int Interface::scanInt(std::string strMessage) {
    int nInput;
    std::cout << "[" << strMessage << "]: ";
    std::cin >> nInput;

    return nInput;
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