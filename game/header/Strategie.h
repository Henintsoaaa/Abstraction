#ifndef STRATEGIE_HPP
#define STRATEGIE_HPP

#include "game.h"

class Strategie : public Game
{
public:
    Strategie();
    ~Strategie();
    void start() override;
    void pause() override;
    void play() override;
    void restart() override;
    void quit() override;
private:
    int time;
};

#endif
