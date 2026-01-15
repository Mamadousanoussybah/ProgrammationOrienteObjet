#ifndef CHARGEMENT_OPERATION_EXCEPTION_H
#define CHARGEMENT_OPERATION_EXCEPTION_H

#include "OperationException.h"

class ChargementOperationException : public OperationException
{
public:
    inline ChargementOperationException(char id)
        : OperationException("Impossible de charger l'operation {" + std::string(1, id) + "}") {}
};

#endif 
