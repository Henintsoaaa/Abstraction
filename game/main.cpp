#include "header\game.h"
#include "header\Strategie.h"
#include <iostream>

using namespace std;

int main()
{
    Strategie monopoly = Strategie();
    monopoly.start();
    monopoly.pause();

    return 0;
}