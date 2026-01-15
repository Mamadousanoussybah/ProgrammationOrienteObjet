#pragma once
#include <list>
#include "Produit.h"
#include "ProduitA.h"
#include "ProduitB.h"
#include "ProduitC.h"
#include "ProduitD.h"
#include "ProduitE.h"

class Inventaire
{
public:
	Inventaire();
	~Inventaire();
	Inventaire(const Inventaire& inventaire);
	void ajouterProduit(Produit* produit, int idProduit);
	void ajouterProduit(ProduitA* produit);
	void ajouterProduit(ProduitB* produit);
	void ajouterProduit(ProduitC* produit);
	void ajouterProduit(ProduitD* produit);
	void ajouterProduit(ProduitE* produit);
	Produit* recupererProduit(int idProduit);
private:
	list<Produit*> produits[5];
};

