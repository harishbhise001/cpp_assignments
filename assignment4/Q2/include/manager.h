#ifndef MANAGER_H
#define MANAGER_H
#include "employee.h"

class Manager : virtual public Employee
{
private:
    float bonus;

public:
    Manager();
    Manager(int id, float sal, float bonus);

    void set_bonus(float bonus);
    float get_bonus();

    void accept();
    void display();

protected:
    void accept_manager();
    void display_manager();
};

#endif