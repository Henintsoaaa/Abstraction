#ifndef COMBAT_HPP
#define COMBAT_HPP
#include "game.h"

class Combat : public Game
{
    public:
        Combat();
        ~Combat();
        void start();
        void pause();
        void play();
        void restart();
        void quit();
    private:
        int vie;
};

#endif