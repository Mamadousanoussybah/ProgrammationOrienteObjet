#pragma once
#include"Composant.h"
#include <vector>
#include<list>

class Produit
{
private:
	string nom;
	list<Composant*> composants;
	//vector<Composant*> composants; // Liste de pointeurs de Composant
public:
	int caculerPoids() const;
	int calculerPrix() const;
	void ajouterComposant(Composant* copie);
	Produit(string nom);
	Produit(const Produit& p);
	virtual ~Produit();
	string getNom();
	virtual string getDescription() const { return "Description d'un produit "; };
	int evaluerQualite();
	
	friend std::ostream& operator<< (std::ostream& out, const Produit& produit){
		
		out << "" << produit.nom  << "{" << produit.getDescription() << "}"
			"-->" << "Poids: " << produit.caculerPoids()
			<<"/Prix:"<<produit.calculerPrix() << endl;
		return out;
	}
	virtual Produit* clone() const = 0;

};