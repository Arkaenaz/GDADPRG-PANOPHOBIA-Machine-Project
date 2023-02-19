/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Drawer.h"

using namespace images;

Drawer::Drawer(Colors EColorMid, Colors EColorDark, int nX, int nY)
       : Image(createAnnotationVector(),
               createBrightPalette(EColorMid, EColorDark),
               createDarkPalette(),
               createBounds(nX, nY)) {
}

std::vector<ImageAnnotation> Drawer::createAnnotationVector() {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CDrawer1 = ImageAnnotation("╔═════╦═════╗", 13, 0);
    ImageAnnotation CDrawer2 = ImageAnnotation("║", 1, 0);
    ImageAnnotation CDrawer3 = ImageAnnotation("█", 1, 1);
    ImageAnnotation CDrawer4 = ImageAnnotation("▲", 1, 2);
    ImageAnnotation CDrawer5 = ImageAnnotation("█", 1, 3);
    ImageAnnotation CDrawer6 = ImageAnnotation("▲", 1, 4);

    ImageAnnotation CDrawer7 = ImageAnnotation("╠╦════╩════╦╣", 13, 5);
    ImageAnnotation CDrawer8 = ImageAnnotation("╚╝         ╚╝", 13, 5);


    vecAnnotation = {CDrawer1,
                     
                     CDrawer2,
                     CDrawer3, CDrawer3, CDrawer4, CDrawer3, CDrawer3,
                     CDrawer2,
                     CDrawer5, CDrawer5, CDrawer6, CDrawer5, CDrawer5,
                     CDrawer2,

                     CDrawer7,
                     CDrawer8};

    return vecAnnotation;
}

Palette Drawer::createBrightPalette(Colors EColorMid, Colors EColorDark) {
    Palette CPalette = Palette({Colors::DRESSER_BROWN_LIGHT,
                                EColorDark,
                                Colors::DRESSER_KNOB_LIGHT,
                                EColorMid,
                                Colors::DRESSER_KNOB_LIGHT,
                                
                                Colors::DRESSER_BROWN_DARK},

                               {Colors::CLEAR,
                                EColorDark,
                                EColorDark,
                                EColorMid,
                                EColorMid,

                                Colors::CLEAR});
    return CPalette;
}

Palette Drawer::createDarkPalette() {
    Palette CPalette = Palette({Colors::DRESSER_V_LIGHT,
                                Colors::DRESSER_DARK,
                                Colors::DRESSER_KNOB_LIGHT,
                                Colors::DRESSER_DARK,
                                Colors::DRESSER_KNOB_LIGHT,
                                
                                Colors::DRESSER_V_DARK},

                               {Colors::CLEAR,
                                Colors::DRESSER_DARK,
                                Colors::DRESSER_DARK,
                                Colors::DRESSER_DARK,
                                Colors::DRESSER_DARK,

                                Colors::CLEAR});
    return CPalette;
}

Bounds Drawer::createBounds(int nX, int nY) {
    return Bounds(nX, nY, 13, 4);
}
