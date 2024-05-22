#include "header/Combat.h"
#include "header/Foot.h"
#include "header/Strategie.h"
#include <iostream>

using namespace std;

int main()
{
    int choix;
    cout << "Choisissez un jeu à jouer:" << endl;
    cout << "1. Combat" << endl;
    cout << "2. Foot" << endl;
    cout << "3. Stratégie" << endl;
    cin >> choix;

    if (choix == 1)
    {
        Combat combat;
        combat.start();
    }
    else if (choix == 2)
    {
        Foot foot;
        foot.start();
    }
    else if (choix == 3)
    {
        Strategie strategie;
        strategie.start();
    }
    else
    {
        cout << "Choix invalide" << endl;
    }

    return 0;
}
