/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CANDY_TUI_GRAPHICS_IMAGE_ANNOTATION_H
#define CANDY_TUI_GRAPHICS_IMAGE_ANNOTATION_H

namespace graphics {
    class ImageAnnotation {
        private:
            std::string strImage;
            int nLength;
            int nPaletteIndex;

        public:
            ImageAnnotation(std::string strImage, int nLength, int nPaletteIndex);

        public:
            std::string getImage();
            int getLength();
            int getPaletteIndex();
    };
}

#endif