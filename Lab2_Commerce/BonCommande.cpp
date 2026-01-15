#include "BonCommande.h"

// Destructeur
BonCommande::~BonCommande() {
    delete commande;
    Compteur::ajouterDestructeur();
}

// Constructeur de copie
BonCommande::BonCommande(const BonCommande& autre)
    : idBonCommande(autre.idBonCommande), commande(new Commande(*autre.commande)) {
   // Copier les quantités de produits
    for (int i = 0; i < 5; i++)
    {
        quantiteProduit[i] = autre.quantiteProduit[i];
    }
    Compteur::ajouterConstructeurCopie();
}

// Constructeur 
BonCommande::BonCommande( int idBonCommande, Commande* commande)
    : idBonCommande(idBonCommande), commande(new Commande(*commande)) {
    for (int i = 0; i < 5; i++) {
        quantiteProduit[i] = 0; // Initialiser les quantités à 0
    }
    Compteur::ajouterConstructeur();
}

// Méthode pour ajouter des produits
void BonCommande::ajouterProduits(int quantite, int id) {
    if (id >= 0 && id < 5) { // Validation basique pour éviter les accès invalides
        quantiteProduit[id] += quantite; // Ajouter la quantité
    }
}

// Méthode pour obtenir la quantité de produits
int BonCommande::getQuantiteProduits(int id) {
    if (id >= 0 && id < 5) {
        return quantiteProduit[id]; // Retourner la quantité
    }
    return 0; // Retourner 0 si l'ID est invalide
}

// Méthode pour obtenir la commande
Commande* BonCommande::getCommande() const {
    return commande; // Retourner le pointeur de commande
}

// Méthode pour obtenir l'ID du bon de commande
int BonCommande::getIdBonCommande() const {
    return idBonCommande; // Retourner l'ID
}

ostream& operator<<(ostream& os, const BonCommande& bonCommande)
{
    os << "BON DE COMMANDE" << endl;
    os << " Bon de Commande: " << bonCommande.idBonCommande << endl;
    // Ajout de l'affichage du numéro de commande
    os << " No de Commande:" << bonCommande.commande->getNoCommande()<< endl;
    for (int i = 0; i < 5; ++i) {
        os << "-Produit {" << i << "}-->{commande:" << i+1<<"/recu:"<<bonCommande.quantiteProduit[i] <<"}"<<"\n";
    }
    return os;
}
