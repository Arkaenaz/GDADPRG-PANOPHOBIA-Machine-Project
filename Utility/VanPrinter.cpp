#include "VanPrinter.h"

using namespace utilities;

VanPrinter::VanPrinter(){
    this->nWallIndex = 0;
}

void VanPrinter::printWall(){
    this->nWallIndex;

    switch (this->nWallIndex)
    {
    case 0:
        std::cout<<"Door"<<std::endl;
        break;
    case 1:
        std::cout<<"Sanity"<<std::endl;
        break;
    
    default:
        break;
    }
}