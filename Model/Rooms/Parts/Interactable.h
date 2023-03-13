/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Interactable class
****************************************************/

#ifndef GAME_INTERACTABLE_INTERACTABLE_H
#define GAME_INTERACTABLE_INTERACTABLE_H

#include "../../../Enum/EnumInteractablesType.h"
namespace gameInteractable{
    class Interactable{
        protected:
            int nIndex;
            int nWall;
            bool bToggled;
            InteractablesType EType;

        public:
            Interactable(int nWall, InteractablesType EType);
        public:
            int getIndex();
            bool getToggled();
            int getWall();
            
            InteractablesType getInteractablesType();
            virtual void toggle();
            void setToggled(bool bToggled);
    };
}

#endif