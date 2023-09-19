#ifndef BOOK_H
#define BOOK_H

#include "shop.h"
#include <iostream>
using namespace std;

class Book : public Shop
{
private:
    const string book = "Book";
    string author;
    double bookPrice;
    double discount;

public:
    Book();
    Book(int id, string title, string author, double bookPrice, float discount);

    void acceptOrder();
    void displayOrder();

    double addDiscount();
    void calculateBill();
};

#endif