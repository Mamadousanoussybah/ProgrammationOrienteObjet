#pragma once
#include"produit.h"
#include<iostream>
using namespace std;
class ProduitE: public Produit
{
public:
	ProduitE();
	~ProduitE();
	ProduitE(const ProduitE& ProduitE);
	string getDescription()const;
	Produit* clone() const override { return new ProduitE(*this); }
};

