/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Wall.h"

using namespace rooms;

Wall::Wall(std::vector<Image> vecItems, std::vector<Interactable> vecInteractable, bool hasLight) {
    this->vecItems = vecItems;
    this->vecInteractable = vecInteractable;

    this->vecImage = {""};
    this->CSize = Size(WALL_WIDTH, WALL_HEIGHT);
    this->bLight = hasLight;
    
    this->createImage();
}

void Wall::swapPalette() {
    for(int i = 0; i < (int)this->vecItems.size(); i++) {
        this->vecItems[i].swapPalette();
    }
    
    for(int i = 0; i < (int)this->vecInteractable.size(); i++) {
        this->vecInteractable[i].swapPalette();
    }

    this->createImage();
}

void Wall::toggleInteractable(int nIndex) {
    this->vecInteractable[nIndex].toggle();
    this->createImage();
}

void Wall::createImage() {
    std::vector<Image> vecAllImage = this->mergeImage();
    std::string strLine;

    int nItemIndex;

    this->vecImage.clear();
    
    for(int y = 0; y < this->CSize.getHeight() && !vecAllImage.empty(); y++) {
        strLine = "";
        for(int x = 0; x < this->CSize.getWidth() && !vecAllImage.empty(); x++) {
            nItemIndex = this->hasItem(Location(x, y), vecAllImage);

            if(nItemIndex != -1) {
                strLine.append(vecAllImage[nItemIndex].getCurrentLine());
                x += (vecAllImage[nItemIndex].getBounds().getWidth() - 1);
            }
            else {
                strLine.append(" ");
            }
        }
        this->vecImage.push_back(strLine);
    }
}

std::vector<Image> Wall::mergeImage() {
    std::vector<Image> vecAllItems = this->vecItems;
    for(int i = 0; i < (int)this->vecInteractable.size(); i++) {
        vecAllItems.push_back(this->vecInteractable[i].getImage());
    }
    
    return vecAllItems;
}

int Wall::hasItem(Location CLocation, std::vector<Image> vecItems) {
    int nIndex = -1;
    for(int i = 0; i < (int)vecItems.size() && nIndex == -1; i++) {
        if(vecItems[i].getBounds().spans(CLocation)) {
            nIndex = i;
        }
    }
    
    return nIndex;
}

std::vector<std::string> Wall::getImageVector() {
    return this->vecImage;
}

Size Wall::getSize() {
    return this->CSize;
}

bool Wall::hasLight() {
    return this->bLight;
}
