#ifndef CLIENTBUILDER_H
#define CLIENTBUILDER_H

#include "Client.h"
#include "Dragon.h"
#include "Licorne.h"
#include "BuilderException.h"

using namespace std;

class ClientBuilder {
    string nomClient;
    string nomAnimal;
    string type;
    string race;
    int id;

    void reinitialiser() {
        nomClient = nomAnimal = type = race = "";
        id = 0;
    }

    Animal* definirAnimal() {
        if (nomAnimal.empty())
            throw BuilderException("Nom d'animal invalide!");
        if (type == "chien" && race == "dragon")
            return new Dragon(nomAnimal, id++, 3.5f);
        if (type == "cheval" && race == "licorne")
            return new Licorne(nomAnimal, id++, 90);
        throw BuilderException("Type d'animal invalide!");
    }

public:
    ClientBuilder() { reinitialiser(); }

    ClientBuilder* nouveau() { reinitialiser(); return this; }
    ClientBuilder* setNomClient(const std::string& nom) { nomClient = nom; return this; }
    ClientBuilder* setNomAnimal(const std::string& nom) { nomAnimal = nom; return this; }
    ClientBuilder* setType(const std::string& t) { type = t; return this; }
    ClientBuilder* setRace(const std::string& r) { race = r; return this; }

    Client* build() {
        if (nomClient.empty())
            throw BuilderException("Nom de client invalide!");
        Animal* a = definirAnimal();
        return new Client(nomClient, a);
    }
};

#endif
