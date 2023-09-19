#include "../include/distance.h"

int main()
{

    Distance d1;
    Distance d2;

    cout<<"\nTaking input in objects with overloaded >> operator : "<<endl;
    cin>>d1; // overloaded >> operator for Distance object
    cin>>d2;

    cout<<"\nDisplaying distance object on console with overloaded << operator "<<endl;
    cout<<d1; // overloaded << operator for Distance object
    cout<<d2; 

    cout<<"\nAfter adding two objects result is : "<<endl;
    //checking + operator on two objects
    Distance result = d1 + d2;
    cout<<result;

    //checking ++ operator on a object
    cout<<"\n++ operator on d1"<<endl;
    ++d1;
    cout<<d1;

    //checking -- operator on a object
    cout<<"\n-- operator on d2"<<endl;
    --d2;
    cout<<d2;

    // checking if two objects are equal or not
    cout<<"\n== overloaded operator"<<endl;
    cout<<d1; 
    cout<<d2; 
    bool res = (d1 == d2);
    cout<<"d1 and d2 are "<<(res ? "" : "not")<<" equal."<<endl;



    return 0;
}