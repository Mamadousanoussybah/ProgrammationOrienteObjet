#include "Inventaire.h"

// Constructeur
Inventaire::Inventaire() {
    Compteur::ajouterConstructeur();
}

// Destructeur
Inventaire::~Inventaire() {
    for (int i = 0; i < 5; ++i) {
        for (Produit* produit : produits[i]) {
            delete produit; // Libération de la mémoire
        }
    }
    Compteur::ajouterDestructeur();
}

// Constructeur de copie
Inventaire::Inventaire(const Inventaire& inventaire) 
{
    for (int i = 0; i < 5; ++i) 
    {
        for (Produit* produit : inventaire.produits[i])
        {
            // Créez une copie du produit et ajoutez-le à la liste
            // Vous devez implémenter une méthode pour copier les produits
            // En supposant que Produit a une méthode clone()
            produits[i].push_back(produit->clone());
        }
    }
    Compteur::ajouterConstructeurCopie();
}

// Méthodes publiques pour ajouter des produits
void Inventaire::ajouterProduit(ProduitA* produit)
{
    ajouterProduit(produit, 0);
}

void Inventaire::ajouterProduit(ProduitB* produit)
{
    ajouterProduit(produit, 1);
}

void Inventaire::ajouterProduit(ProduitC* produit) 
{
    ajouterProduit(produit, 2);
}

void Inventaire::ajouterProduit(ProduitD* produit)
{
    ajouterProduit(produit, 3);
}

void Inventaire::ajouterProduit(ProduitE* produit)
{
    ajouterProduit(produit, 4);
}

// Méthode privée pour ajouter un produit
void Inventaire::ajouterProduit(Produit* produit, int idProduit) 
{
    produits[idProduit].push_back(produit);
}

// Récupérer un produit
Produit* Inventaire::recupererProduit(int idProduit)
{
    if (idProduit < 0 || idProduit >= 5 || produits[idProduit].empty())
    {
        return nullptr; // Gestion simple
    }

    Produit* produit = produits[idProduit].front(); // Récupérer le premier produit
    produits[idProduit].pop_front(); // Supprimer le produit de la liste
    return produit; // Retourner le produit
}

