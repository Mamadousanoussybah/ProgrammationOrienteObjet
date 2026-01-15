#pragma once
#include<string>
#include<iostream>
#include"Produit.h"
using namespace std;

class Commande
{
private:
	int noCommande;
	int quantiteProduits[5];
public:
	Commande(int noCommande,int qteProduits[]);
	~Commande();
	Commande(const Commande& );
	int validerQuantite(int q);
	 friend ostream& operator << (ostream& out, const Commande& commande);
	 int getQuantiteProduit(int idProduit);
	 int getNoCommande();

};

