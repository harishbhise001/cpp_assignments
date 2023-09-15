#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee 
{
private:
    int id;
    float sal;

public:
    Employee();
    Employee(int id, float sal);

    void set_id(int id);
    int get_id();
    void set_sal(float sal);
    float get_sal();

    void accept();
    void display();
};

#endif