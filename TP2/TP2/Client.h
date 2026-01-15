#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include "Animal.h"
using namespace std;

class Client {
    string nom;
    Animal* animal;

public:
    Client(const string& nom, Animal* animal)
        : nom(nom), animal(animal) {
    }

    string getNom() const { return nom; }
    string carnetMedical() const { return animal->carnetMedical(); }

    ~Client() { delete animal; }
};

#endif
