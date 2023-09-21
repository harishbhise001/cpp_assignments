#include "../include/fraction.h"
#include "../include/myexcept.h"

Fraction* result = new Fraction();

Fraction::Fraction()
{
    this->numerator = 0;
    this->denominator = 1;
}

Fraction::Fraction(int numerator, int denominator)
{
    if (denominator == 0)
        throw DivideByZeroException();

    this->numerator = numerator;
    this->denominator = denominator;
}

void Fraction::set_numerator(int numerator)
{
    this->numerator = numerator;
}

void Fraction::set_denominator(int denominator)
{
    if (denominator == 0)
        throw DivideByZeroException();

    this->denominator = denominator;
}

void Fraction::display()
{
    cout<<"Fraction value : "<<this->numerator<<"/"<<this->denominator<<endl;
}

void Fraction::lowestForm()
{
    int num = this->numerator;
    int deno = this->denominator;

    while (num >= 1 && this->numerator % num == 1 && this->denominator % num == 1)
        num--;

    this->numerator /= num;
    this->denominator /= num;
}

float Fraction::decimalValue()
{
    return this->numerator / (float)this->denominator;
}

Fraction *Fraction::operator+(Fraction &f)
{
    result->set_numerator(this->numerator + f.numerator);
    result->set_denominator(this->denominator + f.denominator);
    return result;
}

Fraction *Fraction::operator-(Fraction &f)
{
    result->set_numerator(this->numerator - f.numerator);
    result->set_denominator(this->denominator - f.denominator);
    return result;
}

Fraction *Fraction::operator*(Fraction &f)
{
    result->set_numerator(this->numerator * f.numerator);
    result->set_denominator(this->denominator * f.denominator);
    return result;
}

Fraction *Fraction::operator/(Fraction &f)
{
    if(f.numerator == 0) throw DivideByZeroException();

    result->set_numerator(this->numerator / f.numerator);
    result->set_denominator(this->denominator / f.denominator);
    return result;
}

void Fraction::operator=(Fraction &f)
{
    this->numerator = f.numerator;
    this->denominator = f.denominator;
}

bool Fraction::operator==(Fraction &f)
{
    if(this->numerator = f.numerator && this->denominator == f.denominator) return true;
    return false;
}

bool Fraction::operator!=(Fraction &f)
{
    if(this->numerator != f.numerator || this->denominator != f.denominator) return true;
    return false;
}

bool Fraction::operator<(Fraction &f)
{
    if(this->decimalValue() < f.decimalValue()) return true;
    return false;
}

bool Fraction::operator>(Fraction &f)
{
    if(this->decimalValue() > f.decimalValue()) return true;
    return false;
}

Fraction::~Fraction()
{
    delete this;
}
