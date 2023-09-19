#include "../include/employee.h"
#include "../include/person.h"
#include "../include/date.h"

int mainMenu()
{
    int choice;
    cout<<"\n-------------------"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"1. Employee"<<endl;
    cout<<"2. Person"<<endl;
    cout<<"Enter choice : ";
    cin>>choice;
    return choice;
}

int employeeMenu()
{
    int choice;
    cout<<"\n-------------------"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"1. Accept Employee"<<endl;
    cout<<"2. Display Employee"<<endl;
    cout<<"3. Set Id"<<endl;
    cout<<"4. Get Id"<<endl;
    cout<<"5. Set Salary"<<endl;
    cout<<"6. Get Salary"<<endl;
    cout<<"7. Set Department"<<endl;
    cout<<"8. Get Department"<<endl;
    cout<<"9. Set Joining Date"<<endl;
    cout<<"10. Get Joining Date"<<endl;
    cout<<"Enter choice : ";
    cin>>choice;
    return choice;
}

int personMenu()
{
    int choice;
    cout<<"\n-------------------"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"1. Accept Person"<<endl;
    cout<<"2. Display Person"<<endl;
    cout<<"3. Set name"<<endl;
    cout<<"4. Get name"<<endl;
    cout<<"5. Set address"<<endl;
    cout<<"6. Get address"<<endl;
    cout<<"7. Set birth date"<<endl;
    cout<<"8. Get birth date"<<endl;
    cout<<"Enter choice : ";
    cin>>choice;
    return choice;
}

int main()
{
    Employee employee;
    Person person;
    int choice;

    while(choice = mainMenu())
    {
        if(choice == 1)
        {
            while(choice = employeeMenu())
            {
                switch(choice)
                {
                    case 1:
                        employee.accept();
                        break;

                    case 2:
                        employee.display();
                        break;

                    case 3:
                        {int id;
                        cout<<"\nEnter id : ";
                        cin>>id;
                        employee.set_id(id);
                        break;}

                    case 4:
                        {int id = employee.get_id();
                        cout<<"\nEmployee id : "<<id<<endl;
                        break;}

                    case 5:
                        {int sal;
                        cout<<"\nEnter salary : ";
                        cin>>sal;
                        employee.set_sal(sal);
                        break;}

                    case 6:
                        {float sal = employee.get_sal();
                        cout<<"\nEmployee Salary : "<<sal<<endl;
                        break;}
                        
                    case 7:
                        {string dept;
                        cout<<"\nEnter department : ";
                        cin>>dept;
                        employee.set_dept(dept);
                        break;}

                    case 8:
                        {string dept = employee.get_dept();
                        cout<<"\nEmployee department : "<<dept<<endl;
                        break;}

                    case 9:
                        {Date date;
                        cout<<"\nEnter joining date : "<<endl;
                        date.accept();
                        employee.set_joining_date(date);
                        break;}

                    case 10:
                        {Date date = employee.get_joining_date();
                        cout<<"\nEmployee joining date :";
                        date.display();
                        break;}

                    default:
                        cout<<"\nWrong choice ..."<<endl;
                }
            }
        }
        else if(choice == 2)
        {
            while(choice = personMenu())
            {
                switch(choice)
                {
                    case 1:
                        person.accept();
                        break;

                    case 2:
                        person.display();
                        break;

                    case 3:
                        {string name;
                        cout<<"\nEnter name : ";
                        cin>>name;
                        person.set_name(name);
                        break;}

                    case 4:
                        {string name = person.get_name();
                        cout<<"\nPerson name : "<<name<<endl;
                        break;}

                    case 5:
                        {string addr;
                        cout<<"\nEnter address : ";
                        cin>>addr;
                        person.set_addr(addr);
                        break;}

                    case 6:
                        {string addr = person.get_addr();
                        cout<<"\nPerson Address : "<<addr<<endl;
                        break;}
                        
                    case 7:
                        {Date birth_date;
                        cout<<"\nEnter birth date : "<<endl;
                        birth_date.accept();
                        person.set_birth_date(birth_date);
                        break;}

                    case 8:
                        {Date birth_date = person.get_birth_date();
                        cout<<"\nPerson birth date : ";
                        birth_date.display();
                        break;}

                    default:
                        cout<<"\nWrong choice ..."<<endl;
                }
            }
        }
        else
        {
            cout<<"\nWrong choice ..."<<endl;
        }
        
    }

    return 0;
}