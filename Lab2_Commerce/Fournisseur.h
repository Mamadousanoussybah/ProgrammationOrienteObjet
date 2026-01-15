#pragma once
#include"Composant.h"
#include"Composant1.h"
#include"Composant2.h"
#include"Composant3.h"
#include"Composant4.h"
#include"Composant5.h"
#include "hasard.h"
#include"list"
#include <cstdlib> 
#include <ctime> 
class Fournisseur
{
public:
	Fournisseur();
	~Fournisseur();
	Fournisseur(const Fournisseur& f);
	list< Composant*> commanderComposant(int idComposant, int qualite);
	Composant1* produireComposant1();
	Composant2* produireComposant2();
	Composant3* produireComposant3();
	Composant4* produireComposant4();
	Composant5* produireComposant5();
private:
	int quantiteComposant[5];
};

