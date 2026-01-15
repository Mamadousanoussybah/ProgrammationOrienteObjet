#ifndef VEHICULE_H
#define VEHICULE_H

#include <string>

using namespace std;

class Vehicule
{
public:
    inline virtual string type() = 0;
    inline virtual ~Vehicule() {}
    inline virtual string carburant() = 0;
};

#endif
