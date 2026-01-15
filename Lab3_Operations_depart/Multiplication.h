#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H
#include "Operation.h"
#include "OperationException.h"

class Multiplication : public Operation
{
public:
    inline Multiplication(float operande1, float operande2) : Operation(operande1, operande2) {}

    inline void faireOperation() override
    {
        float result = getOperande1() * getOperande2();
        if (result > 1000000) 
        {
            setResultat(0);
            throw OperationException("Le resultat de la multiplication est trop eleve");
        }
        setResultat(result);
    }
};
#endif 