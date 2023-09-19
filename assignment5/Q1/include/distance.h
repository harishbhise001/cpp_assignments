#ifndef DISTANCE_H
#define DISTANCE_H

#include <iostream>
using namespace std;

class Distance
{
private:
    float feet, inches;

public:

    Distance();

    Distance (float feet, float inches);

    Distance operator + (const Distance &d);
    void operator ++();

    friend bool operator == (const Distance &d1, const Distance &d2);
    friend void operator -- (Distance &d);

    friend ostream& operator << (const ostream &cout, const Distance &d);
    friend istream& operator >> (istream &cin, Distance &d);
};

#endif