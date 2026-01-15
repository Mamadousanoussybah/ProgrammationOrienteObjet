#pragma once
#include<iostream>
#include"Reception.h"
#include"Commande.h"
#include"Composant.h"
#include<list>
using namespace std;

class Client
{
private:
	string nom;
	int seuilQualite;
	Commande* commandesA2024[4];
	Reception* reception;
public:
	Client(string nom, int seuilQualite);
	Client(const Client& client);
	~Client();
	void prepareCommande2024();
	friend ostream& operator <<(ostream& out, const Client & client);
	Commande getCommande(int id);
	Reception* getReception();
	int getSeuilQualite() const;
	string getNom();
	void recevoirCommande(Reception* reception);
	void consommerProduits();
	int getSatisfactionProduit(int idProduit);



};

