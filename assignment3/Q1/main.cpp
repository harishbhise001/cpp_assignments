/*
Q1. Write a class to find volume of a Cylinder by using following
members. (volume of Cylinder=3.14 * radius * radius *height) ( use
modular approach)
Class having following member functions:
Cylinder()
Cylinder(double radius, double height)
getRadius()
setRadius()
getHeight()
setHeight()
getVolume()
printVolume()
Initialize members using constructor member initializer list.

*/

#include "cylinder.h"

int menu()
{
    int choice;
    cout<<"\n0 = Exit"<<endl;
    cout<<"1 = Initialize"<<endl;
    cout<<"2 = Set Radius"<<endl;
    cout<<"3 = Get Radius"<<endl;
    cout<<"4 = Set Height"<<endl;
    cout<<"5 = Get Height"<<endl;
    cout<<"6 = Print Volume"<<endl;
    cout<<"Enter choice : ";
    cin>>choice;
    return choice;
}

#include "cylinder.h"

int main()
{

    Cylinder *ptr_cylinder;
    int choice;

    while(choice = menu())
    {
        switch(choice)
        {
            case 1:
                {Cylinder c1;
                ptr_cylinder = &c1;
                break;}
            case 2: {ptr_cylinder->setRadius(); break;}
            case 3: {cout<<"\nRadius : "<<ptr_cylinder->getRadius()<<endl; break;}
            case 4: {ptr_cylinder->setHeight(); break;}
            case 5: {cout<<"\nHeight : "<<ptr_cylinder->getHeight()<<endl; break;}
            case 6: {ptr_cylinder->printVolume(); break;}
            default: {cout<<"\nWrong choice ..."<<endl; break;}
        }
    }

    return 0;
}