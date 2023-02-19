/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Bounds.h"

using namespace layouts;

Bounds::Bounds() {
    this->CLocation = Location();
    this->CSize = Size();
}

Bounds::Bounds(int nWidth, int nHeight) {
    this->CLocation = Location();
    this->CSize = Size(nWidth, nHeight);
}

Bounds::Bounds(int nX, int nY, int nWidth, int nHeight) {
    this->CLocation = Location(nX, nY);
    this->CSize = Size(nWidth, nHeight);
}

bool Bounds::isWithin(Bounds CBounds) {
    int nLeft = this->CLocation.getY();
    int nRight = this->CLocation.getY() + this->CSize.getWidth();
    int nTop = this->CLocation.getX();
    int nBottom = this->CLocation.getX() + this->CSize.getHeight();

    int nBoundsLeft = CBounds.getY();
    int nBoundsRight = CBounds.getY() + CBounds.getWidth();
    int nBoundsTop = CBounds.getX();
    int nBoundsBottom = CBounds.getX() + CBounds.getHeight();

    if (nLeft < nBoundsRight && nRight > nBoundsLeft &&
        nTop > nBoundsBottom && nBottom < nBoundsTop)
        return true;
        
    return false;
}

bool Bounds::spans(Location CLocation) {
    int nLeft = this->CLocation.getX();
    int nRight = this->CLocation.getX() + this->CSize.getWidth();
    int nTop = this->CLocation.getY();
    int nBottom = this->CLocation.getY() + this->CSize.getHeight();

    if(CLocation.getY() >= nTop && CLocation.getY() < nBottom &&
       CLocation.getX() >= nLeft && CLocation.getX() < nRight)
       return true;

    return false;
}

int Bounds::getX() {
    return this->CLocation.getX();
}

void Bounds::setX(int nX) {
    this->CLocation.setX(nX);
}

int Bounds::getY() {
    return this->CLocation.getY();
}

void Bounds::setY(int nY) {
    this->CLocation.setY(nY);
}

int Bounds::getWidth() {
    return this->CSize.getWidth();
}

void Bounds::setWidth(int nWidth) {
    this->CSize.setWidth(nWidth);
}

int Bounds::getHeight() {
    return this->CSize.getHeight();
}

void Bounds::setHeight(int nHeight) {
    this->CSize.setHeight(nHeight);
}
