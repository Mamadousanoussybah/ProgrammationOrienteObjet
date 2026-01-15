#include<iostream>
#include <list>
#include<string>
/*----------------------*/
#include "Compteur.h"
/*----------------------*/
#include "Composant.h"
#include "Composant1.h"
#include "Composant2.h"
#include "Composant3.h"
#include "Composant4.h"
#include "Composant5.h"
/*----------------------*/
#include"Produit.h"
#include"ProduitA.h"
#include"ProduitB.h"
#include"ProduitC.h"
#include"ProduitD.h"
#include"ProduitE.h"
/*----------------------*/
#include"Commande.h"
/*----------------------*/
#include "Inventaire.h"
/*----------------------*/
#include"Fournisseur.h"
/*----------------------*/
#include"Entrepot.h"
/*----------------------*/
#include"BonCommande.h"
/*----------------------*/
#include"Reception.h"
/*----------------------*/
#include"Client.h"
/*----------------------*/
#include"RapportAssuranceQualite.h"
/*----------------------*/
#include"Entreprise.h"




using namespace std;



void afficherInformation();
void testComposants();
void testProduits();
void testCommandes();
void testInventaire();
void testFournisseur();
void testEntrepot();
void testBonCommande();
void testReception();
void testClient();
void commerce();

void afficherInformation()
{
	cout << endl << endl;
	cout << endl << "-------------------------------" << endl
		<< " NB constructeurs : " <<
		Compteur::getNbConstructeur() << endl
		<< " NB constructeurs copie : " << Compteur::getNbConstructeurCopie() << endl
		<< " NB destructeurs : " << Compteur::getNbDestructeur() << endl;
	cin.get();


}

int main()
{
	commerce();
	//testProduits();
	//testComposants();
	//testCommandes();
	//testInventaire();
	//testFournisseur();
	//testEntrepot();
	//testBonCommande();
	//testReception();
	//testClient();
	//RapportAssuranceQualite* rapport = new RapportAssuranceQualite(); delete rapport;
	//Entreprise* entreprise = new Entreprise(); delete entreprise;
	afficherInformation();

	return 0;
}

/*-------------------------->   COMPOSANT  <---------------------------------------------------------*/

void testComposants()
{


	Composant1* c1 = new Composant1(98, 45); // Appel du 

	Composant2* c2 = new Composant2(96, 33); // Appel du 

	Composant3* c3 = new Composant3(22); // Appel du 

	Composant4* c4 = new Composant4(100); // Appel du 

	Composant5* c5 = new Composant5(2, 77, 100); // Appel du 

	Composant1 cc(*c1); // Appel du constructeur par copie
	cout << "cc : " << cc.getNom() << "/" << cc.getPoids() << "/" <<
		cc.getPrix() << "/" << cc.getQualite() << endl;
	list<Composant*> composants;
	composants.push_back(c1);

	composants.push_back(c2);

	composants.push_back(c3);
	composants.push_back(c4);
	composants.push_back(c5);
	// Affichage de chaque composant
	for (Composant* composant : composants) // 

		cout << composant->getNom() << "/" << composant->getPoids() <<
		"/" << composant->getPrix() << "/" << composant->getQualite() << endl;
	// Suppression de chaque composant
	while (!composants.empty())
	{
		Composant* composant = composants.front(); // 

		composants.pop_front();

		// Il est retiré de la liste
		delete composant;
		// Maintenant on le supprime pour libérer la mémoire
	}

	cout << "----------------------------------------------------------------------------------" << endl;
}


/*-------------------------->   PRODUIT  <---------------------------------------------------------*/

