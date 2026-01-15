#pragma once
#include<iostream>
using namespace std;
class PacMan
{
public:
	void nouvellePartie();
	char getDirection() const { return direction; };
	void setDirection(char d) { direction = 'H'; };
	bool estInvincible() const { return invincible; };
	string attaquer();
	void avalerSuperPacGomme() { invincible = true; };
	void finInvincibilite() { invincible = false; };
	string direPhraseVictoire() const {return "....!"; };
private:
	char direction;
	bool invincible;
};

