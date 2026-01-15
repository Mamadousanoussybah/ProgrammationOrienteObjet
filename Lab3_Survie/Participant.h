// Participant.h
#pragma once
#include "Journalisation.h"


class Participant {
private:
    char id;
    int energie;
    int positionX;
    int positionY;

public:
    inline   Participant(char id, int px, int py)
        : id(id), positionX(px), positionY(py), energie(5)
    {// Sauvegarde de la session avant de détruire l'objet
        Journalisation::sauvegarder(this);
    }

    inline  Participant(char id, int px, int py, int energie)
        : id(id), positionX(px), positionY(py), energie(energie)
    {// Sauvegarde de la session avant de détruire l'objet
        Journalisation::sauvegarder(this);
    }

    inline  virtual ~Participant() {}

  inline   char getId() const { return id; }
  inline int getEnergie() const { return energie; }
  inline int getX() const { return positionX; }
  inline int getY() const { return positionY; }

protected:
     
    inline void setX(int x ) { positionX = x; }
    inline void setY(int y) { positionY = y; }


  inline void modifierEnergie(int quantite)
  {
        energie += quantite;
        if (energie < 0) 
        {
            energie = 0;  // L'énergie ne peut pas être inférieure à 0
        }
  }

};
