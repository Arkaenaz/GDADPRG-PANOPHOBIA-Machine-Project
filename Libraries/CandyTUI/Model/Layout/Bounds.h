/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_LAYOUTS_BOUNDS_H
#define CANDY_TUI_LAYOUTS_BOUNDS_H

#include "Location.h"
#include "Size.h"

namespace layouts {
    class Bounds {
        private:
            Location CLocation;
            Size CSize;

        public:
            Bounds();
            Bounds(int nWidth, int nHeight);
            Bounds(int nX, int nY, int nWidth, int nHeight);

        public:
            bool isWithin(Bounds CBounds);
            bool spans(Location CLocation);

        public:
            int getX();
            void setX(int nX);

            int getY();
            void setY(int nY);

            int getWidth();
            void setWidth(int nWidth);

            int getHeight();
            void setHeight(int nHeight);
    };
}

#endif