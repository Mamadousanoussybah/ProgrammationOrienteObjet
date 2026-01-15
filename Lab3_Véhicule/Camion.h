#ifndef CAMION_H
#define CAMION_H

#include "Vehicule.h"
#include <string>

using namespace std;

class Camion : public Vehicule
{
public:
    inline virtual string type() = 0;
    inline virtual string carburant() = 0;
};

class CamionFord : public Camion
{
public:
    inline string type() override
    {
        return "Camion Ford F150";
    }

    inline string carburant() override
    {
        return "Diesel";
    }
};

class CamionToyota : public Camion
{
public:
    inline string type() override
    {
        return "Camion Toyota Hilux";
    }

    inline string carburant() override
    {
        return "Diesel";
    }
};

#endif
