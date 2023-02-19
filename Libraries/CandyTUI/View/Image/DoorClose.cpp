/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "DoorClose.h"

using namespace images;

DoorClose::DoorClose(std::string strLabel, Palette CBright, Palette CDark, int nX, int nY)
          : Image(createAnnotationVector(strLabel),
            CBright,
            CDark,
            createBounds(nX, nY)) {
}

std::vector<ImageAnnotation> DoorClose::createAnnotationVector(std::string strLabel) {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CTitle = ImageAnnotation(strLabel, 11, 11);
    ImageAnnotation CDoor1 = ImageAnnotation("┌─────────┐", 11, 0);
    ImageAnnotation CDoor2 = ImageAnnotation("│", 1, 0);

    ImageAnnotation CDoor3 = ImageAnnotation("▀", 1, 1);
    ImageAnnotation CDoor4 = ImageAnnotation("▀", 1, 2);
    ImageAnnotation CDoor5 = ImageAnnotation("█", 1, 3);
    ImageAnnotation CDoor6 = ImageAnnotation("█", 1, 4);

    ImageAnnotation CDoor7 = ImageAnnotation("▌", 1, 5);
    ImageAnnotation CDoor8 = ImageAnnotation("▐", 1, 6);

    ImageAnnotation CDoor9 = ImageAnnotation("╔╗", 2, 7);
    ImageAnnotation CDoor10 = ImageAnnotation("╚╝", 2, 8);
    ImageAnnotation CDoor11 = ImageAnnotation("╔╡", 2, 9);
    ImageAnnotation CDoor12 = ImageAnnotation("╚╝", 2, 10);
    ImageAnnotation CSpace = ImageAnnotation(" ", 1, 11);

    vecAnnotation = {CSpace, CTitle,
                     CSpace, CDoor1,
                     CSpace, CDoor2, CDoor3, CDoor4, CDoor4, CDoor4, CDoor4, CDoor4, CDoor4, CDoor4, CDoor5, CDoor2,

                     CDoor11, CDoor7, CDoor6, CDoor6, CDoor6, CDoor6, CDoor6, CDoor6, CDoor6, CDoor8, CDoor2,
                     CDoor12, CDoor7, CDoor6, CDoor6, CDoor6, CDoor6, CDoor6, CDoor6, CDoor6, CDoor8, CDoor2,

                     CSpace, CDoor2, CDoor7, CDoor6, CDoor6, CDoor6, CDoor6, CDoor6, CDoor9, CDoor8, CDoor2,
                     CSpace, CDoor2, CDoor7, CDoor6, CDoor6, CDoor6, CDoor6, CDoor6, CDoor10, CDoor8, CDoor2,
                     
                     CDoor11, CDoor7, CDoor6, CDoor6, CDoor6, CDoor6, CDoor6, CDoor6, CDoor6, CDoor8, CDoor2,
                     CDoor12, CDoor7, CDoor6, CDoor6, CDoor6, CDoor6, CDoor6, CDoor6, CDoor6, CDoor8, CDoor2,

                     CSpace, CDoor2, CDoor7, CDoor6, CDoor6, CDoor6, CDoor6, CDoor6, CDoor6, CDoor6, CDoor8, CDoor2};
        
    return vecAnnotation;
}

Bounds DoorClose::createBounds(int nX, int nY) {
    return Bounds(nX, nY, 12, 10);
}
