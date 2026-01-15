#include "Fournisseur.h"
// Constructeur
Fournisseur::Fournisseur()
{
    srand(static_cast<unsigned int>(time(nullptr))); // Initialisation de la graine pour les nombres aléatoires
    for (int i = 0; i < 5; ++i)
    {
        quantiteComposant[i] = 1000; // Initialiser chaque quantité à 1000
    }
    Compteur::ajouterConstructeur();
}

// Destructeur
Fournisseur::~Fournisseur()
{
    Compteur::ajouterDestructeur();
}

// Constructeur de copie
Fournisseur::Fournisseur(const Fournisseur& f)
{
    for (int i = 0; i < 5; ++i)
    {
        quantiteComposant[i] = f.quantiteComposant[i]; // Copier les quantités
    }
    Compteur::ajouterConstructeurCopie();
}

// Méthode pour commander des composants
list<Composant*> Fournisseur::commanderComposant(int idComposant, int qualite)
{
    std::list<Composant*> composantsCommandes;

    if (idComposant < 0 || idComposant >= 5 || qualite <= 0) {
        return composantsCommandes; // Retourner une liste vide si l'id ou la quantité est invalide
    }

    for (int i = 0; i < qualite; ++i) {
        Composant* composant = nullptr;
        switch (idComposant) {
        case 0: composant = produireComposant1(); break;
        case 1: composant = produireComposant2(); break;
        case 2: composant = produireComposant3(); break;
        case 3: composant = produireComposant4(); break;
        case 4: composant = produireComposant5(); break;
        }
        if (composant != nullptr) {
            composantsCommandes.push_back(composant);
        }
        else {
            break; // Si la production échoue, sortir de la boucle
        }
    }

    return composantsCommandes;
}

// Produire Composant1
Composant1* Fournisseur::produireComposant1() 
{
    if (quantiteComposant[0] <= 0)
    {
        return nullptr; // Pas assez de composants
    }
    quantiteComposant[0]--; // Diminuer la quantité
    int qualite = rand() % 11 + 90; // Qualité entre 90 et 100
    int prix = 30 + (100 - qualite); // Calcul du prix
    return new Composant1(qualite, prix); // Créer et retourner le nouveau composant
}

// Produire Composant2
Composant2* Fournisseur::produireComposant2() {
    if (quantiteComposant[1] <= 0) {
        return nullptr;
    }
    quantiteComposant[1]--;
    int qualite = rand() % 7 + 93; // Qualité entre 93 et 99
    int prix = rand() % 5 + 33; // Prix entre 33 et 37
    return new Composant2(qualite, prix);
}

// Produire Composant3
Composant3* Fournisseur::produireComposant3() {
    if (quantiteComposant[2] <= 0) {
        return nullptr;
    }
    quantiteComposant[2]--;
    int prix = rand() % 8 + 38; // Prix entre 38 et 45
    return new Composant3(prix);
}

// Implémentations pour produire Composant4 et Composant5 à compléter...
Composant4* Fournisseur::produireComposant4() {
    if (quantiteComposant[3] <= 0) {
        return nullptr;
    }
    quantiteComposant[3]--;
    int qualite = rand() % 21 + 80;  // Qualité entre 80 et 100
   // int prix = rand() % 11 + 40; // Prix entre 40 et 50
   // int specificite = rand() % 10 + 1; // Spécificité entre 1 et 10
    return new Composant4(qualite);
    // Ajoutez votre logique spécifique ici
   
}

Composant5* Fournisseur::produireComposant5() {
    if (quantiteComposant[4] <= 0) {
        return nullptr;
    }
    quantiteComposant[4]--;
    int qualite = rand() % 6 + 95; // Qualité entre 95 et 100
    int variation = rand() % 11 - 5; // Variation entre -5 et 5
    int prix = 33 + (100 - qualite); // Prix selon la formule donnée
   // string description = "Description du Composant5"; // Définissez selon vos besoins
    return new Composant5(qualite,prix, variation);
    // Ajoutez votre logique spécifique ici
 
}
