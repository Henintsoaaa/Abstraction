#ifndef STRATEGIE_HPP
#define STRATEGIE_HPP
#include "game.h"

class Strategie : public Game
{
    public:
        Strategie();
        ~Strategie();
        void start();
        void pause();
        void play();
        void restart();
        void quit();
    private:
        int time;
};

#endif