#include <iostream>
#include "Link.h"
using namespace std;

void link();

int main()
{
	link();

	cin.get();
	return 0;
}

void link()
{
	Link* Link = new link();
	link();
	Link link;
	cout << " Code permanent : KEIS02060000" << endl;
	cout << " Nom : Keita " << endl;
	cout << " prenom : Saran Mady " << endl;
	cout << endl << "--- test LINK ---" << endl;

	cout << " 01 - " << link.getNombreVies() << endl;
	Link();
	cout << " 02 - " << link.getNombreVies() << endl;
	cout << " 03 - " << link.getInventaire() << endl;
	link.ajouterInventaire("45", "Medaillon en or", "Protege de 5 points de degat");
	link.ajouterInventaire("12", "Armure magique", "Protege de 20 points de degat");
	link.ajouterInventaire("01", "Botte elfique", "Deplacement silencieux");
	cout << " 04 - " << link.getInventaire() << endl;
	link.supprimerInventaire("12");
	cout << " 05 - " << link.getInventaire() << endl;
	cout << " 06 - " << link.attaquerEpee() << endl;
	cout << " 07 - " << link.lancerBoomerang() << endl;

	link.tournerEst();
	link.estBlesse(5);
	link.tournerOuest();
	link.tournerNord();
	link.estBlesse(2);
	link.tournerSud();
	cout << " 08 - " << link.getDirection() << endl;
	cout << " 09 - " << link.enVie() << endl;
	cout << " 10 - " << link.getNombreVies() << endl;

	while (!link.peutAccederDonjonGanonPourSauverZelda())
		link.ajouterTriForce();

	link.estBlesse(8);
	cout << " 11 - " << link.enVie() << endl;

	cout << endl;
}

