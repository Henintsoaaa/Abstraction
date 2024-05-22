#ifndef FOOT_HPP
#define FOOT_HPP

#include "game.h"

class Foot : public Game
{
public:
    Foot();
    ~Foot();
    void start() override;
    void pause() override;
    void play() override;
    void restart() override;
    void quit() override;
private:
    int time;
    int score;
};

#endif
