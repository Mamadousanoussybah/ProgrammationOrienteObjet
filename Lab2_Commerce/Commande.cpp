#include "Commande.h"

Commande::Commande(int noCommande, int qteProduits[]):noCommande(noCommande)
{
	for (int i = 0; i <= 4; i++)
	{
		
		this->quantiteProduits[i] = validerQuantite(qteProduits[i]);
		
	}
    Compteur::ajouterConstructeur();
}

// Destructeur
Commande::~Commande() {
    // Pas de mémoire dynamique à libérer ici
    Compteur::ajouterDestructeur();
}

// Constructeur de copie
Commande::Commande(const Commande& copie) {
    noCommande = copie.noCommande;
    for (int i = 0; i < 5; i++)
    {
        quantiteProduits[i] = copie.quantiteProduits[i];
    }
    Compteur::ajouterConstructeurCopie();
}

// Méthode pour valider la quantité
int Commande::validerQuantite(int q) {
    if (q < 0) return 0;
    if (q > 10) return 10;
    return q; // Quantité valide
}

// Méthode pour obtenir la quantité d'un produit
int Commande::getQuantiteProduit(int idProduit) {
    if (idProduit < 0 || idProduit >= 5) {
        return 0; // ID incorrect
    }
    return quantiteProduits[idProduit];
}

// Méthode pour obtenir le numéro de commande
int Commande::getNoCommande() {
    return noCommande;
}

// Surcharge de l'opérateur <<
ostream& operator<< (ostream& out, const Commande& commande) {
    out << "No de Commande: " << commande.noCommande << endl;
    for (int i = 0; i < 5; i++) {

        out << "-Produit demande ""{" << i <<"}" "-> " << commande.quantiteProduits[i] << " "<<endl;
    }
    return out;
}