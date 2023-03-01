/****************************************************
Author: 
Date Created: February 18, 2022, 11:09 PM
Description: 
****************************************************/

#ifndef UTILITIES_PRINTER_H
#define UTILITIES_PRINTER_H

namespace utilities {
    class Interface {
        public:
            void printTitleScreen();
            void printLobbyScreen(int nPlayer);
            char scanChar();
        
        private:
            void printFor(std::string strText, int nWidth);
            void printCenter(std::string strText);
    };
}

#endif