void testProduits()
{
	cout << "-----------------------------------------------------------------------------------------" << endl;
	cout << endl;
	Composant1* c1 = new Composant1(98, 45); // Appel du 

	Composant2* c2 = new Composant2(96, 33); // Appel du 

	Composant3* c3 = new Composant3(22); // Appel du 

	Composant4* c4 = new Composant4(100); // Appel du 

	Composant5* c5 = new Composant5(2, 77, 100); // Appel du 

	ProduitA produitA;
	// Appel du constructeur
	produitA.ajouterComposant(c1);
	produitA.ajouterComposant(c2);
	produitA.ajouterComposant(c3);
	ProduitB produitB;
	// Appel du constructeur
	produitB.ajouterComposant(c4);
	produitB.ajouterComposant(c5);
	ProduitC produitC;
	// Appel du constructeur
	produitC.ajouterComposant(c1->clone());
	ProduitD produitD;
	// Appel du constructeur
	produitD.ajouterComposant(c2->clone());
	ProduitE produitE;
	// Appel du constructeur
	produitE.ajouterComposant(c3->clone());
	ProduitA* produitACC = new ProduitA(produitA); // Appel du 

	ProduitB produitBCC(produitB); // 

	list<Produit*> mesProduits;
	mesProduits.push_back((Produit*)&produitA);
	mesProduits.push_back((Produit*)&produitB);
	mesProduits.push_back((Produit*)&produitC);
	mesProduits.push_back((Produit*)&produitD);
	mesProduits.push_back((Produit*)&produitE);
	mesProduits.push_back((Produit*)produitACC);
	mesProduits.push_back((Produit*)&produitBCC);
	for (Produit* produit : mesProduits)
		cout << *produit << endl; // Validation 

	delete produitACC;


	cout << "----------------------------------------------------------------------------------" << endl;
}

/*-------------------------->   COMMANDE  <---------------------------------------------------------*/

void testCommandes()
{
	cout << endl;
	cout << "COMMANDE" << endl;
	int quantites[5] = { 2, 4, 6, 8, 10 };
	Commande* c1 = new Commande(12345, quantites);
	//Commande cc(*c1);
	int quantites2[5] = { -2, 0, 6, 18, 10093498 };
	Commande c2(67890, quantites2);
	cout << *c1 << endl;
	//cout << cc << endl;
	cout << c2 << endl;
	cout << c2.getNoCommande() << "/" << c2.getQuantiteProduit(3) << endl;
	delete c1;


	cout << "----------------------------------------------------------------------------------" << endl;
}

/*-------------------------->   INVENTAIRE  <---------------------------------------------------------*/

void testInventaire()
{
	cout << endl;
	Inventaire inventaire;
	inventaire.ajouterProduit(new ProduitA());
	inventaire.ajouterProduit(new ProduitA());
	inventaire.ajouterProduit(new ProduitA());
	inventaire.ajouterProduit(new ProduitB());
	inventaire.ajouterProduit(new ProduitB());
	inventaire.ajouterProduit(new ProduitC());
	inventaire.ajouterProduit(new ProduitD());
	inventaire.ajouterProduit(new ProduitE());
	Inventaire* inventaireCC = new Inventaire(inventaire);
	Produit* produits[6]{};
	produits[0] = inventaire.recupererProduit(0); // un produitA
	produits[1] = inventaire.recupererProduit(0); // un produitA
	produits[2] = inventaire.recupererProduit(1); // un produitB
	produits[3] = inventaire.recupererProduit(2); // un produitC
	produits[4] = inventaire.recupererProduit(3); // un produitD
	produits[5] = inventaire.recupererProduit(4); // un produitE
	Produit* produit = inventaire.recupererProduit(0);
	ProduitA* produitCopie = new ProduitA(*((ProduitA*)produit));
	produit->ajouterComposant(new Composant1(100, 20));
	produit->ajouterComposant(new Composant2(90, 50));
	produit->ajouterComposant(new Composant5(10, 85, 30));
	cout << "ORIGINAL --> " << *produit << endl;
	cout << "COPIE --> " << *produitCopie << endl;
	delete produit;
	delete produitCopie;
	for (Produit* produit : produits)
		cout << *produit << endl;
	for (int x = 0; x < 6; x++)
		delete produits[x];
	delete inventaireCC;


	cout << "----------------------------------------------------------------------------------" << endl;
}
/*-------------------------->   FOURNISSEUR  <---------------------------------------------------------*/

