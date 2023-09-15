#include "manager.h"

Manager::Manager()
{
    // Default constructor
}

Manager::Manager(int id, float sal, float bonus) : Employee(id, sal)
{
    this->bonus = bonus;
}

void Manager::set_bonus(float bonus)
{
    this->bonus = bonus;
}

float Manager::get_bonus()
{
    return  this->bonus;
}

void Manager::accept_manager()
{
    cout<<"\nEnter bonus : ";
    cin>>this->bonus;
}

void Manager::display_manager()
{
    cout<<"Bonus  : "<<this->bonus<<endl;
}

void Manager::accept()
{
    Employee::accept();
    this->accept_manager();
}

void Manager::display()
{
    Employee::display();
    this->display_manager();
}

