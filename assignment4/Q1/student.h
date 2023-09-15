#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include <algorithm>
using namespace std;

class Student
{
    private:
    int rollNo;
    string name;
    char gender;
    int total_marks;

    public:

    Student();
    Student(int rollNo);
    void accept();
    void print();
    int getRollNo();

};

#endif