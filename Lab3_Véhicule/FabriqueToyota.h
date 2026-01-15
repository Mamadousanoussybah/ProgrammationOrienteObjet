#ifndef FABRIQUE_TOYOTA_H
#define FABRIQUE_TOYOTA_H

#include "FabriqueAbstraite.h"
#include "Camion.h"
#include "Voiture.h"

class FabriqueToyota : public FabriqueAbstraite
{
public:
    // Implémentation des méthodes créant des véhicules Toyota
    inline Camion* creerCamion() override
    {
        return new CamionToyota();
    }

    inline Voiture* creerVoiture() override
    {
        return new VoitureToyota();
    }
};

#endif
