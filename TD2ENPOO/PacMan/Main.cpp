#include<iostream>
#include "PacMan.h"
using namespace std;

void pacMan();

int main()
{
	pacMan();

	cin.get();
	return 0;
}
void pacMan()
{
	PacMan pacman;
	pacman.nouvellePartie();
	cout << " Mon Code Permanent :KEIS02060000 " << endl;
	cout << " Nom : Keita " << endl;
	cout << " Prénom : Saran Mady " << endl;

	cout << endl << "--- test PACMAN ---" << endl;

	pacman.setDirection('H');
	cout << " 01 - " << pacman.getDirection() << endl;
	pacman.setDirection('C');
	cout << " 02 - " << pacman.getDirection() << endl;
	cout << " 03 - " << pacman.estInvincible() << endl;
	pacman.avalerSuperPacGomme();
	cout << " 04 - " << pacman.attaquer() << endl;
	pacman.finInvincibilite();
	cout << " 05 - " << pacman.attaquer() << endl;
	cout << " 06 - " << pacman.direPhraseVictoire() << endl;

	cout << endl;
}