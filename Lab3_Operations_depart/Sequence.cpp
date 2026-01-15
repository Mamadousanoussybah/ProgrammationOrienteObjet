#include<iostream>
#include "Sequence.h"
using namespace std;

void Sequence::ajouterOperation(Operation* operation)
{
	if (operation == nullptr) 
	{
		throw invalid_argument("L'opération ne peut être nulle");
	}
	operations.push_back(operation);
}

Operation* Sequence::recupererOperation()
{
	if (operations.empty()) 
	{
		return nullptr;  // Retourne nullptr si la séquence est vide
	}
	Operation* courante = operations.back();
	operations.pop_back();
	return courante;
}