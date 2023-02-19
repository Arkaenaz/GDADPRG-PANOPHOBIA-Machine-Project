/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_GRAPHICS_IMAGE_H
#define CANDY_TUI_GRAPHICS_IMAGE_H

#include "../Layout/Bounds.h"
#include "ImageAnnotation.h"
#include "Palette.h"

namespace graphics {
    class Image {
        protected:
            std::vector<std::string> vecColoredImage;

            std::vector<ImageAnnotation> vecAnnotation;
            Palette CBright;
            Palette CDark;
            Palette CActivePalette;
            Bounds CBounds;
            int nCurrentLine;

        public:
            Image(std::vector<ImageAnnotation> vecAnnotation,
                  Palette CBright,
                  Palette CDark,
                  Bounds CBounds);

        public:
            void swapPalette();
        
        protected:
            void applyPalette(Palette CPalette);
            void applyActivePalette();

        public:
            std::string getCurrentLine();
            std::vector<std::string> getColoredImage();
            std::vector<ImageAnnotation> getAnnotation();
            Bounds getBounds();
            void setBounds(Bounds CBounds);

    };
}

#endif