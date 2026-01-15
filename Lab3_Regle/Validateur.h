// Validateur.h
#pragma once
#include "Produit.h"
#include "Regle.h"
#include <vector> // Inclure pour utiliser std::vector

class Validateur 
{
public:
    // Ajoute une règle à la liste
    void ajouterRegle(Regle* regle) 
    {
        reglesValidation.push_back(regle);
    }

    // Valide le produit en appliquant chaque règle
    bool valider(const Produit& produit);

private:
    // Utilisation d'un vecteur pour stocker les règles de validation
    vector<Regle*> reglesValidation;
};
