#include "Composant.h"



Composant::Composant(string nom, int poids, int qualite, int prix)
{
	this->nom = nom;

	if (poids >= 0)
	{
		this->poids = poids;
	}
	else
	{
		this->poids = 0;
	}
	if (qualite >= 0)
	{
		this->qualite = qualite;
	}
	else if(qualite>100)
	{
		this->qualite = 100;

	}
	else
	{
		this->qualite = 0;
	}

	if (prix >= 0)
	{
		this->prix = prix;
	}
	else
	{
		this->prix = 0;
	}
	Compteur::ajouterConstructeur();


}

Composant::~Composant()
{
	Compteur::ajouterDestructeur();

}

Composant::Composant(const Composant& Copie)
{
	this->nom =Copie.nom;
	this->poids = Copie.poids;
	this->qualite = Copie.qualite;
	this->prix = Copie.prix;

	Compteur::ajouterConstructeurCopie();
}

string Composant::getNom()
{
	return nom;
}

int Composant::getPoids()
{
	return poids;
}

int Composant::getQualite()
{
	return qualite;
}

int Composant::getPrix()
{
	return prix;
}
