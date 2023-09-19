#include "../include/date.h"

Date::Date()
{
    this->day = 0;
    this->month = 0;
    this->year = 0;
}

Date::Date(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::set_day(int day) { this->day = day;}
int Date::get_day() { return this->day;}

void Date::set_month(int month) { this->month = month;}
int Date::get_month() { return this->month;}

void Date::set_year(int year) { this->year = year;}
int Date::get_year() { return this->year;}

void Date::accept()
{
    cout<<"\nAccepting Date : "<<endl;
    cout<<"Enter day : ";
    cin>>this->day;
    cout<<"Enter month : ";
    cin>>this->month;
    cout<<"Enter year : ";
    cin>>this->year;
}

void Date::display()
{
    cout<<this->day<<"-"<<this->month<<"-"<<this->year<<endl;
}