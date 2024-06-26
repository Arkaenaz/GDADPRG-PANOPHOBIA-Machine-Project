/****************************************************
Author: 
Date Created: February 18, 2022, 11:09 PM
Description: 
****************************************************/

#ifndef UTILITIES_INTERFACE_H
#define UTILITIES_INTERFACE_H

#include "string"

#include "../Model/Player.h"
#include "../Utility/Utility.h"
#include "../Libraries/CandyTUI/TUIPrinter.h"
#include "../Libraries/CandyTUI/Config/Settings.h"

namespace utilities {
    using namespace candyTUI;
    using namespace gameElements;
    class Interface {
        public:
            void printTitleScreen();
            void printLobbyScreen(std::vector<Player> vecPlayer, int nPlayer);
            char scanChar(std::string strMessage);
            int scanInt(std::string strMessage);
        
        private:
            void printFor(std::string strText, int nWidth);
            void printCenter(std::string strText);
    };
}

#endif