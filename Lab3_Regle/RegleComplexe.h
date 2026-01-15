// RegleComplexe.h
#pragma once
#include "Regle.h"
#include "Regle2.h"

class RegleComplexe : public Regle
{
private:
  // ClasseEnfant enfant;
    
    class ClasseEnfant
    {
    public:
        // Méthode pour valider un produit de manière complexe
        bool validationComplexe(const Produit& produit)
        {
            Regle2 regle2;
            return regle2.validerProduit(produit) && produit.getEnStock();
        }
      

    };
    ClasseEnfant enfant;

public:

    bool validerProduit(const Produit& produit) override 
    {
        return enfant.validationComplexe(produit);
    }

    string getId() override
    {
        return "complexe";
    }
};
