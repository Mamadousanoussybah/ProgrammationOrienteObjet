#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
protected:
    string nom;
    int id;

public:
    Animal(const string& nom, int id) : nom(nom), id(id) {}
    virtual string carnetMedical() const = 0;
    virtual ~Animal() = default;
};

#endif
