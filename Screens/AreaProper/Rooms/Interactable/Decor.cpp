#include "Decor.h"

using namespace gameInteractable;

Decor::Decor(int nIndex):Interactable(){
    this->nIndex = nIndex;
}

int Decor::getIndex(){
    return this->nIndex;
}