void testFournisseur()
{
	Fournisseur fournisseur;
	list<Composant*> composants1 = fournisseur.commanderComposant(0, 3);
	list<Composant*> composants2 = fournisseur.commanderComposant(1, 3);
	list<Composant*> composants3 = fournisseur.commanderComposant(2, 3);
	list<Composant*> composants4 = fournisseur.commanderComposant(3, 3);
	list<Composant*> composants5 = fournisseur.commanderComposant(4, 3);
	Fournisseur fournisseurCC(fournisseur);
	Composant* composant;
	for (int x = 0; x < 3; x++)
	{
		composant = composants1.front();
		cout << composant->getNom() << "/" << composant->getPoids() <<
			"/" << composant->getQualite() << "/" << composant->getPrix() << endl;
		composants1.pop_front();
		delete composant;
		composant = composants2.front();
		cout << composant->getNom() << "/" << composant->getPoids() <<
			"/" << composant->getQualite() << "/" << composant->getPrix() << endl;
		composants2.pop_front();
		delete composant;
		composant = composants3.front();
		cout << composant->getNom() << "/" << composant->getPoids() <<
			"/" << composant->getQualite() << "/" << composant->getPrix() << endl;
		composants3.pop_front();
		delete composant;
		composant = composants4.front();
		cout << composant->getNom() << "/" << composant->getPoids() <<
			"/" << composant->getQualite() << "/" << composant->getPrix() << endl;
		composants4.pop_front();
		delete composant;
		composant = composants5.front();
		cout << composant->getNom() << "/" << composant->getPoids() <<
			"/" << composant->getQualite() << "/" << composant->getPrix() << endl;
		composants5.pop_front();
		delete composant;


	}


	cout << "----------------------------------------------------------------------------------" << endl;
}

/*-------------------------->   ENTREPOT  <---------------------------------------------------------*/

void testEntrepot()
{
	Entrepot entrepot;
	entrepot.ajouterComposant(new Composant1(100, 80), 0);
	entrepot.ajouterComposant(new Composant2(99, 81), 1);
	list<Composant*> maListeComposants4;
	maListeComposants4.push_back(new Composant4(99));
	maListeComposants4.push_back(new Composant4(98));
	maListeComposants4.push_back(new Composant4(97));
	maListeComposants4.push_back(new Composant5(3, 90, 30));
	entrepot.ajouterComposants(maListeComposants4, 3);
	Entrepot entrepotCC(entrepot);
	entrepotCC.ajouterComposant(new Composant3(1000), 2);
	for (int id = 0; id < 5; id++)
		while (entrepotCC.getQuantiteComposants(id) > 0)
		{
			Composant* monComposant =
				entrepotCC.recupererComposant(id);
			cout << "mon composant " << monComposant->getNom() <<
				endl;
			delete monComposant;
		}

	cout << "----------------------------------------------------------------------------------" << endl;
}

/*-------------------------->   BON COMMANDE  <---------------------------------------------------------*/

void testBonCommande()
{
	int quantites[] = { 1,2,3,4,5 };
	Commande* maCommande = new Commande(1000, quantites);
	BonCommande* bonCommande = new BonCommande(128, maCommande);
	bonCommande->ajouterProduits(5, 0);
	bonCommande->ajouterProduits(4, 1);
	bonCommande->ajouterProduits(3, 2);
	bonCommande->ajouterProduits(2, 3);
	bonCommande->ajouterProduits(1, 4);
	cout << *bonCommande << endl;
	BonCommande bonCommandeCC(*bonCommande);
	cout << bonCommandeCC << endl;
	delete bonCommande;
	delete maCommande;


	cout << "----------------------------------------------------------------------------------" << endl;
}

/*-------------------------->   RECEPTION  <---------------------------------------------------------*/

void testReception()
{
	int quantites[] = { 1,2,3,4,5 };
	Commande* maCommande = new Commande(1000, quantites);
	BonCommande* bonCommande = new BonCommande(128, maCommande);

	bonCommande->ajouterProduits(5, 0);
	bonCommande->ajouterProduits(4, 1);
	bonCommande->ajouterProduits(3, 2);
	bonCommande->ajouterProduits(2, 3);
	bonCommande->ajouterProduits(1, 4);

	Reception reception(bonCommande);

	reception.ajouterProduit(new ProduitA(), 0);
	reception.ajouterProduit(new ProduitA(), 0);
	reception.ajouterProduit(new ProduitA(), 0);
	reception.ajouterProduit(new ProduitA(), 0);
	reception.ajouterProduit(new ProduitB(), 1);
	reception.ajouterProduit(new ProduitB(), 1);
	reception.ajouterProduit(new ProduitB(), 1);
	reception.ajouterProduit(new ProduitC(), 2);
	reception.ajouterProduit(new ProduitC(), 2);
	reception.ajouterProduit(new ProduitD(), 3);
	reception.ajouterProduit(new ProduitD(), 3);
	reception.ajouterProduit(new ProduitE(), 4);

	cout << reception << endl;
	cout << "--------------------------------------" << endl;

	for (Produit* produit : reception.getProduits(3))
		cout << *produit << endl;

	for (int id = 0; id < 5; id++)
		cout << "Quantite recue {" << id << "} --> " <<
		reception.getQuantiteProduitsRecus(id) << endl;

	delete maCommande;
	cout << "----------------------------------------------------------------------------------" << endl;
}

