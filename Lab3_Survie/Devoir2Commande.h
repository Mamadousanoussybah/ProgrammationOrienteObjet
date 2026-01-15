// Devoir2Commande.h
#pragma once
#include "Participant.h"
#include "Journalisation.h"
#include"Devoir.h"

class Devoir2Commande : public Devoir {
public:
    inline  Devoir2Commande(int x, int y)
        :Devoir('C', x, y, 3)
    {// Sauvegarde de la sesson avant de détruire l'objet
        Journalisation::sauvegarder(this);
    }  // Énergie spécifique pour ce devoir

    inline  int Ponderation()const override { return 3; }
};
