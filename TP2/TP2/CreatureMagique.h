#ifndef CREATUREMAGIQUE_H
#define CREATUREMAGIQUE_H

#include "Animal.h"
using namespace std;

class CreatureMagique : public Animal {
protected:
    int niveauMagie;

public:
    CreatureMagique(const string& nom, int id, int magie)
        : Animal(nom, id), niveauMagie(magie) {
    }
};

#endif
