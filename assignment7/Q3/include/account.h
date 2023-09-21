#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "enum.h"
#include <iostream>
using namespace std;

class Account
{
private:
    int id;
    account_type type;
    double balance;

public:
    Account();
    Account(int id, account_type type);

    void accept();
    void display();

    void set_id(int id);
    void set_type(account_type type);

    int get_id();
    account_type get_type();

    double get_balance();

    void deposite(double amount);
    void withdraw(double amount);
};

#endif