// Devoir1Heros.h
#pragma once
#include "Participant.h"
#include "Journalisation.h"
#include "Devoir.h"


class Devoir1Heros : public Devoir
{
public:
    inline   Devoir1Heros(int x, int y)
        : Devoir('H', x, y, 1)
    {// Sauvegarde de la session avant de détruire l'objet
        Journalisation::sauvegarder(this);
    }  // L'identifiant 'D' pour les devoirs et une énergie initiale
    inline  int Ponderation()const override { return 1; }
};
