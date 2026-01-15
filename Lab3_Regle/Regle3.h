#pragma once
#include<iostream>
#include<string>
#include "Produit.h"
#include "Regle.h"

using namespace std;

class Regle3 : public Regle
{
public:

    bool validerProduit(const Produit& produit) override
    {
        return produit.getQuantite() > 0; // La quantité doit être supérieure à 0
    }

    string getId() override
    {
        return "TROIS"; // Identifiant pour cette règle
    }
};
