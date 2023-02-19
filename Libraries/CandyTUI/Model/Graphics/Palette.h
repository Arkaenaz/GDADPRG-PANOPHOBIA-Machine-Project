/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_GRAPHICS_PALETTE_H
#define CANDY_TUI_GRAPHICS_PALETTE_H

#include "../Enum/EnumColors.h"

namespace graphics {
    class Palette {
        private:
            std::vector<Colors> vecForeground;
            std::vector<Colors> vecBackground;
   
        public:
            Palette(std::vector<Colors> vecForeground, std::vector<Colors> vecBackground);

        public:
            std::string apply(int nIndex);
            std::string clear();
            bool isEqual(Palette CPalette);

        private:
            std::string convertColor(Colors CColor);
    };
}

#endif