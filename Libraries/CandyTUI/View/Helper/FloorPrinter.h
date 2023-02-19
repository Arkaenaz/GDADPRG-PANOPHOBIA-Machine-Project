/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_HELPERS_FLOOR_PRINTER_H
#define CANDY_TUI_HELPERS_FLOOR_PRINTER_H

#include "../../Config/Settings.h"

#include "../../Model/Enum/EnumBorderTypes.h"
#include "../../Model/Enum/EnumColors.h"
#include "../../Model/Enum/EnumRooms.h"

#include "../../Model/Graphics/Image.h"
#include "../Image/Border/Border.h"

namespace helpers {
    using namespace images;

    class FloorPrinter {
        public:
            void print(Rooms ERoom, std::vector<int> vecDecorIndex, bool isLight);

        private:
            void printContents(std::vector<int> vecDecorIndex, int nScreenWidth, std::string strPadding);
            void printHeader(Rooms ERoom, Colors EColorLight, Colors EColorDark, int nScreenWidth, std::string strPadding, bool isLight);
            void printFooter(Colors EColorLight, Colors EColorDark, int nScreenWidth, std::string strPadding, bool isLight);

        private:
            std::string getEquivalentName(Rooms ERoom);
            Colors getLightColor(Rooms ERoom);
            Colors getDarkColor(Rooms ERoom);
    };
}

#endif