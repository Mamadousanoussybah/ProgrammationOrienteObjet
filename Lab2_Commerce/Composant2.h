#pragma once
#include<iostream>
#include"Composant.h"
#include<string>
class Composant2:
public Composant
{
public:
	~Composant2();
	Composant2(const Composant2& Copie);
	Composant2(int qualite, int prix);

	Composant* clone() const override { return new Composant2(*this); }


};

