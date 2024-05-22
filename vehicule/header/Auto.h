#ifndef AUTO_H
#define AUTO_H

#include <string>
#include "./Vehicule.h"
using namespace std;
class Auto : public Vehicule
{
    public:
        Auto();
        ~Auto();
        void conduire();
        string getColor();
        void setColor(string color);
        void displayAuto();
    private:
        string color;
};

#endif