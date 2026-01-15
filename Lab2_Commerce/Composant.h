#pragma once
#include"string"
#include<iostream>
#include"Compteur.h"
using namespace std;
class Composant

{
public:
	Composant(string nom,int poids,int qualite,int prix);
	virtual ~Composant();
	Composant(const Composant& Composant);
	
	string getNom();
	int getPoids();
	int getQualite();
	int getPrix();
	virtual Composant* clone() const = 0; // Méthode virtuelle pure

private:
	string nom;
	int poids;
	int qualite;
	int prix;

};
