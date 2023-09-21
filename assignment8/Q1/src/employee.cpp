#include "../include/employee.h"

Employee::Employee()
{
    this->id = 0;
    this->sal = 0;
}

Employee::Employee(int id, float sal)
{
    this->id = id;
    this->sal = sal;
}

void Employee::set_id(int id)
{
    this->id = id;
}

int Employee::get_id()
{
    return this->id;
}

void Employee::set_sal(float sal)
{
    this->sal = sal;
}

float Employee::get_sal()
{
    return this->sal;
}

void Employee::accept()
{
    cout<<"\nEnter id : ";
    cin>>this->id;

    cout<<"Enter sal : ";
    cin>>this->sal;
}

void Employee::display()
{
    cout<<"\n------------------"<<endl;
    cout<<"Id         : "<<this->id<<endl;
    cout<<"Salary     : "<<this->sal<<endl;
}