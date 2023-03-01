/****************************************************
Author: 
Date Created: February 18, 2022, 11:09 PM
Description: 
****************************************************/

#ifndef UTILITIES_PRINTER_H
#define UTILITIES_PRINTER_H

#include "../Libraries/CandyTUI/TUIPrinter.h"

namespace utilities {
    using namespace candyTUI;
    class Interface {
        protected:
            TUIPrinter CTUIPrinter;

        public:
            Interface();

        public:
            void printTitleScreen();
            void printLobbyScreen();
            char scanChar();
        
        private:
            void printFor(std::string strText, int nWidth);
            void printCenter(std::string strText);
    };
}

#endif