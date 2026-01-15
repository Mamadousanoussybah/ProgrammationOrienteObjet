#pragma once
#include<iostream>
#include"Commande.h"
#include"Entrepot.h"


class BonCommande
{
private:
	Commande* commande;
	int idBonCommande;
	int quantiteProduit[5];
public:
	~BonCommande();
	BonCommande(const BonCommande& autre);
	BonCommande( int idBonCommande, Commande* commande);
	void ajouterProduits(int quantite, int id);
	int getQuantiteProduits(int id);
	Commande* getCommande()const;
	int getIdBonCommande()const;
	friend ostream& operator<<(ostream& os, const BonCommande& bonCommande);

};

