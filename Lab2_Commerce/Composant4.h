#pragma once
#include<iostream>
#include"Composant.h"
#include<string>
class Composant4:
 public Composant
{
public:
	~Composant4();
	Composant4(const Composant4& Copie);
	Composant4(int qualite);

	Composant* clone() const override { return new Composant4(*this); }
		
};

