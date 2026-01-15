#ifndef SOUSTRACTION_H
#define SOUSTRACTION_H
#include "Operation.h"
#include "OperationException.h"

class Soustraction : public Operation
{
public:
    inline Soustraction(float operande1, float operande2) : Operation(operande1, operande2) {}

    inline void faireOperation() override
    {
        float result = getOperande1() - getOperande2();
        if (result == 0) 
        {
            throw OperationException("Le resultat de la soustraction est de 0");
        }
        setResultat(result);
    }
};
#endif