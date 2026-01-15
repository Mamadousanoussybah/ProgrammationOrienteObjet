// Etudiant.h
#pragma once
#include "Participant.h"
#include "Journalisation.h"


class Etudiant : public Participant
{
public:
    inline  Etudiant(int x, int y, int niveau)
        : Participant('E', x, y, niveau)
    {
        // Sauvegarde de la session avant de détruire l'objet
        Journalisation::sauvegarder(this);
    }  // 'E' pour identifier un étudiant

    inline bool toujoursEnAction() const { return getEnergie() > 0; }
    inline void subirEchec() { modifierEnergie(-1); }
    inline void reussirDevoir(int energie) { modifierEnergie(energie); }
    inline void setNouvellePosition(int x, int y) { setX(x), setY(y); }
};
