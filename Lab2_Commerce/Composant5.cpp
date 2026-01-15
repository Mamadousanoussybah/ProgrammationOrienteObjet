#include "Composant5.h"



Composant5::Composant5(int variation, int qualite, int prix):
Composant("COMPOSANT#5",10+variation,qualite,prix)
{
	Compteur::ajouterConstructeur();
}

Composant5::Composant5(const Composant5& Copie):
Composant(Copie)
{
	Compteur::ajouterConstructeurCopie();
}
Composant5::~Composant5()
{
	Compteur::ajouterDestructeur();
}