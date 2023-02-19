/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_LAYOUTS_SIZE_H
#define CANDY_TUI_LAYOUTS_SIZE_H

namespace layouts {
    class Size {
        private:
            int nWidth;
            int nHeight;

        public:
            Size();
            Size(int nWidth, int nHeight);

        public:
            int getWidth();
            void setWidth(int nWidth);

            int getHeight();
            void setHeight(int nHeight);
    };
}

#endif