#pragma once
#include<iostream>
#include"Composant.h"
#include<string>
class Composant5:
public Composant
{
public:
	~Composant5();
	Composant5(const Composant5& Copie);
	Composant5(int variation, int qualite, int prix);

	Composant* clone() const override { return new Composant5(*this); }
};

