#include "Foot.h"
#include <iostream>

using namespace std;

Foot::Foot()
{
    score = 0;
    time = 90;
}

Foot::~Foot()
{

}

void Foot::start()
{
    cout << "You are starting the game" << endl;
    while (time > 0)
    {
        int choice;
        cout << "Please choose your movement" << endl;
        cout << "1 to mark point" << endl;
        cout << "2 to defend your goal" << endl;
        cout << "3 to stop" << endl;
        cout << "4 to exit" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "you have marked a point" << endl;
            score++;
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
        
        time--;
        
        if (time == 45)
        {
            pause();
        }
        if (time == 30)
        {
            play();
        }
    }
    if (score > 0 && time == 0)
    {
        cout << "You win the game" << endl;
    }
}

void Foot::pause()
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

void Foot::restart()
{
    score = 0;
    time = 90;
    start();
}

void Foot::play()
{
    cout << "You've played the game" << endl;
    start();
}

void Foot::quit()
{
    cout << "You're going to exit the game" << endl;
    time = 0;
}
