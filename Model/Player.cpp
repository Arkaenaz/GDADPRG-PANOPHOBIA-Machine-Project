#include "Player.h"

using namespace gameArea;
using namespace gameInteractable;
using namespace gamePlayer;

Player::Player(){
    this->strName = "No name";
    int aDirection[] = {0,0,0,0,0,0};
    std::copy(aDirection+0, aDirection+6, this->aDirection+0);
}
Player::Player(string strName){
    this->strName = strName;
    int aDirection[] = {0,0,0,0,0,0};
    std::copy(aDirection+0, aDirection+6, this->aDirection+0);
}

/*Player::pan   panning of the perspective
    return -1           = pan left
            0           = look up/down
            1           = pan right

    @param nDirection   = in which direction to look at
    @param nRoomSize    = max number of directions/walls in the given room
*/
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
    return -1;
}

/*Player::move  handles player's movement between rooms
    return -1           = invalid move, due to empty/closed door
            nDirection  = move success, direction/wall to look at

    @param CDOOR        = door class, function retrieves nRoom and nDirection from here
*/
int Player::move(Door CDoor){
    if(CDoor.getToggled()){
        if(CDoor.getRoom()==-1){
            return -1;
        }
        this->nRoom = CDoor.getRoom();
        return CDoor.getDirection();
    }
    return -1;
}

/*Player::interact   handling of interact action
    return -1           = invalid/error
            0           = decor drop
            1           = decor pick up
            2           = light off
            3           = light on
            4           = door close
            5           = door open

    @param CArea        = area class
    @param nIndex       = which index to interact with
*/
int Player::interact(Area CArea, int nIndex){
    return CArea.toggleInteractable(this->getRoom(),this->getDirection(this->getRoom()),nIndex);
}

/*Player::sanityDrain   sanity drain, called whenever player does an action
    @param bLight       = is the room's light on or not?
*/
void Player::sanityDrain(bool bLight){ //called whenever player does an action(?)
    float fTotalDrain = 0.0;

    //Passive Drain
    if(bLight == true) { fTotalDrain += PASSIVE_LIGHT_ON; }
    else { fTotalDrain += PASSIVE_LIGHT_OFF; }

    //Active Drain

    this->fSanity -= fTotalDrain;
}

/*Player::getRoom   returns player's current room
    return nRoom        = player's current room
*/
int Player::getRoom(){
    return this->nRoom;
}

/*Player::getDirection   returns player's current direction in nRoom
    return nRoom        = player's current direction in nRoom
*/
int Player::getDirection(int nRoom){
    return this->aDirection[nRoom];
}

int Player::getPrevDirection(){
    return this->nPrevDirection;
}

/*Player::getSanity  returns player's current sanity
    return fSanity      = player's current sanity
*/
float Player::getSanity(){
    return this->fSanity;
}

/*Player::getName  returns player's name
    return strName      = player's name
*/
string Player::getName() {
    return this->strName;
}

/*Player::getName  sets player's direction
    @param nDirection   = direction to set to
    @param nRoom        = which direction to set
*/
void Player::setDirection(int nDirection,int nRoom){
    this->aDirection[nRoom] = nDirection;
}

void Player::setRoom(int nRoom) {
    this->nRoom = nRoom;
}