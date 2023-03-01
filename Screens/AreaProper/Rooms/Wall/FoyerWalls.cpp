#include "FoyerWalls.h"

using namespace gameArea;
using namespace gameInteractable;

FoyerWall1::FoyerWall1():Wall(){
    this->vecDecor.push_back(Door(1,0));
    this->createDecor(6);
}

FoyerWall2::FoyerWall2():Wall(){
    this->createDecor(3);
}

FoyerWall3::FoyerWall3():Wall(){
    this->vecDecor.push_back(Door(5,0));
    this->vecDecor.push_back(Lightswitch());
}

FoyerWall4::FoyerWall4():Wall(){
    this->vecDecor.push_back(Door(2,3));
}