#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game();
    ~Game();
    virtual void start() = 0;
    virtual void pause() = 0;
    virtual void play() = 0;
    virtual void restart() = 0;
    virtual void quit() = 0;
protected:
    int score;
};

#endif
