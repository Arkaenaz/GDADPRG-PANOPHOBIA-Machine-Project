/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "FloorPrinter.h"

using namespace helpers;

void FloorPrinter::print(Rooms ERoom, std::vector<int> vecDecorIndex, bool isLight) {
    int nScreenWidth = 33;
    std::string strPadding = "";

    for(int i = 0; i < FLOOR_SCREEN_PADDING_LEFT; i++)
        strPadding.append(" ");

    Colors EColorLight = this->getLightColor(ERoom);
    Colors EColorDark = this->getDarkColor(ERoom);

    std::cout << std::endl;

    this->printHeader(ERoom, EColorLight, EColorDark, nScreenWidth, strPadding, isLight);

    this->printContents(vecDecorIndex, nScreenWidth, strPadding);

    this->printFooter(EColorLight, EColorDark, nScreenWidth, strPadding, isLight);
}

void FloorPrinter::printContents(std::vector<int> vecDecorIndex, int nScreenWidth, std::string strPadding) {
    int nWidth = 4;
    int nHeight = std::ceil(vecDecorIndex.size() / ((float)4));
    int nIndex = 0;
    strPadding.append(" ");

    for(int i = 0; i < nHeight; i++) {
        std::cout << strPadding;
        for(int j = 0; j < nWidth; j++) {
            std::cout << "╔═════╗ ";
        }
        std::cout << std::endl;
        std::cout << strPadding;
        for(int j = 0; j < nWidth; j++) {
            if(nIndex < (int)vecDecorIndex.size()) {
                if(vecDecorIndex[nIndex] < 10)
                    std::cout << "║  " << vecDecorIndex[nIndex] << "  ║ ";
                else
                    std::cout << "║ " << vecDecorIndex[nIndex] << "  ║ ";
                nIndex++;
            }
            else {
                std::cout << "║     ║ ";
            }
        }
        std::cout << std::endl;
        std::cout << strPadding;
        for(int j = 0; j < nWidth; j++) {
            std::cout << "╚═════╝ ";
        }
        std::cout << std::endl;
    }
}

void FloorPrinter::printHeader(Rooms ERoom, Colors EColorLight, Colors EColorDark, int nScreenWidth, std::string strPadding, bool isLight) {
    Image CBorder = Border(EColorLight, EColorDark, BorderTypes::TOP, nScreenWidth);
    std::string strRoomName = this->getEquivalentName(ERoom);
    
    if(!isLight)
        CBorder.swapPalette();

    std::cout << strPadding;
    if((int)strRoomName.length() < nScreenWidth) {
        for(int i = 0; i < (int)((nScreenWidth - strRoomName.length()) / 2); i++)
            std::cout << " ";        
    }

    std::cout << strRoomName << std::endl;

    for(int i = 0; i < (int)CBorder.getColoredImage().size(); i++) {
        std::cout << strPadding;
        std::cout << CBorder.getColoredImage()[i] << std::endl;
    }
}

void FloorPrinter::printFooter(Colors EColorLight, Colors EColorDark, int nScreenWidth, std::string strPadding, bool isLight) {
    Image CBorder = Border(EColorLight, EColorDark, BorderTypes::BOTTOM, nScreenWidth);
    
    if(!isLight)
        CBorder.swapPalette();

    for(int i = 0; i < (int)CBorder.getColoredImage().size(); i++) {
        std::cout << strPadding;
        std::cout << CBorder.getColoredImage()[i] << std::endl;
    }
}

std::string FloorPrinter::getEquivalentName(Rooms ERoom) {
    switch(ERoom) {
        case Rooms::FOYER:
            return "FOYER";

        case Rooms::HALLWAY:
            return "HALLWAY";

        case Rooms::KIDS_BED:
            return "KID'S BEDROOM";

        case Rooms::BATHROOM:
            return "BATHROOM";

        case Rooms::MASTERS_BED:
            return "MASTER'S BEDROOM";

        default:
            return "???";
    }
}

Colors FloorPrinter::getLightColor(Rooms ERoom) {
    switch(ERoom) {
        case Rooms::FOYER:
            return Colors::FOYER_MID;

        case Rooms::HALLWAY:
            return Colors::HALLWAY_MID;

        case Rooms::KIDS_BED:
            return Colors::KIDS_BED_MID;

        case Rooms::BATHROOM:
            return Colors::BATHROOM_MID;

        case Rooms::MASTERS_BED:
            return Colors::MASTERS_BED_MID;

        default:
            return Colors::OFF_LIGHT;
    }
}

Colors FloorPrinter::getDarkColor(Rooms ERoom) {
    switch(ERoom) {
        case Rooms::FOYER:
            return Colors::FOYER_DARK;

        case Rooms::HALLWAY:
            return Colors::HALLWAY_DARK;

        case Rooms::KIDS_BED:
            return Colors::KIDS_BED_DARK;

        case Rooms::BATHROOM:
            return Colors::BATHROOM_DARK;

        case Rooms::MASTERS_BED:
            return Colors::MASTERS_BED_DARK;

        default:
            return Colors::OFF_DARK;
    }
}