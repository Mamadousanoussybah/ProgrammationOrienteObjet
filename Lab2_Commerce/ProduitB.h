#pragma once
#include "Produit.h"

#include <string>
using namespace std;
class ProduitB:public Produit
{
public:
	ProduitB();
	~ProduitB();
	ProduitB(const ProduitB& ProduitB);
	string getDescription()const;
	Produit* clone() const override { return new ProduitB(*this); }
};


