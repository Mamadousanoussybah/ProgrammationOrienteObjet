#ifndef FABRIQUE_FORD_H
#define FABRIQUE_FORD_H

#include "FabriqueAbstraite.h"
#include "Camion.h"
#include "Voiture.h"

class FabriqueFord : public FabriqueAbstraite
{
public:
    // Implémentation des méthodes créant des véhicules Ford
    inline Camion* creerCamion() override
    {
        return new CamionFord();
    }

    inline Voiture* creerVoiture() override
    {
        return new VoitureFord();
    }
};

#endif
