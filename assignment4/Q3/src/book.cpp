#include "../include/book.h"

Book::Book()
{
    this->author = "";
    this->bookPrice = 0;
    this->discount = 0;
}

Book::Book(int id, string title, string author, double bookPrice, float discount) : Shop(id, title)
{
    this->author = author;
    this->bookPrice = bookPrice;
    this->discount = discount;
}

void Book::acceptOrder()
{
    Shop::acceptOrder();

    cout<<"Enter author : ";
    getline(cin,this->author);

    cout<<"Enter price of book : ";
    cin>>this->bookPrice;

    cout<<"Enter discount : ";
    cin>>this->discount;

    this->calculateBill();

}

void Book::displayOrder()
{
    cout<<"\n-----------------------------"<<endl;
    cout<<"------- Order Details -------\n"<<endl;
    cout<<"Product : "<<this->book<<endl;
    
    Shop::displayOrder();

    cout<<"Author  : "<<this->author<<endl;
    cout<<"Price of \""<<this->title<<"\" : "<<this->bookPrice<<endl;
}

double Book::addDiscount()
{
    double dis = ( this->bookPrice * this->discount ) / 100.0;
    return dis;
}

void Book::calculateBill()
{
    double amount = this->bookPrice - this->addDiscount();

    this->setTotalPrice(amount);
}


