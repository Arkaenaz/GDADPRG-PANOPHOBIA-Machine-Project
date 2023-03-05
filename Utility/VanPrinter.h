#ifndef UTILITY_VAN_PRINTER_H
#define UTILITY_VAN_PRINTER_H

#include "iostream"

namespace utilities{

    class VanPrinter{
        private:
            int nWallIndex;

        public:
            VanPrinter();

        public:
            void displaySanity(float fSanity);

            void printWall(float fSanity);
            void turnRight();
            void turnLeft();


    };
}

#endif