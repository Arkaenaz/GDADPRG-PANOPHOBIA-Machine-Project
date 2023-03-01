/****************************************************
Author: 
Date Created: February 18, 2022, 11:09 PM
Description: 
****************************************************/

#include "string"

#include "Interface.h"
#include "..\Libraries\CandyTUI\Config\Settings.h"

using namespace utilities;

void Interface::printTitleScreen() {
    printCenter("PANOPHOBIA");        // prototype hadwahdgehaha
    std::cout << "\n" << std::endl;
    printCenter("[1] START");         // u are allowed to improve upon this
    std::cout << "\n" << std::endl;
    printCenter("[0]  EXIT");
    std::cout << std::endl;
}

void Interface::printLobbyScreen(int nPlayer) {
    std::cout << "Player Count: " << nPlayer << std::endl;
    printCenter("[0]  BACK");
    std::cout << std::endl;
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