#include "../include/manager.h"
#include "../include/salesman.h"
#include "../include/salesManager.h"

SalesManager::SalesManager()
{
    // Default constructor
}

SalesManager::SalesManager(int id, float sal, float bonus, float comm) : Manager(id,sal,bonus), Salesman(id,sal,comm)
{
    // Using constructor initialization list
}

void SalesManager::accept()
{
    Employee::accept();
    Manager::accept_manager();
    Salesman::accept_salesman();
}

void SalesManager::display()
{
    Employee::display();
    Manager::display_manager();
    Salesman::display_salesman();
}



