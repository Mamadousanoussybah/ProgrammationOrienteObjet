#include "Mario.h"

void Mario::nouvellePartie()
{
	etat="petit";
	invincible = false;
}

void Mario::estBlesse()
{
	if (!invincible )
	{

		if (etat == "gros")
		{
			etat = "petit";
		}
		
		else if (etat == "grosBouleFeu" || etat == "grosBouleGlase")
		{
			etat = "gros";
		}
		else
		{
			etat = "mort";
		}

	}
}


void Mario::mangerChampignon()
{
	if (etat=="petit")
	{
		etat = "gros";
	}
}

void Mario::mangerFleurFeu()
{
	if (etat=="petit")
	{
		etat = "grosBouleFeu";
	}
}

void Mario::mangerFleurGlace()
{
	if (etat=="petit")
	{
		etat = "grosBouleGlace";
	}
}


