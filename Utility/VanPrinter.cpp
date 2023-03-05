#include "VanPrinter.h"

using namespace utilities;

VanPrinter::VanPrinter(){
    this->nWallIndex = 0;
}

void VanPrinter::displaySanity(float fSanity){
    std::cout << "[";
    for(int i = 1; i <= 10; i++){
        if(i*10 <= fSanity){
            std::cout << "■";
        }
        else{
            std::cout << " ";
        }
        
    }
    std::cout << "]";
}

void VanPrinter::printWall(float fSanity){
    this->nWallIndex;

    switch (this->nWallIndex)
    {
    case 0:
        std::cout<< std::endl<< "Wall 1" << std::endl;
        std::cout<< std::endl<< "DOOR" << std::endl;
        break;
    case 1:
        std::cout<< std::endl<< "Wall 2" << std::endl;
        std::cout<< std::endl<< "SANITY: ";
        displaySanity(fSanity); std::cout << std::endl;
        break;
    case 2:
        std::cout<< std::endl<< "Wall 3" << std::endl;
        break;
    case 3:
        std::cout<< std::endl<< "Wall 4" << std::endl;
        break;
    }
}

void VanPrinter::turnRight(){
    if(this->nWallIndex != 3){
       this->nWallIndex++; 
    }
    else{
        this->nWallIndex = 0;
    }
}

void VanPrinter::turnLeft(){
    if(this->nWallIndex != 0){
       this->nWallIndex--; 
    }
    else{
        this->nWallIndex = 3;
    }
}