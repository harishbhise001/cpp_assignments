#include "salesman.h"

Salesman::Salesman()
{
    // Default constructor
}

Salesman::Salesman(int id, float sal, float comm) :Employee(id, sal)
{
    this->comm = comm;
}

void Salesman::set_comm(float comm)
{
    this->comm = comm;
}

float Salesman::get_comm()
{
    return this->comm;
}

void Salesman::accept_salesman()
{
    cout<<"\nEnter commission : ";
    cin>>this->comm;
}

void Salesman::display_salesman()
{
    cout<<"Commission : "<<this->comm<<endl;
}

void Salesman::accept()
{
    Employee::accept();
    this->accept_salesman();
}

void Salesman::display()
{
    Employee::display();
    this->display_salesman();
}
