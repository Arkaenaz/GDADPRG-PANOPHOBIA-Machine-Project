/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Window.h"

using namespace images;

Window::Window(int nX, int nY)
       : Image(createAnnotationVector(createBounds(nX, nY)),
               createBrightPalette(),
               createDarkPalette(),
               createBounds(nX, nY)) {
}

Window::Window(int nX, int nY, int nHeight)
       : Image(createAnnotationVector(Bounds(nX, nY, 11, nHeight)),
               createBrightPalette(),
               createDarkPalette(),
               Bounds(nX, nY, 11, nHeight)) {
}

std::vector<ImageAnnotation> Window::createAnnotationVector(Bounds CBounds) {
    std::vector<ImageAnnotation> vecAnnotation;
    bool isFlag = false;

    ImageAnnotation CBorder1 = ImageAnnotation("╔════╦════╗", 11, 0);
    ImageAnnotation CBorder2 = ImageAnnotation("║", 1, 0);
    ImageAnnotation CBorder3 = ImageAnnotation("╠════╬════╣", 11, 0);
    ImageAnnotation CBorder4 = ImageAnnotation("╚════╩════╝", 11, 0);

    ImageAnnotation CGlass1 = ImageAnnotation("████", 4, 1);
    ImageAnnotation CGlass2 = ImageAnnotation("████", 4, 2);

    vecAnnotation.push_back(CBorder1);
    for(int i = 0; i < (CBounds.getHeight() - 2); i++) {
        if(i == ((CBounds.getHeight() - 2) / 2) && CBounds.getHeight() > 3) {
            vecAnnotation.push_back(CBorder3);
            isFlag = true;
        }
        else {
            vecAnnotation.push_back(CBorder2);
            if(!isFlag) {
                vecAnnotation.push_back(CGlass1);
                vecAnnotation.push_back(CBorder2);
                vecAnnotation.push_back(CGlass2);
            }
            else {
                vecAnnotation.push_back(CGlass2);
                vecAnnotation.push_back(CBorder2);
                vecAnnotation.push_back(CGlass1);
            }
            vecAnnotation.push_back(CBorder2);
        }

    }
    vecAnnotation.push_back(CBorder4);

    return vecAnnotation;
}

Palette Window::createBrightPalette() {
    Palette CPalette = Palette({Colors::WINDOW_FRAME_LIGHT,
                                Colors::WINDOW_GLASS_LIGHT,
                                Colors::WINDOW_GLASS_DARK},
                               {Colors::CLEAR,
                                Colors::WINDOW_GLASS_LIGHT,
                                Colors::WINDOW_GLASS_DARK});
    return CPalette;
}

Palette Window::createDarkPalette() {
    Palette CPalette = Palette({Colors::WINDOW_FRAME_LIGHT,
                                Colors::WINDOW_GLASS_LIGHT,
                                Colors::WINDOW_GLASS_DARK},
                               {Colors::CLEAR,
                                Colors::WINDOW_GLASS_LIGHT,
                                Colors::WINDOW_GLASS_DARK});
    return CPalette;
}

Bounds Window::createBounds(int nX, int nY) {
    return Bounds(nX, nY, 11, 7);
}
