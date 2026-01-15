#pragma once
#include<iostream>
#include<string>

using namespace std;

class Produit
{
public: 
	Produit(string id, int quantite, bool enStock, int prix)
	: id(id), quantite(quantite), enStock(enStock), prix(prix) {}

	string getId() const { return id; }
	int getQuantite() const { return quantite; }
	bool getEnStock() const{ return enStock; }
	int getPrix() const{ return prix; }
	friend ostream& operator<<(ostream& os, const Produit& produit);
private:
	string id;
	int quantite;
	bool enStock;
	int prix;
};

