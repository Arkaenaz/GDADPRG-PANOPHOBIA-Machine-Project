/****************************************************
Author: Joachim Gabriel R. Arguelles
Date Created: February 21, 2023
Description: Player class
****************************************************/

#ifndef GAME_ELEMENTS_PLAYER_H
#define GAME_ELEMENTS_PLAYER_H

namespace gamePlayer{

    using namespace std;

    class Player{
        private:
            string strName;
            float fSanity;
            bool isDead;

        public:
            Player();

            void pan(int nDirection);
            void interact();
            void changeEquipment();
            void viewJournal();

            void drainSanity(float PASSIVE_DRAIN);

            float getSanity();
    };
}

#endif