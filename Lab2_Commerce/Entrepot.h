#pragma once
#include<iostream>
#include"Composant.h"
#include<list>
using namespace std;
class Entrepot
{
private:
	list<Composant*>composants[5];
public:
	Entrepot();
	~Entrepot();
	Entrepot(const Entrepot& Entrepot);
	void ajouterComposants(list<Composant*> listeComposants, int id);
	void ajouterComposant(Composant* composant, int id);
	Composant* recupererComposant(int id);
	int getQuantiteComposants(int id);
};

