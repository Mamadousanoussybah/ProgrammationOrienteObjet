#include "Link.h"

Link::Link()
{
	vie = 12;
	nbTriForce = 0;
}

void Link::ajouterInventaire(string id, string nom, string pouvoir)
{
	for (int i=0;i < 3; i++)
	{
		if (inventaire[i].id.empty())
		{
			inventaire[i].id = id;
			inventaire[i].nom = nom;
			inventaire[i].pouvoir = pouvoir;
			break;
		}
	}
}

void Link::supprimerInventaire(string idItem)
{
	for (int i=0; i < 3; i++)
	{
		if(inventaire[i].id==idItem)
		{
			inventaire[i].id = "";
			inventaire[i].nom = "";
			inventaire[i].pouvoir = "";
		}
	}
}

string Link::getInventaire()
{
	string res = "Inventaire\n";
	for (int i = 0; i < 3; i++)
	{
		if (inventaire[i].id.empty())
		{
			res += "<VIDE>\n";
		}
		else
		{
			res += inventaire[i].id + " : "+
				inventaire[i].nom + "  - " +
				inventaire[i].pouvoir + "\n";
		}
	}return res;
	
}


void Link::ajouterTriForce()
{
	if (nbTriForce<MAX_TRI_FORCE)
	{
		nbTriForce++;
	}
}

void Link::estBlesse(int degat)
{
	if (vie-degat<=0)
	{
		vie = 0;
	}
	else
	{
		vie = vie - degat;
	}
}

bool Link::enVie()
{
	if (vie>0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
