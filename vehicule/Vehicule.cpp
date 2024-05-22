#include <string>
#include <iostream>
#include "header/Vehicule.h"
using namespace std;

Vehicule::Vehicule()
{
    marque = "";
    collection = 0;
}
Vehicule::~Vehicule()
{
    
}
void Vehicule::displayVehicule()
{
    cout << "Marque: " << marque << endl;
    cout <<"Collection: " << collection << endl;
}
void Vehicule::setCollection(int collection)
{
    this->collection = collection;
}
void Vehicule::setMarque(string marque)
{
    this->marque = marque;
}

