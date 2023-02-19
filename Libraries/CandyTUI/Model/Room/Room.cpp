/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Room.h"

using namespace rooms;

Room::Room(std::vector<Wall> vecWall, Palette CBright, Palette CDark)
     : CBright(CBright),
       CDark(CDark),
       CSize(Size(SCREEN_WIDTH, SCREEN_HEIGHT)),
       CTopBorder(createTopBorder(CBright, CDark, vecWall[0].hasLight())),
       CSideBorder(createSideBorder(CBright, CDark)),
       CBottomBorder(createBottomBorder(CBright, CDark)) {
    this->vecWall = vecWall;
    this->nActiveIndex = 0;
    this->bLight = true;
}

void Room::left() {
    this->setActiveIndex(this->nActiveIndex - 1);
    this->CTopBorder = this->createTopBorder(this->CBright, this->CDark, this->vecWall[this->nActiveIndex].hasLight());
    if(!this->bLight)
        this->CTopBorder.swapPalette();
}

void Room::right() {
    this->setActiveIndex(this->nActiveIndex + 1);
    this->CTopBorder = this->createTopBorder(this->CBright, this->CDark, this->vecWall[this->nActiveIndex].hasLight());
    if(!this->bLight)
        this->CTopBorder.swapPalette();
}

void Room::toggleLight() {
    this->bLight = !this->bLight;

    for(int i = 0; i < (int)this->vecWall.size(); i++)
        this->vecWall[i].swapPalette();

    this->CTopBorder.swapPalette();
    this->CSideBorder.swapPalette();
    this->CBottomBorder.swapPalette();
}

void Room::toggleInteractable(int nWallIndex, int nInteractableIndex) {
    this->vecWall[nWallIndex].toggleInteractable(nInteractableIndex);
}

void Room::print() {
    Wall CActiveWall = this->vecWall[this->nActiveIndex];
    std::string strPadding = "";

    for(int i = 0; i < ROOM_SCREEN_PADDING_LEFT; i++)
        strPadding.append(" ");

    std::cout << strPadding;
    std::cout << this->CTopBorder.getColoredImage()[0] << std::endl;

    for(int i = 0; i < CActiveWall.getSize().getHeight(); i++) {
        std::cout << strPadding;
        std::cout << this->CSideBorder.getColoredImage()[0];
        std::cout << CActiveWall.getImageVector()[i];
        std::cout << this->CSideBorder.getColoredImage()[0];
        std::cout << std::endl;
    }

    for(int i = 0; i < (int)this->CBottomBorder.getColoredImage().size(); i++) {
        std::cout << strPadding;
        std::cout << this->CBottomBorder.getColoredImage()[i] << std::endl;
    }
}

bool Room::isLight() {
    return this->bLight;
}

Image Room::createTopBorder(Palette CBright, Palette CDark, bool hasLight) {
    std::vector<ImageAnnotation> vecAnnotation;
    std::string strBorderImage = "";

    ImageAnnotation CBorder1 = ImageAnnotation("█", 1, 0);
    ImageAnnotation CBorder2 = ImageAnnotation("▀", 1, 0);
    ImageAnnotation CBorder3 = ImageAnnotation("▀", 1, 4);

    vecAnnotation.push_back(CBorder1);

    for(int i = 0; i < this->CSize.getWidth() - 2; i++) {
        if(hasLight && i == ((this->CSize.getWidth() - 2) / 2))
            vecAnnotation.push_back(CBorder3);
        else
            vecAnnotation.push_back(CBorder2);
    }

    vecAnnotation.push_back(CBorder1);

    return Image(vecAnnotation, CBright, CDark, Bounds(this->CSize.getWidth(), 1));
}

Image Room::createSideBorder(Palette CBright, Palette CDark) {
    std::vector<ImageAnnotation> vecAnnotation;
    ImageAnnotation CBorder = ImageAnnotation("█", 1, 0);

    vecAnnotation = {CBorder};

    return Image(vecAnnotation, CBright, CDark, Bounds(CBorder.getLength(), 1));
}

Image Room::createBottomBorder(Palette CBright, Palette CDark) {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CBorder1 = ImageAnnotation("▀", 1, 3);
    ImageAnnotation CBorder2 = ImageAnnotation("█", 1, 1);
    ImageAnnotation CBorder3 = ImageAnnotation("█", 1, 2);
    
    ImageAnnotation CBorder4 = ImageAnnotation("█", 1, 0);

    int nLength = 0;

    vecAnnotation.push_back(CBorder4);

    for(int i = 0; i < (this->CSize.getWidth() - 2); i++)
        vecAnnotation.push_back(CBorder1);

    vecAnnotation.push_back(CBorder4);

    for(int i = 0; nLength < this->CSize.getWidth(); i++) {
        for(int j = 0; j < 3 && nLength < this->CSize.getWidth(); j++) {
            vecAnnotation.push_back(CBorder2);
            nLength++;
        }
        for(int j = 0; j < 3 && nLength < this->CSize.getWidth(); j++) {
            vecAnnotation.push_back(CBorder3);
            nLength++;
        }
    }
    
    return Image(vecAnnotation, CBright, CDark, Bounds(this->CSize.getWidth(), 3));
}

void Room::setActiveIndex(int nActiveIndex) {
    if(nActiveIndex < 0)
        nActiveIndex = this->vecWall.size() - 1;
    else if(nActiveIndex >= (int)this->vecWall.size())
        nActiveIndex = 0;

    this->nActiveIndex = nActiveIndex;
}
