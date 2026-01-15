#pragma once
class Compteur
{
public:
	Compteur();
	~Compteur();
	Compteur(const Compteur& Copie);
	static void ajouterConstructeur();
	static void ajouterConstructeurCopie();
	static void ajouterDestructeur();
	static int getNbConstructeurCopie();
	static int getNbDestructeur();
	static int getNbConstructeur();

private:
	static int constructeur;
	static int constructeurCopie;
	static int destructeur;
};

