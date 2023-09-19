#include "../include/tape.h"

Tape::Tape()
{
    this->artist = "";
    this->tapePrice = 0;
    this->discount = 0;
}

Tape::Tape(int id, string title, string artist, double tapePrice, double discount) : Shop(id, title)
{
    this->artist = artist;
    this->tapePrice = tapePrice;
    this->discount = discount;
}

void Tape::acceptOrder()
{
    Shop::acceptOrder();

    cout<<"Enter artist : ";
    getline(cin,this->artist);

    cout<<"Enter price : ";
    cin>>this->tapePrice;

    cout<<"Enter discount : ";
    cin>>this->discount;

    this->calculateBill(); // To modify total price 

}

void Tape::displayOrder()
{
    cout<<"\n-----------------------------"<<endl;
    cout<<"------- Order Details -------\n"<<endl;
    cout<<"Product : "<<this->tape<<endl;
    
    Shop::displayOrder();

    cout<<"Artist  : "<<this->artist<<endl;
    cout<<"Price of \""<<this->title<<"\" : "<<this->tapePrice<<endl;
}

double Tape::addDiscount()
{
    // amount to be subtracted as a discount from price of an item
    double dis = ( this->tapePrice * this->discount ) / 100.0; 
    return dis;
}

void Tape::calculateBill()
{
    // Discounted amount
    double amount = this->tapePrice - this->addDiscount(); 

    // Updating total price by appending new amount
    this->setTotalPrice(amount); 
}
