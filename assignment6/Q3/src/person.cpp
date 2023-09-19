#include "../include/person.h"

Person::Person()
{
    this->name  = "";
    this->addr = "";
}

Person::Person(string name, string addr, Date birth_date)
{
    this->name = name;
    this->addr = addr;
    this->birth_date = birth_date;
}

void Person::set_name(string name) { this->name = name;}
string Person::get_name() { return this->name;}

void Person::set_addr(string addr) { this->addr = addr;}
string Person::get_addr() { return this->addr;}

void Person::set_birth_date(Date birth_date) {this->birth_date = birth_date;}
Date Person::get_birth_date() { return this->birth_date;}

void Person::accept()
{
    cout<<"\nEnter name : ";
    cin>>this->name;
    cout<<"Enter address : ";
    cin>>this->addr;
    cout<<"Enter birth date : "<<endl;
    birth_date.accept();
}

void Person::display()
{
    cout<<"\nName         : "<<this->name<<endl;
    cout<<"Address      : "<<this->addr<<endl;
    cout<<"Birth date   : ";
    birth_date.display();
}