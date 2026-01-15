#include <iostream>
#include <fstream>
#include "Sequence.h"
#include "OperationFactory.h"
#include "ChargementOperationException.h"
#include "OperationException.h"

using namespace std;

void afficherInformation()
{
    cout << "===================================================" << endl;
    cout << "||  Date de creation:         02/12/2024          ||" << endl;
    cout << "||  Date de Modification:     05/12/2024          ||" << endl;
    cout << "||  Travail realiser par:                         ||" << endl;
    cout << "||  Keita Saran Mady        -> KEIS02060000       ||" << endl;
    cout << "||  Bah Mamadou Sanoussy    -> BAHM02080500       ||" << endl;
    cout << "====================================================" << endl;
    cout << endl;
}


int main() 
{
    afficherInformation();

    // Redirection du flux d'erreur par défaut
    ofstream errorFile("error.log", ios::app);
    if (!errorFile) 
    {
        cerr << "Impossible d'ouvrir le fichier error.log" << endl;
        return 1;
    }
    cerr.rdbuf(errorFile.rdbuf());

    Sequence sequence;
    OperationFactory opFactory;
    char choix = '+';
    float op1, op2;

    // SECTION D'INITIALISATION DES OPERATIONS
    cout << "Lecture des choix..." << endl;
    try 
    {
        cin >> choix >> op1 >> op2;
        while (choix != 'q') 
        {
            cout << "(" << choix << "," << op1 << "," << op2 << ")" << endl;
            sequence.ajouterOperation(opFactory.createOperation(choix, op1, op2));
            cout << "Lecture des choix..." << endl;
            cin >> choix >> op1 >> op2;
        }
    }
    catch (const OperationException& eo)
    {
        cerr << eo.getMessage() << endl;
        cout << eo.getMessage() << endl;
    }

    cout << "FIN DES LECTURES" << endl;

    cout << "DEBUT DES OPERATIONS" << endl;
    Operation* operationCourante = sequence.recupererOperation();
    while (operationCourante != nullptr)
    {
        try
        {
            operationCourante->faireOperation();
            cout << "(" << operationCourante->getOperande1() << ","
                << operationCourante->getOperande2() << ","
                << operationCourante->getResultat() << ")" << endl;
        }
        catch (const OperationException& oe) 
        {
            cerr << oe.getMessage() << endl;
            cout << oe.getMessage() << endl;
        }
        operationCourante = sequence.recupererOperation();
    }

    // Opérations supplémentaires
    try 
    {
        operationCourante = sequence.recupererOperation();
        if (operationCourante == nullptr) 
        {
            cout << "Aucune operation à effectuer." << endl;
        }
        else 
        {
            operationCourante->faireOperation();
        }
    }
    catch (const exception& e) 
    {
        cerr << "Erreur : " << e.what() << endl;
    }

    return 0;
}
