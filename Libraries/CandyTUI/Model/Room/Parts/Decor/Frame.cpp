/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Frame.h"

using namespace rooms;

Frame::Frame(Image CImageOn, Image CImageOff)
       : Interactable(CImageOn,
                      CImageOff) {
    this->EState = States::ON;
}
