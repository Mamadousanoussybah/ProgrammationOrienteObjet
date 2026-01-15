#include "GestionnaireRegles.h"
#include "Regle.h"
#include "Regle1.h"
#include "Regle2.h"
#include "Regle3.h"
#include "RegleComplexe.h"

// Méthode générique pour obtenir une règle par ID
Regle* GestionnaireRegles::getRegle(int idRegle)
{
    switch (idRegle)
    {
    case 1:
        return getRegle1(); 
    case 2:
        return getRegle2();  
    case 3:
        return getRegle3();  
    default:
        return nullptr; 
    }
}

