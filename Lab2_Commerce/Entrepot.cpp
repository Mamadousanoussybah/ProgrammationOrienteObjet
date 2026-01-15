#include "Entrepot.h"
#include"Composant.h"

// Constructor
Entrepot::Entrepot() { Compteur::ajouterConstructeur(); }

// Destructor
Entrepot::~Entrepot() {
    for (int i = 0; i < 5; ++i) {
        for (Composant* comp : composants[i]) {
            delete comp; // Delete each composant
        }
        composants[i].clear(); // Clear the list
    }
    Compteur::ajouterDestructeur();
}

// Copy constructor
Entrepot::Entrepot(const Entrepot& autre) {
    for (int i = 0; i < 5; ++i) {
        for (Composant* comp : autre.composants[i]) {
            composants[i].push_back(comp->clone()); // Assuming Composant has a clone method
        }
    }
    Compteur::ajouterConstructeurCopie();
}

// Method to add a single composant
void Entrepot::ajouterComposant(Composant* composant, int id) {
    if (id >= 0 && id < 5) {
        composants[id].push_back(composant);
    }
}

// Method to add multiple composants
void Entrepot::ajouterComposants(std::list<Composant*> listeComposant, int id) {
    for (Composant* comp : listeComposant) {
        ajouterComposant(comp, id);
    }
}

// Method to retrieve a composant
Composant* Entrepot::recupererComposant(int id) {
    if (id < 0 || id >= 5 || composants[id].empty()) {
        return nullptr;
    }
    Composant* comp = composants[id].front(); // Get the first composant
    composants[id].pop_front(); // Remove it from the list
    return comp;
}

// Method to get the quantity of composants
int Entrepot::getQuantiteComposants(int id) 
{
    if (id >= 0 && id < 5) {
        return composants[id].size();
    }
    return 0;
}

