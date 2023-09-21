#ifndef MYEXCEPT_H
#define MYEXCEPT_H

#include <iostream>
#include <stdexcept>
using namespace std;

class DivideByZeroException : exception
{
private:
    string msg;

public:
    DivideByZeroException();
    string what();
};

#endif