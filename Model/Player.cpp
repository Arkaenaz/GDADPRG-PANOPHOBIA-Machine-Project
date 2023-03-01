#include "Player.h"

using namespace gameArea;
using namespace gameInteractable;
using namespace gamePlayer;
//using namespace candyTUI;

Player::Player(){
    int aDirection[] = {0,0,0,0,0,0};
    std::copy(aDirection+0, aDirection+6, this->aDirection+0);
}

float Player::getSanity(){
    return this->fSanity;
}

void Player::pan(int nDirection, int nRoomSize){
    switch(nDirection){
        //right
        case 0:
            this->aDirection[nRoom] += 1;
            break;
        //left
        case 1:
            this->aDirection[nRoom] -= 1;
            break;
        //up or down
        case 2:
            this->aDirection[nRoom] = -1;
            break;
    }
    errMinMax(&this->aDirection[nRoom],nRoomSize);
    /*
    switch(nRoom){
        case 0:case 2:case 3:case 4:case 5:
        
            errMinMax(&this->aDirection[nRoom],4);
            break;
        case 1:
            errMinMax(&this->aDirection[nRoom],8);
            break;
    }
    */
}

int Player::move(Door CDoor){
    if(CDoor.getToggled()){
        this->nRoom = CDoor.getRoom();
        return CDoor.getDirection();
    }
    return -1;
}

void Player::move(int nRoom, int nDirection){
    this->nRoom = nRoom;
    this->aDirection[nRoom] = nDirection;
}

void Player::interact(int nIndex){
    
}

int Player::getRoom(){
    return this->nRoom;
}

int Player::getDirection(int nRoom){
    return this->aDirection[nRoom];
}

float Player::getSanity(){
    return this->fSanity;
}

void Player::setDirection(int nDirection,int nRoom){
    this->aDirection[nRoom] = nDirection;
}
