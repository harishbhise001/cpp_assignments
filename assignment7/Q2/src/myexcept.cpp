#include "../include/myexcept.h"

DivideByZeroException::DivideByZeroException()
{
    msg = "Cannot divide by zero. Denominator can't be 0.";
}

string DivideByZeroException::what()
{
    return msg;
}