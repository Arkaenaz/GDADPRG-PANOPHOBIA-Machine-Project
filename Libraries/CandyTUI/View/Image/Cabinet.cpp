/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Cabinet.h"

using namespace images;

Cabinet::Cabinet(Colors EColorLight, Colors EColorMid, Colors EColorDark, int nX, int nY)
        : Image(createAnnotationVector(),
                createBrightPalette(EColorLight, EColorMid, EColorDark),
                createDarkPalette(),
                createBounds(nX, nY)) {
}

std::vector<ImageAnnotation> Cabinet::createAnnotationVector() {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CCabinet1 = ImageAnnotation("╔═════╦═════╗", 13, 0);
    ImageAnnotation CCabinet2 = ImageAnnotation("║", 1, 0);
    ImageAnnotation CCabinet3 = ImageAnnotation("▀", 1, 1);         // Towel neutral bg.
    ImageAnnotation CCabinet4 = ImageAnnotation("█", 1, 2);         // Mid door.

    ImageAnnotation CCabinet5 = ImageAnnotation("╠═════╣", 7, 0);
    ImageAnnotation CCabinet6 = ImageAnnotation("▌", 1, 3);         // Mid door knob.
    ImageAnnotation CCabinet7 = ImageAnnotation("▀", 1, 4);         // Towel light bg.

    ImageAnnotation CCabinet8 = ImageAnnotation("█", 1, 5);         // Dark door.
    ImageAnnotation CCabinet9 = ImageAnnotation("▌", 1, 6);         // Dark door knob.

    ImageAnnotation CCabinet10 = ImageAnnotation("╠═════╬═════╣", 13, 0);

    ImageAnnotation CCabinet11 = ImageAnnotation("║", 1, 7);
    ImageAnnotation CCabinet12 = ImageAnnotation("╠╦════╩════╦╣", 13, 7);
    ImageAnnotation CCabinet13 = ImageAnnotation("╚╝         ╚╝", 13, 7);

    vecAnnotation = {CCabinet1,

                     CCabinet2,
                     CCabinet3, CCabinet3, CCabinet3, CCabinet3, CCabinet3,
                     CCabinet2,
                     CCabinet4, CCabinet4, CCabinet4, CCabinet4, CCabinet4,
                     CCabinet2,

                     CCabinet5,
                     CCabinet4, CCabinet6, CCabinet4, CCabinet4, CCabinet4,
                     CCabinet2,

                     CCabinet2,
                     CCabinet7, CCabinet7, CCabinet7, CCabinet7, CCabinet7,
                     CCabinet2,
                     CCabinet4, CCabinet4, CCabinet4, CCabinet4, CCabinet4,
                     CCabinet2,

                     CCabinet10,

                     CCabinet2,
                     CCabinet3, CCabinet3, CCabinet3, CCabinet3, CCabinet3,
                     CCabinet2,
                     CCabinet8, CCabinet8, CCabinet8, CCabinet8, CCabinet8,
                     CCabinet2,

                     CCabinet5,
                     CCabinet8, CCabinet9, CCabinet8, CCabinet8, CCabinet8,
                     CCabinet2,

                     CCabinet11,
                     CCabinet7, CCabinet7, CCabinet7, CCabinet7, CCabinet7,
                     CCabinet11,
                     CCabinet8, CCabinet8, CCabinet8, CCabinet8, CCabinet8,
                     CCabinet11,

                     CCabinet12,

                     CCabinet13};

    return vecAnnotation;
}

Palette Cabinet::createBrightPalette(Colors EColorLight, Colors EColorMid, Colors EColorDark) {
    Palette CPalette = Palette({Colors::DRESSER_BROWN_LIGHT,
                                Colors::WHITE,
                                EColorMid,
                                Colors::DRESSER_KNOB_LIGHT,

                                Colors::WHITE,
                                EColorDark,
                                Colors::DRESSER_KNOB_LIGHT,
                                Colors::DRESSER_BROWN_DARK},

                               {Colors::CLEAR,
                                Colors::DRESSER_V_LIGHT,
                                EColorMid,
                                EColorMid,

                                EColorLight,
                                EColorDark,
                                EColorDark,
                                Colors::CLEAR});
    return CPalette;
}

Palette Cabinet::createDarkPalette() {
    Palette CPalette = Palette({Colors::DRESSER_V_LIGHT,
                                Colors::WHITE,
                                Colors::DRESSER_MID,
                                Colors::DRESSER_V_LIGHT,

                                Colors::WHITE,
                                Colors::DRESSER_DARK,
                                Colors::DRESSER_V_LIGHT,
                                Colors::DRESSER_V_DARK},

                               {Colors::CLEAR,
                                Colors::DRESSER_V_LIGHT,
                                Colors::DRESSER_MID,
                                Colors::DRESSER_MID,

                                Colors::DRESSER_LIGHT,
                                Colors::DRESSER_DARK,
                                Colors::DRESSER_DARK,
                                Colors::CLEAR});
    return CPalette;
}

Bounds Cabinet::createBounds(int nX, int nY) {
    return Bounds(nX, nY, 13, 10);
}
