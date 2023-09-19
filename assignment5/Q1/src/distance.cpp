#include "../include/distance.h"

Distance::Distance()
{
    this->feet = 0;
    this->inches = 0;
}

Distance::Distance(float feet, float inches)
{
    this->feet = feet;
    this->inches = inches;
}

Distance Distance::operator+(const Distance &d)
{
    Distance result;

    result.feet = this->feet + d.feet;
    result.inches = this->inches + d.inches;
    return result;
}

void Distance::operator++()
{
    ++this->inches;
}

bool operator == (const Distance &d1, const Distance &d2)
{
    // returning true if two objects are equal
    if (d1.feet == d2.feet && d1.inches == d2.inches)
        return true;
    return false;
}

void operator--(Distance &d)
{
    --d.inches;
}

ostream &operator<<(const ostream &o, const Distance &d)
{
    cout << d.feet << " feet " << d.inches << " inches" << endl;
    return cout;
}

istream &operator>>(istream &i, Distance &d)
{
    cout << "Enter feet and inches : ";
    cin >> d.feet >> d.inches;
    return i;
}
