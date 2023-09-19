#include "../include/employee.h"

Employee::Employee()
{
    this->id = 0;
    this->sal = 0;
    this->dept = "";
}

Employee::Employee(int id, float sal, string dept, Date joining, string name, string addr, Date birth_date) : Person(name,addr,birth_date)
{
    this->id = id;
    this->sal = sal;
    this->dept = dept;
    this->joining = joining;
}

void Employee::set_id(int id) { this->id = id;}
int Employee::get_id() { return this->id;}

void Employee::set_sal(float sal) { this->sal = sal;}
float Employee::get_sal() { return this->sal;}

void Employee::set_dept(string dept) { this->dept = dept;}
string Employee::get_dept() { return this->dept;}

void Employee::set_joining_date(Date joining) { this->joining = joining;}
Date Employee::get_joining_date() { return this->joining;}

void Employee::accept()
{
    Person::accept();

    cout<<"\nEnter id : ";
    cin>>this->id;
    cout<<"Enter sal : ";
    cin>>this->sal;
    cout<<"Enter department : ";
    cin>>this->dept;
    cout<<"Enter date of joining : "<<endl;
    this->joining.accept();
}

void Employee::display()
{
    cout<<"\nDisplaying Employee ..."<<endl;

    Person::display();

    cout<<"\nId           : "<<this->id<<endl;
    cout<<"Salary       : "<<this->sal<<endl;
    cout<<"Department   : "<<this->dept<<endl;
    cout<<"Joining date : ";
    this->joining.display();
}