/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "FrameTypeOff.h"

using namespace images;

/*
    Pre-requisites:
        [1] CImage is ideally meant to be a Frame.
*/
FrameTypeOff::FrameTypeOff(Image CImage)
             : Image(CImage.getAnnotation(),
                     createPalette(),
                     createPalette(),
                     CImage.getBounds()) {
}

Palette FrameTypeOff::createPalette() {
    Palette CPalette = Palette({Colors::FRAME_OFF,
                                Colors::FRAME_OFF,
                                Colors::FRAME_OFF,
                                Colors::FRAME_OFF,
                                Colors::FRAME_OFF,
                                Colors::FRAME_OFF},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}
