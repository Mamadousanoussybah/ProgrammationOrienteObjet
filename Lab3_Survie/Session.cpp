#include <iostream>

#include "Session.h"
#include "Devoir1Heros.h"
#include "Devoir1Heros.h"
#include "Devoir2Commande.h"
#include "Devoir3Inconnu.h"
#include "DevoirSurvie.h"
#include "Journalisation.h"

using namespace std;

Session::Session(string sigle, int niveau)
{
	srand(static_cast<unsigned int>(time(NULL)));


	this->sigle = sigle;
	this->niveau = niveau;
	participants = new Participant * *[niveau];
	for (int x = 0; x < niveau; x++) {
		participants[x] = new Participant * [niveau];
		for (int y = 0; y < niveau; y++)
			participants[x][y] = NULL;

	}
	enCours = true;
	initialiserDevoirs();
	initialiserEtudiant();

}

Session::~Session()
{
	Journalisation::sauvegarder(this);
	for (int x = 0; x < niveau; x++)
	{
		for (int y = 0; y < niveau; y++)
			delete participants[x][y];
		delete participants[x];
	}
	delete participants;
}

void Session::deplacer(int x, int y)
{
	if (x == etudiant->getX() && y == etudiant->getY())		// Aucun mouvement
		return;

	if (!validation(x, y))
	{
		enCours = false;
		conclusion = "En dehors des balises etablies";
		return;
	}

	if (participants[x][y] != NULL)
	{
		int energie = participants[x][y]->getEnergie();
		cout << "Fin du devoir " << participants[x][y]->getId() << "(" << energie << ")" << endl;
		etudiant->reussirDevoir(energie);
		delete participants[x][y];
		if (--devoirsAReussir == 0)
		{
			enCours = false;
			enCours = false;
			conclusion = "Finalement, la lumiere etait rellement au bout du tunnel!";
		}
	}
	else
		etudiant->subirEchec();

	participants[x][y] = etudiant;
	participants[etudiant->getX()][etudiant->getY()] = NULL;
	etudiant->setNouvellePosition(x, y);

	if (!etudiant->toujoursEnAction())
	{
		enCours = false;
		conclusion = "A cours d'energie et de motivation...";
	}
}



void Session::initialiserPosition(int& px, int& py)
{
	do
	{
		px = positionAleatoire();
		py = positionAleatoire();
	} while (participants[px][py] != NULL);
}


void Session::initialiserDevoirs()
{
	devoirsAReussir = 4;

	int px = -1;
	int py = -1;

	initialiserPosition(px, py);
	participants[px][py] = new Devoir1Heros(px, py);
	initialiserPosition(px, py);
	participants[px][py] = new Devoir2Commande(px, py);
	initialiserPosition(px, py);
	participants[px][py] = new Devoir3Inconnu(px, py);
	initialiserPosition(px, py);
	participants[px][py] = new DevoirSurvie(px, py);
}

void Session::initialiserEtudiant()
{
	int px = -1;
	int py = -1;
	initialiserPosition(px, py);

	etudiant = new Etudiant(px, py, niveau);
	participants[px][py] = etudiant;
}

int Session::positionAleatoire() const
{
	return rand() % niveau;
}

bool Session::validation(int x, int y) const
{
	if (x >= 0 && x < niveau && y >= 0 && y < niveau)
		return true;
	return false;
}

ostream& operator<<(ostream& out, const Session& session)
{
	out << "SIGLE : " << session.sigle << " / ENERGIE " << session.etudiant->getEnergie() << endl;
	for (int x = 0; x < session.niveau; x++)
	{
		for (int y = 0; y < session.niveau; y++)
			if (session.participants[x][y] == NULL)
				out << " -";
			else
				out << " " << session.participants[x][y]->getId();
		out << endl;
	}
	out << endl;

	return out;
}