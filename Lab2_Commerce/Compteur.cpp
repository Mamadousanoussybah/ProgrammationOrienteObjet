#include "Compteur.h"

int Compteur::constructeur = 0;
int Compteur::destructeur = 0;
int Compteur::constructeurCopie = 0;
Compteur::Compteur()
{

}

Compteur::~Compteur()
{
}

Compteur::Compteur(const Compteur& Copie)
{
}

void Compteur::ajouterConstructeur()
{
	constructeur++;
}

void Compteur::ajouterConstructeurCopie()
{
	constructeurCopie++;
}

void Compteur::ajouterDestructeur()
{
	destructeur++;
}

int Compteur::getNbConstructeurCopie()
{
	return constructeurCopie;
}

int Compteur::getNbDestructeur()
{
	return destructeur;
}

int Compteur::getNbConstructeur()
{
	return constructeur;
}

