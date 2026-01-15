#include "ProduitD.h"
ProduitD::ProduitD()
	:Produit("Produit D") {
	Compteur::ajouterConstructeur();
}
ProduitD::~ProduitD() {
	Compteur::ajouterDestructeur();
}

ProduitD::ProduitD(const ProduitD& copie) :
	Produit(copie)
{
	Compteur::ajouterConstructeurCopie();
}

string ProduitD::getDescription()const
{
	return "Description d'un produit D";
}
