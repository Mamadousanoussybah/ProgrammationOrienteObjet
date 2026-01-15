
#include <iostream>
#include "Produit.h"
#include "GestionnaireRegles.h"
#include "Validateur.h"

using namespace std;

int main() 
{
    cout << " Nom et Prenom : Keita Saran Mady "     << endl;
    cout << " Code Permanent : KEIS02060000 "        << endl;
    cout << " ************************************ " << endl;
    cout << " Nom et Prenom : Bah Mamadou Sanoussy " << endl;
    cout << " Code Permanent : BAHM02080500  " << endl;
    cout << " ************************************ " << endl;

    // Création des produits
    Produit p1("1", 20, true, 11);   // ID "1", prix 20, quantité 11, en stock
    Produit p2("2", -1, false,22 );   // ID "2", prix -1, quantité 22, pas en stock
    Produit p3("", 10, true, 33);     // ID vide, prix 10, quantité 33, en stock
    Produit p4("4", 20, false, 44);   // ID "4", prix 20, quantité 44, pas en stock
    Produit p5("5", 999, true, -10);  // ID "5", prix 999, quantité -10, en stock


    
 
    // Création d'un gestionnaire de règles
    GestionnaireRegles gestionnaire;
    // Récupération des règles
    Regle1* regle1= gestionnaire. getRegle1();
    Regle2* regle2 = gestionnaire.getRegle2();
    Regle3* regle3 = gestionnaire.getRegle3();
    Regle* reglecomplexe = gestionnaire.getRegleComplexe();


    // Création du validateur
    Validateur validateur;

    validateur.ajouterRegle(regle1);
    validateur.ajouterRegle(regle2);
    validateur.ajouterRegle(regle3);
    validateur.ajouterRegle(regle1);
    validateur.ajouterRegle(regle2);
    validateur.ajouterRegle(regle3);
    validateur.ajouterRegle(reglecomplexe);

    // Validation des produits
    validateur.valider(p1);  // Devrait être valide

    validateur.valider(p2);  // Devrait échouer à la règle 3

    validateur.valider(p3);  // Devrait échouer à la règle 1

    validateur.valider(p4);  // Devrait échouer à la règle 3

    validateur.valider(p5);  // Devrait échouer à la règle 2

    return 0;
}
