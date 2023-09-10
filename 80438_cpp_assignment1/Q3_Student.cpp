#include <iostream>
#include <malloc.h>
using namespace std;

struct Student
{
    int rollNo, marks;
    string name;
};

struct Student *initStudent(struct Student *ptrStudent);
void acceptStudentFromConsole(struct Student *ptrStudent);
void printStudentOnConsole(struct Student *ptrStudent);
int menu();

int main()
{
    struct Student *ptrStudent;
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            ptrStudent = initStudent(ptrStudent);
            break;

        case 2:
            acceptStudentFromConsole(ptrStudent);
            break;

        case 3:
            printStudentOnConsole(ptrStudent);
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

struct Student *initStudent(struct Student *ptrStudent)
{
    ptrStudent = new Student();
    ptrStudent->rollNo = 0;
    ptrStudent->marks = 0;
    ptrStudent->name = "";
    cout << "\nStudent initilized...\n";
    return ptrStudent;
}

void acceptStudentFromConsole(struct Student *ptrStudent)
{
    cout << "\nEnter Data (rollNo, name, marks) : ";
    cin >> ptrStudent->rollNo >> ptrStudent->name >> ptrStudent->marks;
}

void printStudentOnConsole(struct Student *ptrStudent)
{
    cout << "\nRoll No : " << ptrStudent->rollNo << endl;
    cout << "Name : " << ptrStudent->name << endl;
    cout << "Marks : " << ptrStudent->marks << endl;
}