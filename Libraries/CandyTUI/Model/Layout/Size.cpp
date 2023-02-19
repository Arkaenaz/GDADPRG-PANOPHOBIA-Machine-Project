/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Size.h"

using namespace layouts;

Size::Size() {
    this->nWidth = 0;
    this->nHeight = 0;
}

Size::Size(int nWidth, int nHeight) {
    this->nWidth = nWidth;
    this->nHeight = nHeight;
}

int Size::getWidth() {
    return this->nWidth;
}

void Size::setWidth(int nWidth) {
    this->nWidth = nWidth;
}

int Size::getHeight() {
    return this->nHeight;
}

void Size::setHeight(int nHeight) {
    this->nHeight = nHeight;
}
