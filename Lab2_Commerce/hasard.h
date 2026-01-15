#pragma once
#include <cstdlib> 
#include <ctime>
class hasard
{
 

	// Initialise la graine pour la génération de nombres aléatoires
	void initialiserHasard();

	// Génère un nombre aléatoire entre min et max (inclus)
	int genererNombreAleatoire(int min, int max);

};

