#include <iostream>
#include "Mario.h"
using namespace std;
void mario();

int main()
{
	mario();

	cin.get();
	return 0;
}

void mario()
{
	Mario mario;
	mario.nouvellePartie();

	cout << " Code Permanent : KEIS02060000" << endl;
	cout << " Nom : Keita " << endl;
	cout << " prénom : Saran Mady" << endl;

	cout << endl << "--- test MARIO ---" << endl;

	mario.mangerFleurFeu();
	cout << " 01 - " << mario.getEtat() << endl;
	mario.mangerFleurGlace();
	cout << " 02 - " << mario.estInvincible() << endl;
	mario.estBlesse();
	cout << " 03 - " << mario.getEtat() << endl;
	mario.attraperEtoile();
	mario.estBlesse();
	mario.estBlesse();
	cout << " 04 - " << mario.estInvincible() << endl;
	mario.estBlesse();
	mario.estBlesse();
	cout << " 05 - " << mario.getEtat() << endl;
	mario.finPouvoirEtoile();
	cout << " 06 - " << mario.estInvincible() << endl;
	mario.estBlesse();
	mario.mangerChampignon();
	mario.estBlesse();
	cout << " 07 - " << mario.direPhraseVictoire() << endl;
	mario.estBlesse();
	cout << " 08 - " << mario.getEtat() << endl;

	cout << endl;
}
