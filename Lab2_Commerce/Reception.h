#pragma once
#include<iostream>
#include"Commande.h"
#include"BonCommande.h"
#include"Produit.h"
#include<list>

using namespace std;

class Reception
{
private:
	list<Produit*>produits[5];
	BonCommande* bonCommande;


public:
	Reception(BonCommande* bonCommande);
	~Reception();
	Reception(const Reception& reception) = delete;
    friend ostream& operator<< (ostream& out, const Reception& reception);
	void ajouterProduit(Produit* produit, int id);
	BonCommande* getBonCommande()const;
	int getQuantiteProduitsRecus(int id)const;
	const list<Produit*>& getProduits(int idProduit)const;
};

