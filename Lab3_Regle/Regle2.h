#pragma once
#include<iostream>
#include<string>
#include "Produit.h"
#include "Regle.h"


using namespace std;

class Regle2 : public Regle
{
public:

    bool validerProduit(const Produit& produit) override
    {
        return produit.getPrix() > 0; // Le prix doit être supérieur à 0
    }

    string getId() override 
    {
        return "DEUX"; // Identifiant pour cette règle
    }
};
