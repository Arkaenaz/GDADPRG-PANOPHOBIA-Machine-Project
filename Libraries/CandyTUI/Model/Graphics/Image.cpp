/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Image.h"

using namespace graphics;

Image::Image(std::vector<ImageAnnotation> vecAnnotation,
             Palette CBright,
             Palette CDark,
             Bounds CBounds) : CBright(CBright),
                               CDark(CDark),
                               CActivePalette(CBright),
                               CBounds(CBounds) {
    this->vecAnnotation = vecAnnotation;
    this->vecColoredImage = {""};
    this->nCurrentLine = 0;

    this->applyActivePalette();
}

void Image::swapPalette() {
    if(this->CActivePalette.isEqual(this->CBright))
        this->CActivePalette = this->CDark;
    else
        this->CActivePalette = this->CBright;
        
    this->applyActivePalette();
}

void Image::applyActivePalette() {
    this->applyPalette(this->CActivePalette);
}

void Image::applyPalette(Palette CPalette) {
    std::string strImage;
    std::string strColoredImage = "";
    int nPaletteIndex;
    int nLength = 0;

    this->vecColoredImage.clear();

    for(int i = 0; i < (int)this->vecAnnotation.size(); i++) {
        strImage = this->vecAnnotation[i].getImage();
        nPaletteIndex = this->vecAnnotation[i].getPaletteIndex();
        nLength += this->vecAnnotation[i].getLength();

        strColoredImage.append(CPalette.apply(nPaletteIndex));
        strColoredImage.append(strImage);
        strColoredImage.append(CPalette.clear());
        
        if(nLength == this->CBounds.getWidth()) {
            this->vecColoredImage.push_back(strColoredImage);
            strColoredImage = "";
            nLength = 0;
        }
    }
}

std::string Image::getCurrentLine() {
    std::string strCurrentLine = this->vecColoredImage[this->nCurrentLine];
    this->nCurrentLine++;

    if(this->nCurrentLine > this->CBounds.getHeight())
        this->nCurrentLine = 0;

    return strCurrentLine;
}

std::vector<std::string> Image::getColoredImage() {
    return this->vecColoredImage;
}

std::vector<ImageAnnotation> Image::getAnnotation() {
    return this->vecAnnotation;
}

Bounds Image::getBounds() {
    return this->CBounds;
}

void Image::setBounds(Bounds CBounds) {
    this->CBounds = CBounds;
}
