#include "header/Combat.h"
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
    int choix;
    cout << "Vous commencez le jeu" << endl;
    
    while (vie > 0)
    {
        cout << "Veuillez choisir votre action." << endl;
        cout << "1 pour attaquer" << endl;
        cout << "2 pour défendre" << endl;
        cout << "3 pour arrêter" << endl;
        cout << "4 pour quitter" << endl;
        cin >> choix;
        if (choix == 1)
        {
            cout << "Vous attaquez" << endl;
            vie--; // Diminuer la vie pour démonstration
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
    }
    if (vie <= 0)
    {
        cout << "Jeu terminé! Vous n'avez plus de vie." << endl;
    }
}

void Combat::pause()
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

void Combat::restart()
{
    vie = 3;
    start();
}

void Combat::play()
{
    cout << "Vous continuez le jeu" << endl;
    start();
}

void Combat::quit()
{
    cout << "Vous allez quitter le jeu" << endl;
    vie = 0;
}
