#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "date.h"

#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    float sal;
    string dept;
    Date joining;

public:
    Employee();
    Employee(int id, float sal, string dept, Date joining);

    void set_id(int id);
    int get_id();

    void set_sal(float sal);
    float get_sal();

    void set_dept(string dept);
    string get_dept();

    void set_joining_date(Date joining);
    Date get_joining_date();

    void accept();
    void display();
    
};

#endif