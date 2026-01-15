#pragma once
#include<iostream>
#include<string>
#include "Produit.h"
#include "Regle.h"


using namespace std;

class Regle1 : public Regle
{
public:

    bool validerProduit(const Produit& produit) override
    {
        return !produit.getId().empty(); // L'ID ne doit pas être vide
    }

    string getId() override
    {
        return "UN"; // Identifiant pour cette règle
    }

};
