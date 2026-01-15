#include "Pacman.h"

void PacMan::nouvellePartie()
{
	direction = 'H';
	invincible = false;
}


string PacMan::attaquer()
{
	if (invincible==true)
	{
		return ":-)";
	}
	else
	{
		return ":-(";
	}
}

