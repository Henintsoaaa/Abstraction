#include <string>
#include <iostream>
#include "header/Moto.h"
#include "header/Vehicule.h"

using namespace std;

Moto::Moto()
{
    color = "";
}
Moto::~Moto()
{

}
void Moto::conduire()
{
    cout << "\nEntrain de conduire une moto avec un guidant." << endl;
}
string Moto::getColor()
{
    return color;
}
void Moto::setColor(string color)
{
    this-> color = color;
}
void Moto::displayMoto()
{
    Vehicule::displayVehicule();
    cout << "Coleur: " << color << endl; 
}