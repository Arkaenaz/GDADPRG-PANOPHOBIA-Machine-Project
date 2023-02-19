/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Location.h"

using namespace layouts;

Location::Location() {
    this->nX = 0;
    this->nY = 0;
}

Location::Location(int nX, int nY) {
    this->nX = nX;
    this->nY = nY;
}

int Location::getX() {
    return this->nX;
}

void Location::setX(int nX) {
    this->nX = nX;
}

int Location::getY() {
    return this->nY;
}

void Location::setY(int nY) {
    this->nY = nY;
}
