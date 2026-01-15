#include "ProduitE.h"
ProduitE::ProduitE()
	:Produit("Produit E") {
	Compteur::ajouterConstructeur();
}
ProduitE::~ProduitE() {
	Compteur::ajouterDestructeur();
}

ProduitE::ProduitE(const ProduitE& copie) :
	Produit(copie)
{
	Compteur::ajouterConstructeurCopie();
}

string ProduitE::getDescription()const
{
	return "Description d'un produit E";
}

