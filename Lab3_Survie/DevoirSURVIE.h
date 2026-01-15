// DevoirSurvie.h
#pragma once
#include<iostream>
#include "Devoir.h"
#include "Journalisation.h"


using namespace std;

class DevoirSurvie : public Devoir
 {
public:
    inline DevoirSurvie(int x, int y)
        : Devoir('S', x, y, 2)
    {// Sauvegarde de la session avant de détruire l'objet
        Journalisation::sauvegarder(this);
    }  // L'identifiant 'S' pour devoir de survie et énergie initiale
    inline int Ponderation()const override { return 2; }

};