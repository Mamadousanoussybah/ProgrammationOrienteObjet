#include <iostream>
#include "FabriqueToyota.h"
#include "FabriqueFord.h"

using namespace std;

int main()
{
    cout << "Nom et Prenom : Keita Saran Mady " << endl;
    cout << "Code Permanent : KEIS02060000 " << endl;
    cout << "************************************ " << endl;
    cout << "Nom et Prenom : Bah Mamadou Sanoussy " << endl;
    cout << "Code Permanent : BAHM02080500  " << endl;
    cout << "************************************ " << endl;

    int choixTypeVehicule;

    cout << "Entrez votre choix de vehicule (1-> Ford ou 2->Toyota) : ";
    cin >> choixTypeVehicule;
    cout << "*********************" << endl;

    FabriqueAbstraite* fabrique = nullptr;

    if (choixTypeVehicule == 1)
    {
        // Choix du type "Ford"
        fabrique = new FabriqueFord();  // Création de la fabrique pour les camions et voitures Ford
    }
    else if (choixTypeVehicule == 2)
    {
        // Choix du type "Toyota"
        fabrique = new FabriqueToyota();  // Création de la fabrique pour les camions et voitures Toyota
    }
    else
    {
        cout << "Choix invalide!" << endl;
        return 1;
    }

    // Création des véhicules à partir de la fabrique
    Vehicule* camion = fabrique->creerCamion();
    Vehicule* voiture = fabrique->creerVoiture();

    // Affichage des véhicules et carburant dans main
    cout << "Marque : " << (choixTypeVehicule == 1 ? "Ford" : "Toyota") << endl;
    cout << "*********************" << endl;
    cout << "Vos choix de vehicules" << endl;
    cout << "*********************" << endl;

    cout << "Modeles disponibles : " << endl;
    cout << "*********************" << endl;

    // Affichage du camion
    cout << camion->type() << " (" << camion->carburant() << " )" << endl;
    cout << "*********************" << endl;
    // Affichage de la voiture
    cout << voiture->type() <<" (" << voiture->carburant() << " )" << endl;
    cout << "*********************" << endl;
 

    // Libération de la mémoire
    delete fabrique;
    delete camion;
    delete voiture;

    return 0;
}
