#ifndef COMBAT_HPP
#define COMBAT_HPP

#include "game.h"

class Combat : public Game
{
public:
    Combat();
    ~Combat();
    void start() override;
    void pause() override;
    void play() override;
    void restart() override;
    void quit() override;
private:
    int vie;
};

#endif
