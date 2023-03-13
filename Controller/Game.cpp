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
        cInput = this->CInterface.scanChar("INPUT");
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
        cInput = this->CInterface.scanChar("INPUT");
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
    vecPlayer[nTurn].setRoom(5);
    if (SYSTEM_TEXT)
        std::cout << "Entered Game::start()." << std::endl;
    this->CArea.initializeDoors();
    do {
        if (CLEAR_CONSOLE)
            {system("cls");}
        //int nCurrentRoom = this->vecPlayer[nTurn].getRoom();
        //std::cout << "Wall Index: " << this->vecPlayer[nTurn].getDirection(nCurrentRoom) << std::endl;
        this->printPerspective(nTurn);
        cInput = this->CInterface.scanChar("INPUT");
        this->playerInput(cInput, 0);
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


void Game::playerInput(char cInput, int nTurn) {
    int nCurrentRoom = this->vecPlayer[nTurn].getRoom();
    int nDirection = this->vecPlayer[nTurn].getDirection(nCurrentRoom);
    
    int nIndex;

    switch(cInput) {
        case 'w':
        case 'W':
            if (nDirection == -1)
                this->panUpDown(nTurn);
            else {
                nIndex = this->CInterface.scanInt("INPUT DOOR INDEX");
                enterDoor(nTurn, nIndex);
            }
            break;
        case 'a':
        case 'A':
            if (nDirection != -1)
                this->panLeft(nTurn);
            if (SYSTEM_TEXT)
                std::cout << "Player Wall: " << this->vecPlayer[nTurn].getDirection(nCurrentRoom) << std::endl;
            break;
        case 'd':
        case 'D':
            if (nDirection != -1)
                this->panRight(nTurn);
            if (SYSTEM_TEXT)
                std::cout << "Player Wall: " << this->vecPlayer[nTurn].getDirection(nCurrentRoom) << std::endl;
            break;
        case 'e':
        case 'E':
            nIndex = this->CInterface.scanInt("INTERACT WITH INDEX");
            this->playerInteract(nTurn, nIndex);
            break;
        case 's':
        case 'S':
            if (nDirection != -1)
                this->panUpDown(nTurn);
            if (SYSTEM_TEXT)
                std::cout << "Player Wall: " << this->vecPlayer[nTurn].getDirection(nCurrentRoom) << std::endl;
            break;
        case 'l':
        case 'L':
            this->toggleLight(nTurn);
            break;
    }
}

void Game::turnMultiple(int nNewDirection, int nRoomSize, int nTurn){
    int nOldDirection = this->vecPlayer[nTurn].getDirection(this->vecPlayer[nTurn].getRoom());
    //calculate shortest turning distance
    int nDistanceRight = std::min(std::abs(nNewDirection-nOldDirection), nRoomSize - std::abs(nNewDirection-nOldDirection));
    int nDistanceLeft = std::min(std::abs(nOldDirection-nNewDirection), nRoomSize - std::abs(nOldDirection-nNewDirection));
    bool bRight = (nDistanceRight < nDistanceLeft) ? true : false;

    //std::cout<<"new direction goal: "<<nNewDirection<<endl;

    while(this->vecPlayer[nTurn].getDirection(this->vecPlayer[nTurn].getRoom()) != nNewDirection){
        std::cout << nOldDirection << std::endl;
        //turning right is shorter
        if(bRight){
            //std::cout<<"turn right"<<endl;
            nOldDirection += 1;
            if (this->vecPlayer[nTurn].getRoom() != 5)
                this->CTUIPrinter.turnRight(static_cast<Rooms>(this->vecPlayer[nTurn].getRoom()));
            else
                this->CVPrinter.turnRight();
        }
        //turning left is shorter
        else{
            //std::cout<<"turn left"<<endl;
            nOldDirection -= 1;
            if (this->vecPlayer[nTurn].getRoom() != 5)
                this->CTUIPrinter.turnLeft(static_cast<Rooms>(this->vecPlayer[nTurn].getRoom()));
            else
                this->CVPrinter.turnLeft();
        }
        errMinMax(&nOldDirection,nRoomSize);
        //std::cout<<"now "<<nOldDirection<<endl<<endl;
        this->vecPlayer[nTurn].setDirection(nOldDirection,this->vecPlayer[nTurn].getRoom());
    }
}


void Game::panLeft(int nTurn) {
    int nCurrentRoom = this->vecPlayer[nTurn].getRoom();
    int nRoomSize = this->CArea.getRoomSize(nCurrentRoom);

    this->vecPlayer[nTurn].pan(LEFT, nRoomSize);
    if (nCurrentRoom != 5)
        this->CTUIPrinter.turnLeft(static_cast<Rooms>(nCurrentRoom));
    else
        this->CVPrinter.turnLeft();
}

void Game::panRight(int nTurn) {
    int nCurrentRoom = this->vecPlayer[nTurn].getRoom();
    int nRoomSize = this->CArea.getRoomSize(nCurrentRoom);

    this->vecPlayer[nTurn].pan(RIGHT, nRoomSize);
    if (nCurrentRoom != 5)
        this->CTUIPrinter.turnRight(static_cast<Rooms>(nCurrentRoom));
    else
        this->CVPrinter.turnRight();
}

void Game::panUpDown(int nTurn) {
    int nCurrentRoom = this->vecPlayer[nTurn].getRoom();
    int nRoomSize = this->CArea.getRoomSize(nCurrentRoom);

    if (nCurrentRoom != 5)
        this->vecPlayer[nTurn].pan(UP, nRoomSize);
}

void Game::playerInteract(int nTurn, int nIndex) {
    int nCurrentRoom = this->vecPlayer[nTurn].getRoom();
    int nDirection = this->vecPlayer[nTurn].getDirection(nCurrentRoom);
    std::vector<bool> vecBoolIndex = this->CArea.getInteractIndices(nCurrentRoom, nDirection);
    //Door *pDoor;
    //int nAction = 
    //this->CArea.toggleInteractable(nCurrentRoom, nDirection, nIndex);

    //std::cout << "nAction is " << nAction << std::endl;
    if (nDirection != -1) {
        //if(nAction == 0 || nAction == 4 || nAction == 5) {
        switch (this->CArea.getInteractablesType(nCurrentRoom, nDirection, nIndex)) {
            case InteractablesType::DECOR:
                {
                if (vecBoolIndex[nIndex] == true) {
                    this->CArea.toggleInteractable(nCurrentRoom, nDirection, nIndex);
                    this->CTUIPrinter.toggleInteractable(static_cast<Rooms>(nCurrentRoom), nDirection, nIndex);
                }
                break;
                }
            case InteractablesType::DOOR:
                {
                Door* pDoor1 = this->CArea.getDoor(nCurrentRoom, nDirection, nIndex);
                Door* pDoor2 = pDoor1->getConnection();
                this->CArea.toggleInteractable(nCurrentRoom, nDirection, nIndex);
                if (pDoor1->getRoom() != 5) {
                    this->CTUIPrinter.toggleInteractable(static_cast<Rooms>(nCurrentRoom), nDirection, nIndex);
                }
                if (pDoor2 != nullptr && pDoor2->getRoom() != 5){
                    this->CTUIPrinter.toggleInteractable(static_cast<Rooms>(pDoor2->getRoom()), pDoor2->getWall(), pDoor2->getIndex());
                }
                break;
                }
            default:
                {break;}
        }
            //if (nAction == 4 || nAction == 5) {
                //pDoor = this->CArea.getDoor(nCurrentRoom, nDirection, nIndex);
                //pDoor = pDoor->getConnection();
                //this->CArea.updateDoor(nCurrentRoom, nDirection, nIndex, nAction);
                //this->CTUIPrinter.toggleInteractable(static_cast<Rooms>(pDoor->getRoom()), pDoor->getDirection(), nIndex);
            }
        //}
    //}
    else {
    //    if(nAction == 1 && nCurrentRoom != 5){
        if (vecBoolIndex[nIndex] == true) {
            this->CArea.toggleInteractable(nCurrentRoom, nDirection, nIndex);
            this->CTUIPrinter.toggleInteractable(static_cast<Rooms>(nCurrentRoom), 
                                                 this->CArea.getFloorInteractableWall(nCurrentRoom, nIndex), 
                                                 this->CArea.getFloorInteractableIndex((int)static_cast<Rooms>(nCurrentRoom), nIndex));
        }
    }
}
    //}


void Game::enterDoor(int nTurn, int nIndex) {
    int nCurrentRoom = this->vecPlayer[nTurn].getRoom();
    int nDirection = this->vecPlayer[nTurn].getDirection(nCurrentRoom);
    int nNewDirection, nRoomSize;
    std::vector<bool> vecBoolIndex = this->CArea.getDoorIndices(nCurrentRoom, nDirection);
    if (!vecBoolIndex[nIndex]) {
        Door* pDoor = CArea.getDoor(nCurrentRoom, nDirection, nIndex);
        nNewDirection = this->vecPlayer[nTurn].move(*pDoor->getConnection());
        nCurrentRoom = this->vecPlayer[nTurn].getRoom();
        std::cout << "Player successfully moved " << nCurrentRoom << std::endl;
        //std::cout << "Player new direction " << this->vecPlayer[nTurn].getDirection(nCurrentRoom) << std::endl;
        std::cout << "Current room: " << nCurrentRoom << std::endl;
        nRoomSize = this->CArea.getRoomSize(nCurrentRoom);
        if (nNewDirection != -1)
            this->turnMultiple(nNewDirection, nRoomSize, nTurn);
    }
}

//void Game::getOppositeWall() {

//}

void Game::toggleLight(int nTurn) {
    int nCurrentRoom = this->vecPlayer[nTurn].getRoom();
    int nDirection = this->vecPlayer[nTurn].getDirection(nCurrentRoom);
    
    if(this->CArea.getLightswitch(nCurrentRoom, nDirection) != nullptr){
        this->CTUIPrinter.toggleLight(static_cast<Rooms>(nCurrentRoom));
    }
    
}