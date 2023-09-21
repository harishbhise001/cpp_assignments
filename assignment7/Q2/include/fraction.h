#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction();
    Fraction(int numerator, int denominator);

    void set_numerator(int numerator);
    void set_denominator(int denominator);
    void display();

    void lowestForm();
    float decimalValue();

    Fraction* operator + (Fraction &f);
    Fraction* operator - (Fraction &f);
    Fraction* operator * (Fraction &f);
    Fraction* operator / (Fraction &f);
    void operator = (Fraction &f);
    bool operator == (Fraction &f);
    bool operator != (Fraction &f);
    bool operator < (Fraction &f);
    bool operator > (Fraction &f);

    ~Fraction();
    
};

#endif 