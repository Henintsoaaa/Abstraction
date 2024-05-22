#include "header/Strategie.h"
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
    cout << "Vous avez commencé le jeu" << endl;
    while (time > 0)
    {
        int choix;
        cout << "Veuillez choisir votre action" << endl;
        cout << "1 pour faire un mouvement" << endl;
        cout << "2 pour élaborer une stratégie" << endl;
        cout << "3 pour arrêter" << endl;
        cout << "4 pour quitter" << endl;
        cin >> choix;
        if (choix == 1)
        {
            cout << "Vous faites un mouvement" << endl;
        }
        else if (choix == 2)
        {
            cout << "Vous élaborez une stratégie" << endl;
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
    }
    if (time == 0)
    {
        cout << "Jeu terminé!" << endl;
    }
}

void Strategie::pause()
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

void Strategie::restart()
{
    time = 10;
    start();
}

void Strategie::play()
{
    cout << "Vous continuez le jeu" << endl;
    start();
}

void Strategie::quit()
{
    cout << "Vous allez quitter le jeu" << endl;
    time = 0;
}
