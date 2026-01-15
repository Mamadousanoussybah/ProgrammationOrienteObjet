#ifndef OPERATION_H
#define OPERATION_H
#include <cstdlib>
#include "OperationException.h"

class Operation 
{
private:
    float operande1;
    float operande2;
    float resultat;
    void validerOperande(float operande) const;

public:
   Operation(float operande1, float operande2);
   inline virtual void faireOperation() = 0;

   inline float getOperande1() const { return operande1; }
   inline float getOperande2() const { return operande2; }
   inline float getResultat() const { return resultat; }

protected:
    inline void setResultat(float resultat) { this->resultat = resultat; }
};
#endif
