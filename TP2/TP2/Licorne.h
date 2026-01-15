#ifndef LICORNE_H
#define LICORNE_H

#include "CreatureMagique.h"

using namespace std;

class Licorne : public CreatureMagique {
public:
    Licorne(const string& nom, int id, int magie)
        : CreatureMagique(nom, id, magie) {
    }

    string carnetMedical() const override {
        return "CHAT {ANDROMEDE/" + nom + "/Comptoir:OUI}";
    }
};

#endif
