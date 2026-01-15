#ifndef ADDITION_H
#define ADDITION_H
#include "Operation.h"

class Addition : public Operation 
{
public:
    inline Addition(float operande1, float operande2) : Operation(operande1, operande2) {}

    inline void faireOperation() override
    {
        setResultat(abs(getOperande1()) + abs(getOperande2()));
    }
};
#endif