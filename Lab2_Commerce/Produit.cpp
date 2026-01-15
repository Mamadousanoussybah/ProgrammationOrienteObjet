#include "Produit.h"


Produit::Produit(string nom)
{
	this->nom = nom;
	Compteur::ajouterConstructeur();

}

int Produit::caculerPoids() const
{
	int somme = 0;

	for (const auto& c : composants) {
		somme += c->getPoids();
	}

	return somme;
	
}

int Produit::calculerPrix() const
{
	int somme = 0;

	for (const auto& c : composants) {
		somme += c->getPrix();
	}

	return somme;
}

void Produit::ajouterComposant(Composant* copie)
{
	composants.push_back(copie);
}
Produit::Produit(const Produit& p)
{
	this->nom = p.nom;

	for (const auto& c : p.composants) {

		composants.push_back(c->clone());
	}
	Compteur::ajouterConstructeurCopie();
}

Produit::~Produit()
{
	for (auto c : composants)
	{
		delete c;
	}
		Compteur::ajouterDestructeur();
}

string Produit::getNom()
{
	return nom;
}

int Produit::evaluerQualite()
{
	if (composants.empty())
	{
		return 0;
	}

	int totalQualite = 0;
	for (const auto& composant : composants)
	{
		totalQualite += composant->getQualite();
	}
	return totalQualite / composants.size();

	
}




