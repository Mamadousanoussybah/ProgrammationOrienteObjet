#include "Composant3.h"



Composant3::Composant3(int prix):
Composant("COMPOSANT#3",12,100, prix)
{
	Compteur::ajouterConstructeur();
}

Composant3::Composant3(const Composant3& Copie):
Composant(Copie)
{
	Compteur::ajouterConstructeurCopie();
}
Composant3::~Composant3()
{
	Compteur::ajouterDestructeur();
}

