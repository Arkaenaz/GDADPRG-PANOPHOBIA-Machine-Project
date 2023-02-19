/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "DoorOpen.h"

using namespace images;

DoorOpen::DoorOpen(std::string strLabel, Palette CBright, Palette CDark, int nX, int nY)
         : Image(createAnnotationVector(strLabel),
           CBright,
           CDark,
           createBounds(nX, nY)) {
}

std::vector<ImageAnnotation> DoorOpen::createAnnotationVector(std::string strLabel) {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CTitle = ImageAnnotation(strLabel, 11, 12);

    ImageAnnotation CDoor1 = ImageAnnotation("┌─────────┐", 11, 0);
    ImageAnnotation CDoor2 = ImageAnnotation("│", 1, 0);

    ImageAnnotation CDoor3 = ImageAnnotation("▀", 1, 1);
    ImageAnnotation CDoor4 = ImageAnnotation("▀", 1, 2);
    ImageAnnotation CDoor5 = ImageAnnotation("█", 1, 3);

    ImageAnnotation CDoor6 = ImageAnnotation("▌", 1, 4);
    ImageAnnotation CDoor7 = ImageAnnotation("▐", 1, 5);
    ImageAnnotation CDoor8 = ImageAnnotation("█", 1, 6);
    ImageAnnotation CDoor9 = ImageAnnotation("▌", 1, 5);
    ImageAnnotation CDoor10 = ImageAnnotation("▐", 1, 7);

    ImageAnnotation CDoor11 = ImageAnnotation("▐", 1, 8);
    ImageAnnotation CDoor12= ImageAnnotation("▌", 1, 8);
    ImageAnnotation CDoor13 = ImageAnnotation("▐", 1, 9);
    ImageAnnotation CDoor14 = ImageAnnotation("▌", 1, 9);

    ImageAnnotation CDoor15 = ImageAnnotation("╔╡", 2, 10);
    ImageAnnotation CDoor16 = ImageAnnotation("╚╝", 2, 11);
    ImageAnnotation CSpace = ImageAnnotation(" ", 1, 12);

    vecAnnotation = {CSpace, CTitle,
                     CSpace, CDoor1,
                     CSpace, CDoor2, CDoor3, CDoor4, CDoor4, CDoor4, CDoor4, CDoor4, CDoor4, CDoor4, CDoor5, CDoor2,

                     CDoor15, CDoor6, CDoor7, CDoor8, CDoor8, CDoor8, CDoor8, CDoor8, CDoor9, CDoor10, CDoor2,
                     CDoor16, CDoor6, CDoor11, CDoor8, CDoor8, CDoor8, CDoor8, CDoor8, CDoor12, CDoor10, CDoor2,

                     CSpace, CDoor2, CDoor6, CDoor11, CDoor8, CDoor8, CDoor8, CDoor8, CDoor8, CDoor12, CDoor10, CDoor2,
                     CSpace, CDoor2, CDoor6, CDoor11, CDoor8, CDoor8, CDoor8, CDoor8, CDoor8, CDoor12, CDoor10, CDoor2,
                     
                     CDoor15, CDoor6, CDoor11, CDoor8, CDoor8, CDoor8, CDoor8, CDoor8, CDoor12, CDoor10, CDoor2,
                     CDoor16, CDoor6, CDoor13, CDoor8, CDoor8, CDoor8, CDoor8, CDoor8, CDoor14, CDoor10, CDoor2,

                     CSpace, CDoor2, CDoor6, CDoor13, CDoor8, CDoor8, CDoor8, CDoor8, CDoor8, CDoor14, CDoor10, CDoor2};

    return vecAnnotation;
}

Bounds DoorOpen::createBounds(int nX, int nY) {
    return Bounds(nX, nY, 12, 10);
}
