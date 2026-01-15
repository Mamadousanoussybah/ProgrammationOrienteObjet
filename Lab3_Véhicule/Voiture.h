#ifndef VOITURE_H
#define VOITURE_H

#include "Vehicule.h"
#include <string>

using namespace std;

class Voiture : public Vehicule
{
public:
    inline virtual string type() = 0;
    inline virtual string carburant() = 0;
};

class VoitureFord : public Voiture
{
public:
    inline string type() override
    {
        return "Voiture Ford Focus";
    }

    inline string carburant() override
    {
        return "Essence";
    }
};

class VoitureToyota : public Voiture
{
public:
    inline string type() override
    {
        return "Voiture Toyota Corolla";
    }

    inline string carburant() override
    {
        return "Essence";
    }
};

#endif
