/****************************************************
Author: Shane Laurenze M. Cablayan
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
    if (SYSTEM_TEXT){
        std::cout << "Adding Player." << std::endl;
    }
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
    this->CVPrinter = VanPrinter();
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
    int nTurn = 0;
    vecPlayer[nTurn].setRoom(0);
    if (SYSTEM_TEXT)
        std::cout << "Entered Game::start()." << std::endl;
    
    do {
        if (CLEAR_CONSOLE)
            {system("cls");}
        this->printPerspective(nTurn);
        cInput = this->CInterface.scanChar();
        this->playerInteract(cInput, 0);
    } while (cInput != '0');
}

void Game::printPerspective(int nTurn) {
    int nCurrentRoom, nDirection;
    nCurrentRoom = this->vecPlayer[nTurn].getRoom();
    nDirection = this->vecPlayer[nTurn].getDirection(nCurrentRoom);
    if (nCurrentRoom != 5) {
        if (nDirection != -1)
            this->CTUIPrinter.printRoom(static_cast<Rooms>(nCurrentRoom));
        else
            this->CTUIPrinter.printFloor(static_cast<Rooms>(nCurrentRoom), this->CArea.getFloorDecorIndices(nCurrentRoom));
    }
    else
        this->CVPrinter.printWall(this->vecPlayer[nTurn].getSanity());
}


void Game::playerInteract(char cInput, int nTurn) {
    int nCurrentRoom = vecPlayer[nTurn].getRoom();
    int nRoomSize = this->CArea.getRoomSize(nCurrentRoom);
    int nDirection = this->vecPlayer[nTurn].getDirection(nCurrentRoom);
    if (nCurrentRoom != 5) {
        switch(cInput) {
            case 'a':
            case 'A':
                this->vecPlayer[nTurn].pan(1, nRoomSize);
                this->CTUIPrinter.turnLeft(static_cast<Rooms>(nCurrentRoom));
                break;
            case 'd':
            case 'D':
                this->vecPlayer[nTurn].pan(0, nRoomSize);
                this->CTUIPrinter.turnRight(static_cast<Rooms>(nCurrentRoom));
                break;
            case 'w':
            case 'W':

                this->vecPlayer[nTurn].interact(this->CArea);
                break;
            case 's':
            case 'S':
                this->vecPlayer[nTurn].pan(2, nRoomSize);
                break;
            case 'l':
            case 'L':
                break;
        }
    } 
    else {
        switch(cInput) {
            case 'w':
            case 'W':
                //this->vecPlayer[0].move();
                break;
            case 'a':
            case 'A':
                this->vecPlayer[nTurn].pan(1, nRoomSize);
                this->CVPrinter.turnLeft();
                break;
            case 'd':
            case 'D':
                this->vecPlayer[nTurn].pan(0, nRoomSize);
                this->CVPrinter.turnRight();
                break;
        }
    }
}