#include <string>
#include <iostream>
#include "header/Auto.h"
#include "header/Vehicule.h"

using namespace std;

Auto::Auto()
{
    color = "";
}
Auto::~Auto()
{

}
void Auto::conduire()
{
    cout << "\nEntrain de conduire une auto avec un volant." << endl;
}
string Auto::getColor()
{
    return color;
}
void Auto::setColor(string color)
{
    this-> color = color;
}
void Auto::displayAuto()
{
    Vehicule::displayVehicule();
    cout << "Coleur: " << color << endl; 
}