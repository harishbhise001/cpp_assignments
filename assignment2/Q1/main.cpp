/*
Q1. Write a menu driven program to calculate volume of the box.
Provide necessary constructors.  
*/

#include "box.h"

int menu()
{
    int choice;
    cout<<"0 = Exit"<<endl;
    cout<<"1 = Calculate Volume"<<endl;
    cout<<"\nEnter choice : ";
    cin>>choice;
    return choice;
}

int main()
{

    int length, breadth, height, choice;

    while(choice = menu())
    {
        switch(choice)
        {
            case 1:
                
                {cout<<"Enter length, breadth and height : ";
                cin>>length>>breadth>>height;
                
                Box b1(length,breadth,height);
                b1.calculateVolume();
                break;}

            default:
                cout<<"xxxxxxxxxxxxxxx"<<endl;
                cout<<"Wrong choice...\n";
                cout<<"xxxxxxxxxxxxxxx\n"<<endl;
        }
    }

    return 0;
}