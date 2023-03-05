/****************************************************
Author: 
Date Created: February 18, 2022, 11:09 PM
Description: 
****************************************************/

#ifndef UTILITIES_PRINTER_H
#define UTILITIES_PRINTER_H

#include "string"

#include "../Model/Player.h"
#include "../Utility/Utility.h"
#include "../Libraries/CandyTUI/TUIPrinter.h"
#include "../Libraries/CandyTUI/Config/Settings.h"

namespace utilities {
    using namespace candyTUI;
    using namespace gamePlayer;
    class Interface {
        protected:
            TUIPrinter CTUIPrinter;

        public:
            Interface();

        public:
            void printTitleScreen();
            void printLobbyScreen(std::vector<Player> vecPlayer, int nPlayer);
            void printAreaProper(int nDirection, int nRoomSize, Player CPlayer);
            void turnMultiple(int nNewDirection, int nRoomSize, Player CPlayer);
            char scanChar(std::string strMessage);
            int scanInt(std::string strMessage);
        
        private:
            void printFor(std::string strText, int nWidth);
            void printCenter(std::string strText);
    };
}

#endif