/*-------------------------->   Client <---------------------------------------------------------*/

void testClient()
{
	Client client("test", 98);
	Commande commande = client.getCommande(0);
	BonCommande* bonCommande = new BonCommande(128, &commande);

	bonCommande->ajouterProduits(3, 0);
	bonCommande->ajouterProduits(3, 1);
	bonCommande->ajouterProduits(3, 2);
	bonCommande->ajouterProduits(3, 3);
	bonCommande->ajouterProduits(3, 4);
	Reception* reception = new Reception(bonCommande);
	/* Creation des composants et des produits pour le calcul de la qualité */
	Composant1* c1 = new Composant1(98, 45);
	Composant2* c2 = new Composant2(96, 33);
	Composant3* c3 = new Composant3(22);
	Composant4* c4 = new Composant4(100);
	Composant5* c5 = new Composant5(2, 77, 100);
	ProduitA produitA;
	produitA.ajouterComposant(c1);
	produitA.ajouterComposant(c2);
	produitA.ajouterComposant(c3);
	ProduitB produitB;
	produitB.ajouterComposant(c4);
	produitB.ajouterComposant(c5);
	ProduitC produitC;
	produitC.ajouterComposant(new Composant1(*c1));
	ProduitD produitD;
	produitD.ajouterComposant(new Composant2(*c2));
	ProduitE produitE;
	produitE.ajouterComposant(new Composant3(*c3));
	reception->ajouterProduit(new ProduitA(produitA), 0);
	reception->ajouterProduit(new ProduitA(produitA), 0);
	reception->ajouterProduit(new ProduitA(produitA), 0);
	reception->ajouterProduit(new ProduitB(produitB), 1);
	reception->ajouterProduit(new ProduitB(produitB), 1);
	reception->ajouterProduit(new ProduitB(produitB), 1);
	reception->ajouterProduit(new ProduitC(produitC), 2);
	reception->ajouterProduit(new ProduitC(produitC), 2);
	reception->ajouterProduit(new ProduitC(produitC), 2);
	reception->ajouterProduit(new ProduitD(produitD), 3);
	reception->ajouterProduit(new ProduitD(produitD), 3);
	reception->ajouterProduit(new ProduitD(produitD), 3);
	reception->ajouterProduit(new ProduitE(produitE), 4);
	reception->ajouterProduit(new ProduitE(produitE), 4);
	reception->ajouterProduit(new ProduitE(produitE), 4);
	client.recevoirCommande(reception);
	cout << client << endl;
	cout << client.getCommande(0).getNoCommande() << endl;
	cout << client.getReception()->getBonCommande()->getCommande()->getNoCommande() << endl;
	cout << client.getSatisfactionProduit(0) << endl;
	client.consommerProduits();

}
/*-------------------------->   COMMERCE <---------------------------------------------------------*/

void commerce()
{
	Entreprise entreprise;
	Client client("ROGER", 90);
	cout << client << endl;

	for (int x = 0; x < 4; x++)
	{
		Commande commande(client.getCommande(x));
		cout << commande << endl;

		BonCommande* bonCommande = entreprise.traiterCommande(commande);
		cout << *bonCommande << endl;

		Reception* reception =
			entreprise.recupererCommande(bonCommande);
		cout << *reception << endl;

		client.recevoirCommande(reception);
		RapportAssuranceQualite aq;
		entreprise.validerSatisfaction(aq, client);
		cout << aq.genererRapport(client) << endl;

		client.consommerProduits();
	}
}



