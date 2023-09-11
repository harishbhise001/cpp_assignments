#ifndef BOX_H
#define BOX_H

#include <iostream>
using namespace std;

class Box
{
    int length;
    int breadth;
    int height;

public:

    Box(int length, int breadth, int height);
    void calculateVolume();
};

#endif