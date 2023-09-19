#ifndef PERSON_H
#define PERSON_H

#include "date.h"
#include <iostream>
using namespace std;

class Person
{
private:
    string name, addr;
    Date birth_date;

public:
    Person();
    Person(string name, string addr, Date birth_date);

    void set_name(string name);
    string get_name();

    void set_addr(string addr);
    string get_addr();

    void set_birth_date(Date birth_date);
    Date get_birth_date();

    void accept();
    void display();
};

#endif