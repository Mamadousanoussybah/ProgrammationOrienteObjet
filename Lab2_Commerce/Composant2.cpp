#include "Composant2.h"



Composant2::Composant2(int qualite, int prix):
Composant ("COMPOSANT#2",7,qualite,prix)
{
	Compteur::ajouterConstructeur();
}
Composant2::~Composant2()
{
	Compteur::ajouterDestructeur();
}

Composant2::Composant2(const Composant2& Copie):
Composant(Copie)
{
	Compteur::ajouterConstructeurCopie();
}
