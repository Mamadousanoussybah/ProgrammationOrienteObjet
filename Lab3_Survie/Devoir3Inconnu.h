// Devoir3Inconnu.h
#pragma once
#include<iostream>

#include "Participant.h"
#include "Journalisation.h"
#include"Devoir.h"

using namespace std;

class Devoir3Inconnu : public Devoir {
public:
    inline Devoir3Inconnu(int x, int y)
        : Devoir('I', x, y, 5)
    {// Sauvegarde de la session avant de détruire l'objet
        Journalisation::sauvegarder(this);
    }  // L'identifiant 'D' pour devoirs et énergie initiale

    inline int Ponderation()const override { return 5; }

};
