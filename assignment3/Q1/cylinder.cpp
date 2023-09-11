#include "cylinder.h"

const float Cylinder::pi = 3.14;

Cylinder::Cylinder()
{
    setRadius();
    setHeight();
}

Cylinder::Cylinder(float radius, float height)
{
    this->radius = radius;
    this->height = height;
}

void Cylinder::setRadius()
{
    cout<<"\nEnter radius : ";
    cin>>this->radius;
}

float Cylinder::getRadius()
{
    return this->radius;
}

void Cylinder::setHeight()
{
    cout<<"Enter height : ";
    cin>>this->height;
}

float Cylinder::getHeight()
{
    return this->height;
}

float Cylinder::getVolume()
{
    float volume = Cylinder::pi * getRadius() * getRadius() * getHeight();
    return volume;
}

void Cylinder::printVolume()
{
    cout<<"\nVolume of a cylinder is "<<getVolume()<<endl;
}