#pragma once
#include"Produit.h"

class ProduitC :public Produit
{
public:
	ProduitC();
	~ProduitC();
	ProduitC(const ProduitC& ProduitC);
	string getDescription()const;
	Produit* clone() const override { return new ProduitC(*this); }
};

