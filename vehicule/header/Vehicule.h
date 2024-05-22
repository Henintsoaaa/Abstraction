#ifndef VEHICULE_H
#define VEHICULE_H

#include <string>
using namespace std;
class Vehicule
{
    public:
        Vehicule();
        ~Vehicule();
        virtual void conduire()=0;
        void setCollection(int collection);
        void setMarque(string marque);
        void displayVehicule();
    protected:
        string marque;
        int collection;
};

#endif