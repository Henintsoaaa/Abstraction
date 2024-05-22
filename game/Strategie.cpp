#include "Strategie.h"
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
    while (time > 0)
    {
        int choice;
        cout << "Please choose your movement" << endl;
        cout << "1 to make a move" << endl;
        cout << "2 to strategize" << endl;
        cout << "3 to stop" << endl;
        cout << "4 to exit" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "you make a move" << endl;
        }
        else if (choice == 2)
        {
            cout << "you strategize" << endl;
        }
        else if (choice == 3)
        {
            pause();
        }
        else if (choice == 4)
        {
            quit();
        }

        time--;
    }
    if (time == 0)
    {
        cout << "Game over!" << endl;
    }
}

void Strategie::pause()
{
    int mouvement;
    cout << "You've stopped the game" << endl;
    cout << "Would you like to continue the game?" << endl;
    cout << "1 to continue" << endl;
    cout << "2 to exit" << endl;
    cin >> mouvement;
    if (mouvement == 1)
    {
        play();
    }
    else if (mouvement == 2)
    {
        quit();
    }
}

void Strategie::restart()
{
    time = 10;
    start();
}

void Strategie::play()
{
    cout << "You've played the game" << endl;
    start();
}

void Strategie::quit()
{
    cout << "You're going to exit the game" << endl;
    time = 0;
}
