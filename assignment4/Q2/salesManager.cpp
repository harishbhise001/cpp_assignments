#include "manager.h"
#include "salesman.h"
#include "salesManager.h"

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
    Manager::accept();
    Salesman::accept();
}

void SalesManager::display()
{
    Manager::display();
    Salesman::display();
}

