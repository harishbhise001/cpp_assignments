#ifndef SALESMANAGER_H
#define SALESMANAGER_H
#include "manager.h"
#include "salesman.h"

class SalesManager : public Manager, public Salesman
{
public:
    SalesManager();
    SalesManager(int id, float sal, float bonus, float comm);

    void accept();
    void display();
};

#endif