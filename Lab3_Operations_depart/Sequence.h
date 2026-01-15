#ifndef SEQUENCE_H
#define SEQUENCE_H
#include <list>
#include "Operation.h"

class Sequence
{
private:
	list<Operation*> operations;

public:
	void ajouterOperation(Operation* operation);
	Operation* recupererOperation();
};
#endif
