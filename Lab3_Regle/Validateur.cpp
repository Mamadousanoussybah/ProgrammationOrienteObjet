// Validateur.cpp
#include "Validateur.h"
#include <iostream>

using namespace std;

bool Validateur::valider(const Produit& produit)
{
    // Affichage unique du produit sous le format {ID/quantité$/prix}
    cout << "                                  " << endl;

    cout << "Validation du produit " << produit.getId() << " {"
        << produit.getId() << "/" << produit.getQuantite() << "$/"
        << produit.getPrix() << "}" << endl;
    cout << "                                  " << endl;
    bool produitValide = true;  // Flag pour savoir si le produit est valide

    // Appliquer chaque règle et afficher 1 ou 0 pour chaque règle

    for (auto regle : reglesValidation) 
    {
        bool valide = regle->validerProduit(produit);
        cout << "Regle " << regle->getId() << " : " << (valide ? "1" : "0") << endl;

        if (!valide) 
        {
            produitValide = false;  // Si une règle échoue, le produit est invalide
        }
    }

    // Afficher si le produit est valide ou invalide une seule fois
    cout << "Produit valide ? " <<(produitValide ? "1" : "0") << endl;

    return produitValide;
}
