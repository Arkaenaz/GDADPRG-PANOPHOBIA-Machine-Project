/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Sink.h"

using namespace images;

Sink::Sink(int nX, int nY)
     : Image(createAnnotationVector(),
                createBrightPalette(),
                createDarkPalette(),
                createBounds(nX, nY)) {
}

std::vector<ImageAnnotation> Sink::createAnnotationVector() {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CSink1 = ImageAnnotation("▄", 1, 0);
    ImageAnnotation CSink2 = ImageAnnotation("║", 1, 1);
    ImageAnnotation CSink3 = ImageAnnotation("╔", 1, 2);
    ImageAnnotation CSink4 = ImageAnnotation("╗", 1, 2);

    ImageAnnotation CSink5 = ImageAnnotation("​​▀", 1, 3);

    ImageAnnotation CSink6 = ImageAnnotation("​​╚══╦═╦══╝", 9, 4);

    ImageAnnotation CSink7 = ImageAnnotation("║ ║", 3, 1);
    ImageAnnotation CSink8 = ImageAnnotation("╔╩═╩╗", 5, 4);

    ImageAnnotation CSpace = ImageAnnotation(" ", 1, 5);

    vecAnnotation = {CSpace, CSpace, CSpace, CSpace,
                     CSink1,
                     CSpace, CSpace, CSpace, CSpace,
                     
                     CSpace, CSpace,
                     CSink1,
                     CSpace,
                     CSink2,
                     CSpace,
                     CSink1,
                     CSpace, CSpace,

                     CSink3,
                     CSink5, CSink5, CSink5, CSink5, CSink5, CSink5, CSink5,
                     CSink4,

                     CSink6,
                     
                     CSpace, CSpace, CSpace,
                     CSink7,
                     CSpace, CSpace, CSpace,
                     
                     CSpace, CSpace, CSpace,
                     CSink7,
                     CSpace, CSpace, CSpace,
                     
                     CSpace, CSpace, CSpace,
                     CSink7,
                     CSpace, CSpace, CSpace,

                     CSpace, CSpace,
                     CSink8,
                     CSpace, CSpace};

    return vecAnnotation;
}

Palette Sink::createBrightPalette() {
    Palette CPalette = Palette({Colors::SINK_MID,
                                Colors::SINK_LIGHT,
                                Colors::SINK_V_LIGHT,
                                Colors::WHITE,
                                Colors::SINK_V_DARK,
                                Colors::WHITE},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::SINK_V_LIGHT,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette Sink::createDarkPalette() {
    Palette CPalette = Palette({Colors::SINK_MID,
                                Colors::SINK_LIGHT,
                                Colors::SINK_V_LIGHT,
                                Colors::WHITE,
                                Colors::SINK_V_DARK,
                                Colors::WHITE},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::SINK_V_LIGHT,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Bounds Sink::createBounds(int nX, int nY) {
    return Bounds(nX, nY, 9, 8);
}
