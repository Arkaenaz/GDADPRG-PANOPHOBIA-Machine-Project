/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "ImageAnnotation.h"

using namespace graphics;

ImageAnnotation::ImageAnnotation(std::string strImage, int nLength, int nPaletteIndex) {
    this->strImage = strImage;
    this->nLength = nLength;
    this->nPaletteIndex = nPaletteIndex;
}

std::string ImageAnnotation::getImage() {
    return this->strImage;
}

int ImageAnnotation::getLength() {
    return this->nLength;
}

int ImageAnnotation::getPaletteIndex() {
    return this->nPaletteIndex;
}
