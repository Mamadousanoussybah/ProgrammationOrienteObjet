#include "Client.h"

using namespace std;

// Constructeur
Client::Client(string nom, int seuilQualite)
{
    Compteur::ajouterConstructeur();
    this->nom = nom;
    this->seuilQualite = seuilQualite;
    reception = nullptr;
    prepareCommande2024();// Préparer les commandes lors de la création
}

// Constructeur de copie
Client::Client(const Client& client)
    : nom(client.nom), seuilQualite(client.seuilQualite), reception(nullptr) {
    for (int i = 0; i < 4; ++i) {
        // Création d'une nouvelle commande à partir de celles existantes
        commandesA2024[i] = new Commande(*client.commandesA2024[i]);
    }
    Compteur::ajouterConstructeurCopie();
}

// Destructeur
Client::~Client() {
    // Supprimer toutes les commandes
    for (int i = 0; i < 4; ++i) {
        delete commandesA2024[i];
    }
    delete reception;
    Compteur::ajouterDestructeur();
}

// Prépare les commandes pour 2024
void Client::prepareCommande2024() {
    int quantites[4][5] =
    {
        {3, 3, 3, 3, 3},
        {5, 3, 3, 3, 10},
        {-1, 0, 5, 5, 4},
        {1, 2, 12, 0, 0}

    };
    // Exemple de préparation des commandes avec des quantités
    for (int i = 0; i < 4; ++i) 
    {
        commandesA2024[i] = new Commande(2024+i,quantites[i]);
      
    }
}

// Surcharge de l'opérateur <<
ostream& operator<<(ostream& out, const Client& client) 
{
    cout <<"CLIENT " << endl;
    cout << "Nom:" << client.nom << endl;
    cout<< "Seuil de qualite:"<< client.seuilQualite << endl;
    cout << "-----------------------------------" << endl;
    return out;
}

// Retourne une commande par ID
Commande Client::getCommande(int id) 
{
    if (id >= 0 && id < 4) 
    {
        return *commandesA2024[id];
    }
    throw out_of_range("Invalide");
    // Retourne nullptr si l'ID est invalide
}

// Retourne la réception
Reception* Client::getReception() {
    return reception;
}

// Retourne le seuil de qualité
int Client::getSeuilQualite() const
{
    return seuilQualite;
}

// Retourne le nom du client
string Client::getNom() {
    return nom;
}

// Recevoir une commande
void Client::recevoirCommande(Reception* reception)
{
    this->reception = reception; // Transférer le pointeur reçu
}

// Consommer les produits (supprimer la réception)
void Client::consommerProduits()
{
    delete reception; // Libérer la mémoire de la réception
    reception = nullptr; // Éviter les pointeurs pendants
}

// Calculer la satisfaction pour un produit
int Client::getSatisfactionProduit(int idProduit) 
{
    if (!reception) return 0; // Si pas de réception, retourner 0

    const list<Produit*>& produits = reception->getProduits(idProduit);
    int nombreProduits = reception->getQuantiteProduitsRecus(idProduit);
    if (nombreProduits == 0) return 0; // Si aucun produit, retourner 0

    int total = 0;
    for (Produit* produit : produits) 
    {
        int qualiteProduit = produit->evaluerQualite();
        if (qualiteProduit > seuilQualite)
        {
            total += 5;
        }
        else if (qualiteProduit == seuilQualite) 
        {
            total += 4;
        }
        else {
            total += 3;
        }
    }

    return (total >0) ? total / nombreProduits : 0; // Retourne la satisfaction moyenne
}

