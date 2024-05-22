#ifndef FOOT_HPP
#define FOOT_HPP
#include "game.h"

class Foot : public Game
{
    public:
        Foot();
        ~Foot();
        void start();
        void pause();
        void play();
        void restart();
        void quit();
    private:
        int time;
        int score;
};

#endif