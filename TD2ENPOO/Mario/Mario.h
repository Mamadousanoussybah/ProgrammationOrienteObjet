#pragma once
#include<iostream>

using namespace std;
class Mario
{
public:
 void nouvellePartie();
 void estBlesse();
 string getEtat() const { return etat; };
 bool estInvincible() const { return invincible; };
 void mangerChampignon();
 void mangerFleurFeu();
 void mangerFleurGlace();
 void attraperEtoile() { invincible = true; };
 void finPouvoirEtoile() { invincible = false; };
 string direPhraseVictoire() const { return "Hey Mario!"; };
private:
	bool invincible;
	string etat;
};


