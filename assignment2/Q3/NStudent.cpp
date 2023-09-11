/*
Q3. Create a namespace NStudent. Create the Student class(created
as per assignment-1 Q3) inside namespace. Test the functionalities.
*/

#include <iostream>
#include <malloc.h>
using namespace std;

namespace NStudent
{
    class Student
    {
        int rollNo, marks;
        string name;

        public:

        Student();
        Student *initStudent();
        void acceptStudentFromConsole();
        void printStudentOnConsole();
        ~Student();
    };
}
// using namespace NStudent;

int menu();

int main()
{
    NStudent::Student *ptrStudent;
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            ptrStudent = ptrStudent->initStudent();
            break;

        case 2:
            ptrStudent->acceptStudentFromConsole();
            break;

        case 3:
            ptrStudent->printStudentOnConsole();
            break;

        default:
            cout << "\nWrong Choice...";
        }
    }
    return 0;
}

int menu()
{
    int choice;

    cout << "\n0 = Exit\n1 = Init Student Data\n2 = Accept Student Data\n3 = Print Student Data\n";
    cin >> choice;
    return choice;
}

NStudent::Student::Student()
{
    this->rollNo = 0;
    this->marks = 0;
    this->name = "";
}

NStudent::Student* NStudent::Student::initStudent()
{
    Student *ptrStudent = new Student();
    cout << "\nStudent initilized...\n";
    return ptrStudent;
}

void NStudent::Student::acceptStudentFromConsole()
{
    cout << "\nEnter Data (rollNo, name, marks) : ";
    cin >> this->rollNo >> this->name >> this->marks;
}

void NStudent::Student::printStudentOnConsole()
{
    cout << "\nRoll No : " << this->rollNo << endl;
    cout << "Name : " << this->name << endl;
    cout << "Marks : " << this->marks << endl;
}