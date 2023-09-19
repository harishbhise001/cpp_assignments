#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date
{
private:
    int day,month,year;

public:
    Date();
    Date(int day, int month, int year);

    void set_day(int day);
    int get_day();

    void set_month(int month);
    int get_month();

    void set_year(int year);
    int get_year();

    void accept();
    void display();
};

#endif