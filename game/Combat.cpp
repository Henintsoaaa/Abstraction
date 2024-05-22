#include "Combat.h"
#include <iostream>

using namespace std;

Combat::Combat()
{
    vie = 3;
}

Combat::~Combat()
{

}

void Combat::start()
{
    int choice;
    cout << "You are starting the game" << endl;
    
    while (vie > 0)
    {
        cout << "Please choose your movement." << endl;
        cout << "1 to attack" << endl;
        cout << "2 to defend" << endl;
        cout << "3 to stop" << endl;
        cout << "4 to exit" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "you attack" << endl;
        }
        else if (choice == 2)
        {
            cout << "you defend yourself" << endl;
        }
        else if (choice == 3)
        {
            pause();
        }
        else if (choice == 4)
        {
            quit();
        }
    }
}

void Combat::pause()
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

void Combat::restart()
{
    vie = 3;
    start();
}

void Combat::play()
{
    cout << "You've played the game" << endl;
    start();
}

void Combat::quit()
{
    cout << "You're going to exit the game" << endl;
    vie = 0;
}
