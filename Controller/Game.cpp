/****************************************************
Author: 
Date Created: February 18, 2022, 10:41 PM
Description: 
****************************************************/

#include "Game.h"
#include "../Config/Settings.h"

#include "iostream"
#include "vector"

using namespace controllers;

std::vector<Player> Game::createPlayerVector() {
    std::vector<Player> vecPlayer;

    vecPlayer = {Player()};

    return vecPlayer;
}

void Game::addPlayer() {
    if (SYSTEM_TEXT)
        std::cout << "Adding Player." << std::endl;
    Player CPlayer = Player();
    this->vecPlayer.push_back(CPlayer);
    this->nPlayer++;
}

void Game::removePlayer() {
    if (SYSTEM_TEXT)
        std::cout << "Removing Player." << std::endl;
    this->vecPlayer.pop_back();
    this->nPlayer--;
}


Game::Game() {
    if (SYSTEM_TEXT)
        std::cout << "Constructing Game." << std::endl;
    this->vecPlayer = createPlayerVector();
    this->CInterface = Interface();
    this->CArea = Area();
    this->nPlayer = 1;
}


void Game::title() {
    char cInput;
    if (SYSTEM_TEXT)
        std::cout << "Entered Game::title()." << std::endl;
    do {
        if (CLEAR_CONSOLE)
            system("cls");
        this->CInterface.printTitleScreen();
        cInput = this->CInterface.scanChar();
        switch(cInput) {
            case '0':
                std::cout << "Quitting..." << std::endl;
                break;
            case '1':
                this->lobby();
                break;
            
        }
    } while (cInput != '0');
}

void Game::lobby() {
    char cInput;
    if (SYSTEM_TEXT)
        std::cout << "Entered Game::lobby()." << std::endl;
    do {
        if (CLEAR_CONSOLE)
            system("cls");
        this->CInterface.printLobbyScreen(this->vecPlayer, this->nPlayer);
        cInput = this->CInterface.scanChar();
        switch(cInput) {
            case 'a':
            case 'A':
                if (nPlayer > 1)
                    removePlayer();
                break;
            case 'd':
            case 'D':
                if (nPlayer < 4)
                    addPlayer();
                break;
            case '1':
                this->start();
                break;
        }
    } while (cInput != '0');
}

void Game::start() {
    char cInput;
    if (SYSTEM_TEXT)
        std::cout << "Entered Game::start()." << std::endl;
    
    do {
        if (CLEAR_CONSOLE)
            system("cls");
        int nCurrentRoom = vecPlayer[0].getRoom();
        int nRoomSize = CArea.getRoomSize(nCurrentRoom);
        int nDirection = vecPlayer[0].getDirection(nCurrentRoom);

        if (nDirection != -1)
            this->CTUIPrinter.printRoom(static_cast<Rooms>(nCurrentRoom));
        else
            std::cout << "looking at floor" << std::endl;
            //this->CTUIPrinter.printFloor(static_cast<Rooms>(nCurrentRoom), );
        //this->CInterface.printAreaProper(nDirection, nRoomSize, vecPlayer[0]);
        cInput = this->CInterface.scanChar();
        switch(cInput) {
            case 'a':
            case 'A':
                this->vecPlayer[0].pan(1, nRoomSize);
                this->CTUIPrinter.turnLeft(static_cast<Rooms>(nCurrentRoom));
                break;
            case 'd':
            case 'D':
                this->vecPlayer[0].pan(0, nRoomSize);
                this->CTUIPrinter.turnRight(static_cast<Rooms>(nCurrentRoom));
                break;
            case 's':
            case 'S':
                this->vecPlayer[0].pan(2, nRoomSize);
                break;
            case 'w':
            case 'W':
                
        }
    } while (cInput != '0');
}