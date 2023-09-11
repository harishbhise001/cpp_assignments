#ifndef CYLINDER_H
#define CYLINDER_H

#include<iostream>
using namespace std;

class Cylinder
{
    float radius,height;
    static const float pi;

    public:

    Cylinder();
    Cylinder(float radius, float height);

    void setRadius();
    float getRadius();
    void setHeight();
    float getHeight();
    float getVolume();
    void printVolume();
};

#endif