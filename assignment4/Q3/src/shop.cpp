#include "../include/shop.h"

double Shop::totalPrice = 0;

Shop::Shop()
{
    this->id = 0;
    this->title = "";
}

Shop::Shop(int id, string title)
{
    this->id = 0;
    this->title = title;
}

void Shop::acceptOrder()
{
    cout<<"\nEnter id : ";
    cin>>this->id;

    cout<<"Enter title : ";
    cin.ignore();
    getline(cin,this->title);
}

void Shop::displayOrder()
{
    cout<<"Id      : "<<this->id<<endl;
    cout<<"Title   : "<<this->title<<endl;
}

double Shop::getTotalPrice()
{
    return Shop::totalPrice;
}

void Shop::setTotalPrice(double amount)
{
    Shop::totalPrice += amount;
}
