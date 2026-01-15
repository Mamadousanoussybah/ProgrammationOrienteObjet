#pragma once
#include<iostream>
#include<string>
#include "Produit.h"

using namespace std;

class Regle
{
public:
	virtual ~Regle() {}
	virtual bool validerProduit(const Produit& produit) = 0;
	virtual string getId() = 0;

};
