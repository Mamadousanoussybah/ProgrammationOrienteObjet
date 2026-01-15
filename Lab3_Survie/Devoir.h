#pragma once
#include "Journalisation.h"
#include"Participant.h"


class Devoir : public Participant
{
public:
    // Constructeur pour initialiser l'id, l'énergie, et la position du devoir
  inline Devoir(char id, int energie, int px, int py)
        : Participant(id, energie, px, py)
  {
        // Sauvegarde de la session avant de détruire l'objet
        Journalisation::sauvegarder(this);
  }

   inline  virtual ~Devoir() {};
    // Méthode virtuelle pure à implémenter par chaque type de devoir
    virtual int Ponderation() const = 0;  // Méthode virtuelle pure pour la pondération spécifique à chaque devoir


};
