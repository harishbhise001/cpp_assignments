#ifndef SHOP_H
#define SHOP_H

#include <iostream>
using namespace std;

class Shop
{
private:
    int id;
    static double totalPrice;

protected:
    string title;

public:
    Shop();
    Shop(int id, string title);

    virtual void acceptOrder();
    virtual void displayOrder();

    virtual double addDiscount() = 0;
    virtual void calculateBill() = 0;

    static double getTotalPrice();
    void setTotalPrice(double amount);

};

#endif