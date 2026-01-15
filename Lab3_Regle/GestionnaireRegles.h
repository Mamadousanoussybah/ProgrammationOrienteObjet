#include "Regle.h"
#include "Regle1.h"
#include "Regle2.h"
#include "Regle3.h"
#include "RegleComplexe.h"  // Assurez-vous que cette classe existe.


class GestionnaireRegles
{
public:
	 Regle1* getRegle1(){ return new Regle1(); }
	 Regle2* getRegle2(){ return new Regle2(); }
	 Regle3* getRegle3(){ return new Regle3(); }
	 Regle* getRegle(int idRegle);
	 Regle* getRegleComplexe() { return new RegleComplexe(); }
private:

};
