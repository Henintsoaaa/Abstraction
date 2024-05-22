#ifndef MOTO_H
#define MOTO_H

#include <string>
#include "./Vehicule.h"
using namespace std;
class Moto : public Vehicule
{
    public:
        Moto();
        ~Moto();
        void conduire();
        string getColor();
        void setColor(string color);
        void displayMoto();
    private:
        string color;
};

#endif