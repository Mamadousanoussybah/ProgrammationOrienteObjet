#ifndef OPERATION_EXCEPTION_H
#define OPERATION_EXCEPTION_H

#include <exception>
#include <string>
using namespace std;

class OperationException : public exception 
{
private:
    string message;

public:
    inline OperationException(const string& msg) : message(msg) {}

    inline const string& getMessage() const
    {
        return message;
    }
};

#endif
