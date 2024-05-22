#include "header/Foot.h"
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
    cout << "Vous commencez le jeu" << endl;
    while (time > 0)
    {
        int choix;
        cout << "Veuillez choisir votre action" << endl;
        cout << "1 pour marquer un point" << endl;
        cout << "2 pour défendre votre but" << endl;
        cout << "3 pour arrêter" << endl;
        cout << "4 pour quitter" << endl;
        cin >> choix;
        if (choix == 1)
        {
            cout << "Vous avez marqué un point" << endl;
            score++;
        }
        else if (choix == 2)
        {
            cout << "Vous vous défendez" << endl;
        }
        else if (choix == 3)
        {
            pause();
        }
        else if (choix == 4)
        {
            quit();
            break;
        }
        
        time--;
        
        if (time == 45)
        {
            pause();
        }
        if (time == 0)
        {
            if (score > 0)
            {
                cout << "Vous avez gagné le jeu" << endl;
            }
            else
            {
                cout << "Vous avez perdu le jeu" << endl;
            }
        }
    }
}

void Foot::pause()
{
    int mouvement;
    cout << "Vous avez arrêté le jeu" << endl;
    cout << "Voulez-vous continuer le jeu?" << endl;
    cout << "1 pour continuer" << endl;
    cout << "2 pour quitter" << endl;
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
    cout << "Vous continuez le jeu" << endl;
    start();
}

void Foot::quit()
{
    cout << "Vous allez quitter le jeu" << endl;
    time = 0;
}
