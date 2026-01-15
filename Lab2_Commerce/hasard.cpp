#include "hasard.h"
#include<iostream>
using namespace std;

// Initialise la graine pour la génération de nombres aléatoires
void hasard:: initialiserHasard() {
    srand(static_cast<unsigned int>(time(0))); // Utilise le temps actuel comme graine
}

// Génère un nombre aléatoire entre min et max (inclus)
int hasard:: genererNombreAleatoire(int min, int max) {
    if (min > max) {
        throw invalid_argument("Le minimum doit être inférieur ou égal au maximum.");
    }
    return rand() % (max - min + 1) + min; // Renvoie un nombre aléatoire dans l'intervalle [min, max]
}

