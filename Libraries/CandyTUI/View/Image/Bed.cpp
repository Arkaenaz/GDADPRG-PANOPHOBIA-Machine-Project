/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Bed.h"

using namespace images;

/*
    Pre-requisites:
        [1] CBright has at least 7 colours.
*/
Bed::Bed(Colors EColorLight, Colors EColorMid, Colors EColorDark, int nX, int nY)
    : Image(createAnnotationVector(),
            createBrightPalette(EColorLight, EColorMid, EColorDark),
            createDarkPalette(),
            createBounds(nX, nY)) {
}

std::vector<ImageAnnotation> Bed::createAnnotationVector() {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CBed1 = ImageAnnotation("╔═════════════╗", 15, 0);
    ImageAnnotation CBed2 = ImageAnnotation("║", 1, 1);
    ImageAnnotation CBed3 = ImageAnnotation("┌────┐ ┌────┐", 13, 2);
    ImageAnnotation CBed4 = ImageAnnotation("│", 1, 2);
    ImageAnnotation CBed5 = ImageAnnotation("█", 1, 3);
    ImageAnnotation CBed6 = ImageAnnotation("█", 1, 4);

    ImageAnnotation CBed7 = ImageAnnotation("█", 1, 5);
    ImageAnnotation CBed8 = ImageAnnotation("▀▀▀▀▀▀▀▀▀▀▀▀▀", 13, 6);
    
    ImageAnnotation CBed9 = ImageAnnotation("╔", 1, 1);
    ImageAnnotation CBed10 = ImageAnnotation("▀", 1, 7);
    ImageAnnotation CBed11 = ImageAnnotation("▀", 1, 8);
    ImageAnnotation CBed12 = ImageAnnotation("╗", 1, 1);

    ImageAnnotation CBed13 = ImageAnnotation("╠╦═════════════╦╣", 17, 1);
    ImageAnnotation CBed14 = ImageAnnotation("╚╝             ╚╝", 17, 1);

    ImageAnnotation CSpace = ImageAnnotation(" ", 1, 0);

    vecAnnotation = {CSpace, CBed1, CSpace,
                     CSpace, CBed2, CBed3, CBed2, CSpace,

                     CSpace, CBed2, CBed4,
                     CBed5, CBed6, CBed5, CBed6,
                     CBed4, CSpace, CBed4,
                     CBed5, CBed6, CBed5, CBed6,
                     CBed4, CBed2, CSpace,
                     
                     CSpace, CBed7, CBed8, CBed7, CSpace,

                     CBed9,
                     CBed10, CBed11, CBed10, CBed11, CBed10, CBed11,
                     CBed10, CBed11, CBed10, CBed11, CBed10, CBed11,
                     CBed10, CBed11, CBed10,
                     CBed12,

                     CBed13,
                     CBed14};

    return vecAnnotation;
}

Palette Bed::createBrightPalette(Colors EColorLight, Colors EColorMid, Colors EColorDark) {
    Palette CPalette = Palette({Colors::BED_BROWN_LIGHT,
                                Colors::BED_BROWN_DARK,
                                EColorMid,
                                Colors::BED_FOAM_LIGHT,
                                Colors::BED_FOAM_DARK,

                                EColorLight,
                                EColorLight,
                                EColorDark,
                                EColorDark,
                                Colors::WHITE},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::BED_FOAM_LIGHT,
                                Colors::BED_FOAM_DARK,

                                EColorLight,
                                EColorMid,
                                Colors::BED_FOAM_LIGHT,
                                Colors::BED_FOAM_DARK,
                                Colors::CLEAR});
    return CPalette;
}

Palette Bed::createDarkPalette() {
    Palette CPalette = Palette({Colors::BED_V_LIGHT,
                                Colors::BED_V_DARK,
                                Colors::BED_MID,
                                Colors::BED_FOAM_LIGHT,
                                Colors::BED_FOAM_DARK,

                                Colors::BED_LIGHT,
                                Colors::BED_LIGHT,
                                Colors::BED_DARK,
                                Colors::BED_DARK,
                                Colors::WHITE},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::BED_FOAM_LIGHT,
                                Colors::BED_FOAM_DARK,

                                Colors::BED_LIGHT,
                                Colors::BED_MID,
                                Colors::BED_FOAM_LIGHT,
                                Colors::BED_FOAM_DARK,
                                Colors::CLEAR});
    return CPalette;
}

Bounds Bed::createBounds(int nX, int nY) {
    return Bounds(nX, nY, 17, 7);
}
