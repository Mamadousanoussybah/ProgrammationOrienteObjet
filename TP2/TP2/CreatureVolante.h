#ifndef CREATUREVOLANTE_H
#define CREATUREVOLANTE_H

#include "Animal.h"
using namespace std;

class CreatureVolante : public Animal {
protected:
    float envergure;

public:
    CreatureVolante(const string& nom, int id, float envergure)
        : Animal(nom, id), envergure(envergure) {
    }
};

#endif
