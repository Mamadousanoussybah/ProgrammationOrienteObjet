#ifndef BUILDEREXCEPTION_H
#define BUILDEREXCEPTION_H

#include <stdexcept>
using namespace std;

class BuilderException : public runtime_error {
public:
    BuilderException(const string& message) : runtime_error(message) {}
};

#endif
