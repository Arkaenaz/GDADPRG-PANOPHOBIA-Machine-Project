#include "Player.h"

using namespace gameInteractable;
using namespace gamePlayer;
using namespace candyTUI;

float Player::getSanity(){
    return this->fSanity;
}

void Player::pan(int nDirection){
    switch(nDirection){
        //right
        case 0:
            this->nDirection[nRoom] += 1;
            break;
        //left
        case 1:
            this->nDirection[nRoom] -= 1;
            break;
        //up or down
        case 2:
            this->nDirection[nRoom] = -1;
            break;
    }
    switch(nRoom){
        case 0:case 2:case 3:case 4:case 5:
            errMinMax(&this->nDirection[nRoom],4);
            break;
        case 1:
            errMinMax(&this->nDirection[nRoom],8);
            break;
    }
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
    this->nDirection[nRoom] = nDirection;
}

void Player::interact(int nIndex){
    
}

int Player::getRoom(){
    return this->nRoom;
}

int Player::getDirection(int nRoom){
    return this->nDirection[nRoom];
}

float Player::getSanity(){
    return this->fSanity;
}
