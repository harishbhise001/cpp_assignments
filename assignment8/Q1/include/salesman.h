#ifndef SALESMAN_H
#define SALESMAN_H
#include "employee.h"

class Salesman : virtual public Employee
{
private:
    float comm;

public:
    Salesman();
    Salesman(int id, float sal, float comm);

    void set_comm(float comm);
    float get_comm();

    void accept();
    void display();

protected:
    void accept_salesman();
    void display_salesman();
};

#endif