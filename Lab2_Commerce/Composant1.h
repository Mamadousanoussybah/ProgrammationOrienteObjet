#pragma once
#include"Composant.h"
#include<iostream>
#include<string>
using namespace std;
class Composant1:
	public Composant
{
public:
	Composant1(int qualite,int prix);
	~Composant1();
	Composant1(const Composant1& Copie);

	Composant* clone() const override { return new Composant1(*this); }

};

