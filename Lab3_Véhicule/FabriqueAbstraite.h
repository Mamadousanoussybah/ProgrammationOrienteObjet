#ifndef FABRIQUE_ABSTRAITE_H
#define FABRIQUE_ABSTRAITE_H

#include "Camion.h"  // Inclus Camion.h et Voiture.h si nécessaire
#include "Voiture.h"

class FabriqueAbstraite
{
public:
    inline virtual Camion* creerCamion() = 0;  // Méthode virtuelle pure pour créer un camion
    inline virtual Voiture* creerVoiture() = 0;  // Méthode virtuelle pure pour créer une voiture
    inline virtual ~FabriqueAbstraite() {}  // Destructeur virtuel
};

#endif
