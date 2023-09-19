#ifndef TAPE_H
#define TAPE_H

#include "shop.h"
#include <iostream>
using namespace std;

class Tape : public Shop
{
private:
    const string tape = "Tape";
    string artist;
    double tapePrice;
    double discount;

public:
    Tape();
    Tape(int id, string title, string artist,double tapePrice, double discount);

    void acceptOrder();
    void displayOrder();

    double addDiscount();
    void calculateBill();
};

#endif