/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Dresser.h"

using namespace images;

Dresser::Dresser(Colors EColorLight, Colors EColorMid, Colors EColorDark, int nX, int nY)
        : Image(createAnnotationVector(),
                createBrightPalette(EColorLight, EColorMid, EColorDark),
                createDarkPalette(),
                createBounds(nX, nY)) {
}

std::vector<ImageAnnotation> Dresser::createAnnotationVector() {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CDresser1 = ImageAnnotation("╔═════╦═════╗", 13, 0);
    ImageAnnotation CDresser2 = ImageAnnotation("║", 1, 0);
    ImageAnnotation CDresser3 = ImageAnnotation("█", 1, 1);
    ImageAnnotation CDresser4 = ImageAnnotation("▲", 1, 2);
    ImageAnnotation CDresser5 = ImageAnnotation("█", 1, 3);

    ImageAnnotation CDresser6 = ImageAnnotation("╠═════╣", 7, 0);
    ImageAnnotation CDresser7 = ImageAnnotation("▌", 1, 4);
    ImageAnnotation CDresser8 = ImageAnnotation("║", 1, 5);
    ImageAnnotation CDresser9 = ImageAnnotation("█", 1, 6);
    ImageAnnotation CDresser10 = ImageAnnotation("▲", 1, 7);
    
    ImageAnnotation CDresser11 = ImageAnnotation("╠╦════╩════╦╣", 13, 5);
    ImageAnnotation CDresser12 = ImageAnnotation("╚╝         ╚╝", 13, 5);


    vecAnnotation = {CDresser1,
                     
                     CDresser2,
                     CDresser3, CDresser3, CDresser4, CDresser3, CDresser3,
                     CDresser2,
                     CDresser5, CDresser5, CDresser5, CDresser5, CDresser5,
                     CDresser2,

                     CDresser6,
                     CDresser5, CDresser7, CDresser5, CDresser5, CDresser5,
                     CDresser2,
                     
                     CDresser8,
                     CDresser9, CDresser9, CDresser10, CDresser9, CDresser9,
                     CDresser8,
                     CDresser5, CDresser5, CDresser5, CDresser5, CDresser5,
                     CDresser8,
                     
                     CDresser11,
                     CDresser12};

    return vecAnnotation;
}

Palette Dresser::createBrightPalette(Colors EColorLight, Colors EColorMid, Colors EColorDark) {
    Palette CPalette = Palette({Colors::DRESSER_BROWN_LIGHT,
                                EColorDark,
                                Colors::DRESSER_KNOB_LIGHT,
                                EColorLight,
                                Colors::DRESSER_KNOB_LIGHT,
                                
                                Colors::DRESSER_BROWN_DARK,
                                EColorMid,
                                Colors::DRESSER_KNOB_LIGHT},

                               {Colors::CLEAR,
                                EColorDark,
                                EColorDark,
                                EColorLight,
                                EColorLight,

                                Colors::CLEAR,
                                EColorMid,
                                EColorMid});
    return CPalette;
}

Palette Dresser::createDarkPalette() {
    Palette CPalette = Palette({Colors::DRESSER_V_LIGHT,
                                Colors::DRESSER_DARK,
                                Colors::DRESSER_KNOB_LIGHT,
                                Colors::DRESSER_LIGHT,
                                Colors::WHITE,
                                
                                Colors::DRESSER_V_DARK,
                                Colors::DRESSER_MID,
                                Colors::WHITE},

                               {Colors::CLEAR,
                                Colors::DRESSER_DARK,
                                Colors::DRESSER_DARK,
                                Colors::DRESSER_LIGHT,
                                Colors::DRESSER_LIGHT,

                                Colors::CLEAR,
                                Colors::DRESSER_MID,
                                Colors::DRESSER_MID});
    return CPalette;
}

Bounds Dresser::createBounds(int nX, int nY) {
    return Bounds(nX, nY, 13, 6);
}
