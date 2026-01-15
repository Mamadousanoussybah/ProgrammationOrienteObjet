#include "ProduitB.h"
#include <iostream>

ProduitB::ProduitB():
Produit("Produit B")
{
	Compteur::ajouterConstructeur();
}
ProduitB::~ProduitB() {
	Compteur::ajouterDestructeur();
}

ProduitB::ProduitB(const ProduitB& copie) :
	Produit(copie)
{
	Compteur::ajouterConstructeurCopie();
}

string ProduitB::getDescription()const
{
	return "Description d'un produit B";
}
