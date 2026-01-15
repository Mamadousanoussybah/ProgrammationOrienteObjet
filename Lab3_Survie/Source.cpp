#include <iostream>
#include "Session.h"

int main() 
{

    cout << " Nom et Prenom : Keita Saran Mady " << endl;
    cout << " Code Permanent : KEIS02060000 " << endl;
    cout << " ************************************ " << endl;
    cout << " Nom et Prenom : Bah Mamadou Sanoussy " << endl;
    cout << " Code Permanent : BAHM02080500  " << endl;
    cout << " ************************************ " << endl;

    int niveau;
    cout << "Entrez le niveau de la session: ";
    cin >> niveau;

    Session a2024("8PRO128", niveau);

    while (!a2024.terminer()) {
        cout << a2024;
        cout << "1. Avancer\n2. Reculer\n3. Gauche\n4. Droite\n";
        int choix;
        cout << " votre choix " << endl;
        cin >> choix;

        switch (choix) {
        case 1:  a2024.avancer(); break;
        case 2:  a2024.reculer(); break;
        case 3:  a2024.gauche(); break;
        case 4:  a2024.droite(); break;
        default: cout << "Choix invalide\n"; break;
        }
    }
    if (a2024.terminer())
    {
        cout << a2024.tirerConclusion() << endl;
    }
    return 0;
}
