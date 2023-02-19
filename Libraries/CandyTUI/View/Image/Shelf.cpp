/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                           DO NOT EDIT THIS SCRIPT.                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Shelf.h"

using namespace images;

Shelf::Shelf(int nX, int nY)
      : Image(createAnnotationVector(),
              createBrightPalette(),
              createDarkPalette(),
              createBounds(nX, nY)) {
}

std::vector<ImageAnnotation> Shelf::createAnnotationVector() {
    std::vector<ImageAnnotation> vecAnnotation;

    ImageAnnotation CShelf1 = ImageAnnotation("╔╦════╦════╦╗", 13, 0);
    ImageAnnotation CShelf2 = ImageAnnotation("║║", 2, 0);
    ImageAnnotation CShelf3 = ImageAnnotation("▄", 1, 1);
    ImageAnnotation CShelf4 = ImageAnnotation("▄", 1, 2);
    ImageAnnotation CShelf5 = ImageAnnotation("▄", 1, 3);
    ImageAnnotation CShelf6 = ImageAnnotation("▄", 1, 4);
    ImageAnnotation CShelf7 = ImageAnnotation("║", 1, 0);
    ImageAnnotation CShelf8 = ImageAnnotation("▄", 1, 5);
    ImageAnnotation CShelf9 = ImageAnnotation("▄", 1, 6);
    ImageAnnotation CShelf10 = ImageAnnotation("║║", 2, 7);
    ImageAnnotation CShelf11 = ImageAnnotation("║", 1, 7);
    
    ImageAnnotation CShelf12 = ImageAnnotation("█", 1, 1);
    ImageAnnotation CShelf13 = ImageAnnotation("█", 1, 2);
    ImageAnnotation CShelf14 = ImageAnnotation("█", 1, 3);
    ImageAnnotation CShelf15 = ImageAnnotation("█", 1, 4);
    ImageAnnotation CShelf16 = ImageAnnotation("█", 1, 5);
    ImageAnnotation CShelf17 = ImageAnnotation("█", 1, 6);

    ImageAnnotation CShelf18 = ImageAnnotation("▄", 1, 8);
    ImageAnnotation CShelf19 = ImageAnnotation("║╠════╩════╣║", 13, 7);
    ImageAnnotation CShelf20 = ImageAnnotation("╚╝         ╚╝", 13, 7);

    ImageAnnotation CSpace = ImageAnnotation(" ", 1, 8);

    vecAnnotation = {CShelf1,
                     
                     CShelf2, CShelf3, CShelf4, CShelf5, CShelf6, CShelf7,
                     CShelf8, CShelf9, CSpace, CSpace, CShelf2,
                     
                     CShelf10, CShelf12, CShelf13, CShelf14, CShelf15, CShelf11,
                     CShelf16, CShelf17, CShelf18, CShelf18, CShelf10,

                     CShelf19,
                     CShelf20};

    return vecAnnotation;
}

Palette Shelf::createBrightPalette() {
    Palette CPalette = Palette({Colors::SHELF_BROWN_LIGHT,
                                Colors::SHELF_BOOK_1,
                                Colors::SHELF_BOOK_2,
                                Colors::SHELF_BOOK_3,
                                Colors::SHELF_BOOK_4,
                                Colors::SHELF_BOOK_5,
                                Colors::SHELF_BOOK_6,
                                Colors::SHELF_BROWN_DARK,

                                Colors::SHELF_BOOK_1,
                                Colors::SHELF_BOOK_2,
                                Colors::SHELF_BOOK_3,
                                Colors::SHELF_BOOK_4,
                                Colors::SHELF_BOOK_5,
                                Colors::SHELF_BOOK_6,
                                Colors::SHELF_BOOK_7},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR});
    return CPalette;
}

Palette Shelf::createDarkPalette() {
    Palette CPalette = Palette({Colors::SHELF_V_LIGHT,
                                Colors::SHELF_MID,
                                Colors::SHELF_DARK,
                                Colors::SHELF_LIGHT,
                                Colors::SHELF_MID,
                                Colors::SHELF_DARK,
                                Colors::SHELF_LIGHT,
                                Colors::SHELF_V_DARK,

                                Colors::SHELF_MID,
                                Colors::SHELF_DARK,
                                Colors::SHELF_LIGHT,
                                Colors::SHELF_MID,
                                Colors::SHELF_DARK,
                                Colors::SHELF_LIGHT,

                                Colors::CLEAR},

                               {Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,

                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,
                                Colors::CLEAR,

                                Colors::CLEAR});
    return CPalette;
}

Bounds Shelf::createBounds(int nX, int nY) {
    return Bounds(nX, nY, 13, 5);
}
