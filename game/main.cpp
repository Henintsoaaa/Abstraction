#include "header/Combat.h"
#include "header/Foot.h"
#include "header/Strategie.h"
#include <iostream>

using namespace std;

int main()
{
    int choice;
    cout << "Choose a game to play:" << endl;
    cout << "1. Combat" << endl;
    cout << "2. Foot" << endl;
    cout << "3. Strategie" << endl;
    cin >> choice;

    if (choice == 1)
    {
        Combat combat;
        combat.start();
    }
    else if (choice == 2)
    {
        Foot foot;
        foot.start();
    }
    else if (choice == 3)
    {
        Strategie strategie;
        strategie.start();
    }
    else
    {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
