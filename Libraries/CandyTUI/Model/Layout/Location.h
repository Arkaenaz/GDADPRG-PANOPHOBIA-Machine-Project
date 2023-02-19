/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_LAYOUTS_LOCATION_H
#define CANDY_TUI_LAYOUTS_LOCATION_H

namespace layouts {
    class Location {
        private:
            int nX;
            int nY;

        public:
            Location();
            Location(int nX, int nY);

        public:
            int getX();
            void setX(int nX);

            int getY();
            void setY(int nY);
    };
}

#endif