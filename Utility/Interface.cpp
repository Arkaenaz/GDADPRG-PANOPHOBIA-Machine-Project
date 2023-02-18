/****************************************************
Author: 
Date Created: February 18, 2022, 11:09 PM
Description: 
****************************************************/

#include "string"

#include "Interface.h"
#include "../Config/Settings.h"

using namespace utilities;

void Interface::printTitleScreen() {
    printCenter("PANOPHOBIA\n");        // prototype hadwahdgehaha
    printCenter("[1] START\n");         // u are allowed to improve upon this
    printCenter("[2]  EXIT\n");
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