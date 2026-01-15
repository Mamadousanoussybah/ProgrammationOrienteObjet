#include "Composant4.h"



Composant4::Composant4(int qualite):
Composant("COMPOSANT#4",11,qualite,10)

{
	Compteur::ajouterConstructeur();
}
Composant4::~Composant4()
{
	Compteur::ajouterDestructeur();
}
Composant4::Composant4(const Composant4& Copie):
 Composant(Copie)
{
	Compteur::ajouterConstructeurCopie();
}
