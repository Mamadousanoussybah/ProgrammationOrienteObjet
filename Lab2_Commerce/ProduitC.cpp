#include "ProduitC.h"

ProduitC::ProduitC() 
:Produit("Produit C") {
	Compteur::ajouterConstructeur();
}
ProduitC::~ProduitC() {
	Compteur::ajouterDestructeur();
}

ProduitC::ProduitC(const ProduitC& copie) :
	Produit(copie)
{
	Compteur::ajouterConstructeurCopie();
}

string ProduitC::getDescription()const
{
	return "Description d'un produit C";
}
