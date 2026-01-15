#pragma once
#include<string> 
#include<iostream>
#include"Produit.h"


class ProduitD:public Produit
{
public:
	ProduitD();
	~ProduitD();
	ProduitD(const ProduitD& ProduitD);
	string getDescription()const;
	Produit* clone() const override { return new ProduitD(*this); }
};

