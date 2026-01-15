#include "Produit.h"


ostream& operator<<(ostream& os, const Produit& produit)
{
	os << "Produit (id: " << produit.id
		<< ", quantite: " << produit.quantite
		<< ", enStock: " << (produit.enStock ? "true" : "false")
		<< ", prix: " << produit.prix << ")";
	return os;
}
