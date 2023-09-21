#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <iostream>
using namespace std;

class insufficients_funds
{
private:
    int accid;
    double curr_balance;
    double withdraw_amount;

public:
    insufficients_funds(int accid, double curr_balance, double withdraw_amount);
    void display();
};

class InvalidValue
{
private:
    string error;

public:
    InvalidValue();
    InvalidValue(string error);

    void display();
};

#endif