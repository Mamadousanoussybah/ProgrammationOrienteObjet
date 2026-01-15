#include <iostream>
#include <vector>
#include "ClientBuilder.h"

using namespace std;



void afficherIntroduction()
{
    cout << "===================================================" << endl;
    cout << "||  Date de creation:         20/04/2025          ||" << endl;
    cout << "||  Date de Modification:     24/04/2025          ||" << endl;
    cout << "||  Travail realiser par:                         ||" << endl;
    cout << "||  Keita Saran Mady        -> KEI      ||" << endl;
    cout << "||  Bah Kadiatou Lamarana   -> BAH       ||" << endl;
    cout << "====================================================" << endl;
    cout << endl;
}


int main() {

    afficherIntroduction();
       

    ClientBuilder builder;
    vector<Client*> mesClients;

    try {
        mesClients.push_back(builder.nouveau()
            ->setNomClient("Eric")
            ->setNomAnimal("Smaug")
            ->setType("oiseau")
            ->setRace("licorne")
            ->build());
    }
    catch (const BuilderException& e) {
        cout << e.what() << std::endl;
    }

    try {
        mesClients.push_back(builder.nouveau()
            ->setNomClient("")
            ->setNomAnimal("Smaug")
            ->setType("chien")
            ->setRace("dragon")
            ->build());
    }
    catch (const BuilderException& e) {
        cout << e.what() << std::endl;
    }

    try {
        mesClients.push_back(builder.nouveau()
            ->setNomClient("")
            ->setNomAnimal("LicorneRose")
            ->setType("cheval")
            ->setRace("licorne")
            ->build());
    }
    catch (const BuilderException& e) {
        cout << e.what() << std::endl;
    }

    cout << "-----------------------------" << std::endl;

    try {
        mesClients.push_back(builder.nouveau()
            ->setNomClient("Eric")
            ->setNomAnimal("Eric_CONAN")
            ->setType("chien")
            ->setRace("dragon")
            ->build());
    }
    catch (const BuilderException& e) {
        cout << e.what() << std::endl;
    }

    try {
        mesClients.push_back(builder.nouveau()
            ->setNomClient("Eric")
            ->setNomAnimal("Eric_ANDROMEDE")
            ->setType("cheval")
            ->setRace("licorne")
            ->build());
    }
    catch (const BuilderException& e) {
        cout << e.what() << std::endl;
    }

    for (Client* c : mesClients) {
        cout << "Nom du client : " << c->getNom() << std::endl;
        cout << "Carnet : " << c->carnetMedical() << std::endl;
    }

    for (Client* c : mesClients)
        delete c;

    return 0;
}
