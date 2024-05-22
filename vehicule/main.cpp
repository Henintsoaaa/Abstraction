#include <iostream>
#include <string>
#include "header/Vehicule.h"
#include "header/Auto.h"
#include "header/Moto.h"

using namespace std;

int main()
{   
    Auto golf = Auto();
    Moto cross = Moto();
    
    golf.conduire();
    golf.setColor("Rouge");
    golf.setMarque("Volkswagen");
    golf.setCollection(1996);
    golf.displayAuto();

    cross.conduire();
    cross.setColor("Orange");
    cross.setMarque("Kia");
    cross.setCollection(2023);
    cross.displayMoto();

    return 0;
}