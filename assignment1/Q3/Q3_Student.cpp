#include <iostream>

using namespace std;

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

int menu();

int main()
{
    Student *ptrStudent;
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

Student::Student()
{
    this->rollNo = 0;
    this->marks = 0;
    this->name = "";
}

Student* Student::initStudent()
{
    Student *ptrStudent = new Student();
    cout << "\nStudent initilized...\n";
    return ptrStudent;
}

void Student::acceptStudentFromConsole()
{
    cout << "\nEnter Data (rollNo, name, marks) : ";
    cin >> this->rollNo >> this->name >> this->marks;
}

void Student::printStudentOnConsole()
{
    cout << "\nRoll No : " << this->rollNo << endl;
    cout << "Name : " << this->name << endl;
    cout << "Marks : " << this->marks << endl;
}