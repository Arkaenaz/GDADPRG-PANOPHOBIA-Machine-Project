/****************************************************
Author: 
Date Created: February 18, 2022, 10:41 PM
Description: 
****************************************************/

#include "Game.h"
#include "../Config/Settings.h"

#include "iostream"

using namespace controllers;

Game::Game() {
    this->CInterface = Interface();
}


void Game::title() {
    char cInput;
    if (SYSTEM_TEXT)
        std::cout << "Entered title()." << std::endl;
    do {
        if (CLEAR_CONSOLE)
            system("cls");
        this->CInterface.printTitleScreen();
        cInput = this->CInterface.scanChar();
        switch(cInput) {
            case '1':
                this->lobby();
                break;
            case '2':
                std::cout << "Quitting..." << std::endl;
                break;
        }
    } while (cInput != '2');
}

void Game::lobby() {
    char cInput;
    if (SYSTEM_TEXT)
        std::cout << "Entered lobby()." << std::endl;
    do {
        if (CLEAR_CONSOLE)
            system("cls");
        std::cout << "[0] Go back" << std::endl;
        cInput = this->CInterface.scanChar();
    } while (cInput != '0');
}