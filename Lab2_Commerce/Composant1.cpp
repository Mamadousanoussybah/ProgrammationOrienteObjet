#include "Composant1.h"



Composant1::Composant1(int qualite, int prix):
Composant("COMPOSANT#1",10,qualite,prix)
{
	Compteur::ajouterConstructeur();
}

Composant1::Composant1(const Composant1& Copie) :
	Composant(Copie)
{
	Compteur::ajouterConstructeurCopie();
}
Composant1::~Composant1()
{
	Compteur::ajouterDestructeur();
}
