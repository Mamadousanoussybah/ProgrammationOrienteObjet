#include "ProduitA.h"

ProduitA::ProduitA()
	:Produit("Produit A") {
	Compteur::ajouterConstructeur();
}
ProduitA::~ProduitA() {
	Compteur::ajouterDestructeur();
}

ProduitA::ProduitA(const ProduitA& copie):
	Produit(copie)
{
	Compteur::ajouterConstructeurCopie();
}

