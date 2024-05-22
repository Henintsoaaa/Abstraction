#include "header\Strategie.h"
#include <iostream>

using namespace std;

Strategie::Strategie()
{
    time = 10;
}

Strategie::~Strategie()
{

}
void Strategie::start()
{
    cout << "You've started the game" << endl; 
}
void Strategie::pause()
{
    int mouvement;
    cout << "You've stopped the game" << endl;
    cout << "Would you like to continue the game?" << endl;
    cout << "1 to continue" << endl;
    cout << "2 to exit" << endl;
    cin >> mouvement;
    if(mouvement == 1)
    {
       Strategie::play();
    }
    else if(mouvement == 2)
    {
        Strategie::quit();
    } 
}
void Strategie::play()
{
    cout << "You've played the game" << endl;
}
void Strategie::restart()
{
    cout << "You've restared the game" << endl;
}
void Strategie::quit()
{
    cout << "You're going to exit the game" << endl;

}