#pragma once
#include <iostream>

#include "Produit.h"

class ProduitA: public Produit
{

public:
	ProduitA();
	~ProduitA();
	ProduitA(const ProduitA& copie);
	string getDescription() const { return "Description dun produitA"; };

	Produit* clone() const override { return new ProduitA(*this); }
		

};

