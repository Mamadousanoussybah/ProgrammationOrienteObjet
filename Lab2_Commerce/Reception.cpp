#include "Reception.h"

// Constructeur
Reception::Reception(BonCommande* bonCommande) : bonCommande(bonCommande) { Compteur::ajouterConstructeur(); }

// Destructeur
Reception::~Reception() 
{

    // Supprimer tous les produits dans chaque liste
    for (int i = 0; i < 5; ++i) 
    {
        for (Produit* produit : produits[i]) 
        {
            delete produit; // Suppression de chaque produit
        }
    }
    delete bonCommande; // Supprimer le bon de commande
    Compteur::ajouterDestructeur();
}

// Surcharge de l'opérateur <<
ostream& operator<<(ostream& out, const Reception& reception) 
{
    out << "RECEPTION:\n";
    out << "Bon de Commande : " << reception.bonCommande->getIdBonCommande() << "\n"; // Assurez-vous que getIdBonCommande est défini dans BonCommande

    for (int i = 0; i < 5; ++i)
    {
        //out << "Produits de type " << i << ":\n";
        for (Produit* produit : reception.produits[i]) 
        {
            cout <<" -Produit recu -->" <<* produit << "\n"; // Assurez-vous que l'opérateur << est défini pour Produit
        }
    }
    return cout;
}

// Ajoute un produit à la réception
void Reception::ajouterProduit(Produit* produit, int id) 
{
    if (id >= 0 && id < 5) 
    {
        produits[id].push_back(produit); // Ajoute le produit à la liste correspondante
    }
}

// Retourne le bon de commande
BonCommande* Reception::getBonCommande() const 
{
    return bonCommande;
}

// Retourne la quantité de produits reçus pour un ID donné
int Reception::getQuantiteProduitsRecus(int id) const 
{
    if (id>=0 && id<5)
    {
        return produits[id].size(); // Assurez-vous que getQuantiteProduits est défini dans BonCommande
    }
    return 0; // Retourne 0 si bonCommande est null
}


// Retourne la liste des produits pour un type donné
const list<Produit*> &Reception::getProduits(int idProduit)const
{
    if (idProduit >= 0 && idProduit < 5)
    {
        return produits[idProduit]; // Retourne la liste des produits pour ce type
    }
    static list<Produit*> emptyList; // Liste vide si ID invalide
    return emptyList;
}
