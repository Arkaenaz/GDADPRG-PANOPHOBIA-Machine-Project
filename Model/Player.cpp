#include "Player.h"

using namespace gameArea;
using namespace gameInteractable;
using namespace gamePlayer;
//using namespace candyTUI;

Player::Player(){
    int aDirection[] = {0,0,0,0,0,0};
    std::copy(aDirection+0, aDirection+6, this->aDirection+0);
}

int Player::pan(int nDirection, int nRoomSize){
    if(this->aDirection[nRoom] == -1){
        this->aDirection[nRoom] = this->nPrevDirection;
        return 0;
    }
    else{
        switch(nDirection){
            //right
            case 0:
                this->aDirection[nRoom] += 1;
                errMinMax(&this->aDirection[nRoom],nRoomSize);
                return 1;
            //left
            case 1:
                this->aDirection[nRoom] -= 1;
                errMinMax(&this->aDirection[nRoom],nRoomSize);
                return -1;
            //up or down
            case 2:
                this->nPrevDirection = this->aDirection[nRoom];
                this->aDirection[nRoom] = -1;
                return 0;
        }
    }
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

void Player::sanityDrain(bool bLight){ //called whenever player does an action(?)
    float fTotalDrain;

    //Passive Drain
    if(bLight == true) { fTotalDrain += PASSIVE_LIGHT_ON; }
    else { fTotalDrain += PASSIVE_LIGHT_OFF; }

    //Active Drain

    this->fSanity -= fTotalDrain;
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

string Player::getName() {
    return this->strName;
}

void Player::setDirection(int nDirection,int nRoom){
    this->aDirection[nRoom] = nDirection;
}
