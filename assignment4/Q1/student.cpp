#include "student.h"

Student::Student()
{
    this->rollNo = 0;
    this->name = "";
    this->gender = '\0';
    this->total_marks = 0;
}

Student::Student(int rollNo)
{
    this->rollNo = rollNo;
    this->name = "";
    this->gender = '\0';
    this->total_marks = 0;
}

void Student::accept()
{
    int mark;

    cout<<"\nEnter roll no : ";
    cin>>this->rollNo;

    cout<<"Enter name : ";
    cin>>this->name;   

    cout<<"Enter gender : ";
    cin>>this->gender;

    cout<<"Enter marks of 3 subjects out of 100 : ";

    cout<<"\nEnter marks of physics : ";
    cin>>mark;
    this->total_marks += mark;

    cout<<"Enter marks of chemistry : ";
    cin>>mark;
    this->total_marks += mark;

    cout<<"Enter marks of math : ";
    cin>>mark;
    this->total_marks += mark;
}

void Student::print()
{
    cout<<"\n----------------------------"<<endl;
    cout<<"Student details :- \n";
    cout<<"Roll No         : "<<this->rollNo<<endl;
    cout<<"Name            : "<<this->name<<endl;
    cout<<"Gender          : "<<this->gender<<endl;
    cout<<"Percentage      : "<<(( this->total_marks/300.0 ) * 100 )<<endl;
}

int Student::getRollNo()
{
    return this->rollNo;
}