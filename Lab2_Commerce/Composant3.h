#pragma once
#include<iostream>
#include"Composant.h"
#include<string>
class Composant3:
 public Composant 
{
public:
	~Composant3();
	Composant3(const Composant3& Copie);
	Composant3(int prix);

	Composant* clone() const override { return new Composant3(*this); }

};

