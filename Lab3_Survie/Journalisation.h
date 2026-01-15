#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <typeinfo>  // Nécessaire pour utiliser typeid

using namespace std;

class Journalisation
{
  public:
    // Fonction template pour sauvegarder n'importe quel type d'objet
    template <typename T>
    inline  static void sauvegarder(const T& objet)
    {
        ofstream monFichier("survie.txt", ios::app);  // Ouvre le fichier en mode ajout
        if (monFichier.is_open())
        {
            monFichier  << typeid(objet).name() << endl;  // Enregistre le type de l'objet
        }
        else
        {
            cerr << "Erreur d'ouverture du fichier !" << endl;
        }
    }
};