/****************************************************
Author: 
Date Created: February 18, 2022, 11:09 PM
Description: 
****************************************************/

#ifndef UTILITIES_PRINTER_H
#define UTILITIES_PRINTER_H

#include "../Model/Player.h"
#include "../Libraries/CandyTUI/TUIPrinter.h"
#include "../Utility/Utility.h"

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
            void printLobbyScreen(int nPlayer);
            void turnMultiple(int nNewDirection, int nRoomSize, Player CPlayer);
            char scanChar();
        
        private:
            void printFor(std::string strText, int nWidth);
            void printCenter(std::string strText);
    };
}

#endif