#pragma once
#include<iostream>
using namespace std;
struct Item
{
	string id;
	string nom;
	string pouvoir;
};
class Link
{
public:
	void nouvellePartie();
	void ajouterInventaire(string id, string nom, string pouvoir);
	void supprimerInventaire(string idItem);
	string getInventaire();
	string attaquerEpee() const { return "Slash!"; };
	string lancerBoomerang() const { return "Whoup!Whoup!Whoup!Whoup!Whoup!"; };
	void ajouterTriForce();
	bool peutAccederDonjonGanonPourSauverZelda() { return nbTriForce >= MAX_TRI_FORCE; };
	char getDirection() { return direciton; };
	void tournerNord() { direciton = 'N'; };
	void tournerSud() { direciton = 's'; };
	void tournerEst() { direciton = 'E'; };
	void tournerOuest() { direciton = 'O'; };
	int getNombreVies() { return vie; };
	void estBlesse(int degat);
	bool enVie();

private:
	char direciton;
	int vie;
	Item inventaire[3];
	int nbTriForce;
	int MAX_TRI_FORCE = 8;

};
