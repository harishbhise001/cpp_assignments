#include "../include/employee.h"
#include "../include/person.h"
#include "../include/date.h"

enum Eemp
{
    EXIT,
    ACCEPT,
    DISPLAY,
    SET_NAME,
    GET_NAME,
    SET_ADDRESS,
    GET_ADDRESS,
    SET_BIRTH_DATE,
    GET_BIRTH_DATE,
    SET_ID,
    GET_ID,
    SET_SAL,
    GET_SAL,
    SET_DEPT,
    GET_DEPT,
    SET_JOINING,
    GET_JOINING
};

Eemp employeeMenu()
{
    int choice;
    cout << "\n-------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Accept" << endl;
    cout << "2. Display" << endl;
    cout << "3. Set name" << endl;
    cout << "4. Get name" << endl;
    cout << "5. Set address" << endl;
    cout << "6. Get address" << endl;
    cout << "7. Set birth date" << endl;
    cout << "8. Get birth date" << endl;
    cout << "9. Set Id" << endl;
    cout << "10. Get Id" << endl;
    cout << "11. Set Salary" << endl;
    cout << "12. Get Salary" << endl;
    cout << "13. Set Department" << endl;
    cout << "14. Get Department" << endl;
    cout << "15. Set Joining Date" << endl;
    cout << "16. Get Joining Date" << endl;
    cout << "Enter choice : ";
    cin >> choice;
    return Eemp(choice);
}

int main()
{
    Person *person = new Employee();
    Employee *employee = (Employee*) person;
    Eemp choice;

    while (choice = employeeMenu())
    {

        switch (choice)
        {
        case ACCEPT:
            person->accept();
            break;

        case DISPLAY:
            person->display();
            break;

        case SET_NAME:
        {
            string name;
            cout << "\nEnter name : ";
            cin >> name;
            person->set_name(name);
            break;
        }

        case GET_NAME:
        {
            string name = person->get_name();
            cout << "\nEmployee name : " << name << endl;
            break;
        }

        case SET_ADDRESS:
        {
            string addr;
            cout << "\nEnter address : ";
            cin >> addr;
            person->set_addr(addr);
            break;
        }

        case GET_ADDRESS:
        {
            string addr = person->get_addr();
            cout << "\nEmployee address : " << addr << endl;
            break;
        }

        case SET_BIRTH_DATE:
        {
            Date date;
            cout << "\nEnter birth date : ";
            date.accept();
            person->set_birth_date(date);
            break;
        }

        case GET_BIRTH_DATE:
        {
            Date date = person->get_birth_date();
            cout << "\nEmployee birth date : ";
            date.display();
            break;
        }

        case SET_ID:
        {
            int id;
            cout<<"\nEnter id : ";
            cin>> id;
            employee->set_id(id);
            break;
        }

        case GET_ID:
        {
            int id = employee->get_id();
            cout << "\nEmployee id : "<<employee->get_id()<<endl;
            break;
        }

        case SET_SAL:
        {
            float sal;
            cout << "\nEmployee salary :";
            cin>>sal;
            employee->set_sal(sal);
            break;
        }

        case GET_SAL:
        {
            float sal = employee->get_sal();
            cout << "\nEmployee sal : "<<employee->get_sal()<<endl;
            break;
        }

        case SET_DEPT:
        {
            string dept;
            cout << "\nEnter department : ";
            cin >> dept;
            employee->set_dept(dept);
            break;
        }

        case GET_DEPT:
        {
            string dept = employee->get_dept();
            cout << "\nEmployee depatment : " << dept << endl;
            break;
        }

        case SET_JOINING:
        {
            Date date;
            cout << "\nEnter joining date : ";
            date.accept();
            employee->set_joining_date(date);
            break;
        }

        case GET_JOINING:
        {
            Date date = employee->get_joining_date();
            cout << "\nEmployee joining date :";
            date.display();
            break;
        }

        default:
            cout << "\nWrong choice ..." << endl;
        }
    }

    delete person;
    delete employee;
    
    return 0;
}