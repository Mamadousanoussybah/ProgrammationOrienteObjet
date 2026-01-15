#ifndef DIVISION_H
#define DIVISION_H
#include "Operation.h"
#include "OperationException.h"

class Division : public Operation
{
public:
   inline Division(float operande1, float operande2) : Operation(operande1, operande2) {}

    inline void faireOperation() override
    {
        if (getOperande2() == 0)
        {
            throw OperationException("Division par zéro impossible!");
        }
        setResultat(getOperande1() / getOperande2());
    }
};
#endif
