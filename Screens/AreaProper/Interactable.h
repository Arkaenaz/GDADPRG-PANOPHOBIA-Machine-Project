/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 27, 2023
Description: Interactable class
****************************************************/

#ifndef GAME_ELEMENTS_INTERACTABLE_H
#define GAME_ELEMENTS_INTERACTABLE_H

namespace gameInteractable{
    class Interactable{
        protected:
            int nIndex;
            int nToggleType;
            bool bToggled;

        public:
            Interactable();
            Interactable(int nToggleType);
        
        public:
            virtual int interact();

            int getIndex();
            bool getToggled();
            bool setToggled();
    };
}

#endif