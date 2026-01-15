#ifndef DRAGON_H
#define DRAGON_H

#include "CreatureVolante.h"

using namespace std;

class Dragon : public CreatureVolante {
public:
    Dragon(const string& nom, int id, float envergure)
        : CreatureVolante(nom, id, envergure) {
    }

    string carnetMedical() const override {
        return "CHIEN {CONAN/" + nom + "/Dehors:OUI}";
    }
};

#endif
