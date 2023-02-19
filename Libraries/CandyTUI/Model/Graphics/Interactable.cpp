/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Interactable.h"

using namespace images;

Interactable::Interactable(Image CImageOn, Image CImageOff)
      : CImageOn(CImageOn),
        CImageOff(CImageOff) {
    this->EState = States::ON;
}

void Interactable::toggle() {
    if(this->EState == States::ON)
        this->EState = States::OFF;
    else
        this->EState = States::ON;
}

void Interactable::swapPalette() {
    this->CImageOn.swapPalette();
    this->CImageOff.swapPalette();
}

Image Interactable::getImage() {
    switch(this->EState) {
        case States::OFF:
            return this->CImageOff;

        default:
        case States::ON:
            return this->CImageOn;
    }
}
