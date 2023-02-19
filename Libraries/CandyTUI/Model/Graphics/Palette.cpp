/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Palette.h"

using namespace graphics;

Palette::Palette(std::vector<Colors> vecForeground, std::vector<Colors> vecBackground) {
    this->vecForeground = vecForeground;
    this->vecBackground = vecBackground;
}

std::string Palette::apply(int nIndex) {
    std::string strColor = "";

    if(this->vecForeground[nIndex] != Colors::CLEAR) {
        strColor.append("\x1b[38;5;");
        strColor.append(this->convertColor(this->vecForeground[nIndex]));
        strColor.append("m");   
    }

    if(this->vecBackground[nIndex] != Colors::CLEAR) {
        strColor.append("\x1b[48;5;");
        strColor.append(this->convertColor(this->vecBackground[nIndex]));
        strColor.append("m");
    }

    return strColor;
}

std::string Palette::clear() {
    return "\x1b[0m";
}

std::string Palette::convertColor(Colors CColor) {
    int nColor = static_cast<std::underlying_type_t<Colors>>(CColor);
    return std::to_string(nColor);
}

bool Palette::isEqual(Palette CPalette) {
    if(this->vecForeground == CPalette.vecForeground &&
       this->vecBackground == CPalette.vecBackground)
        return true;
    return false;
}
