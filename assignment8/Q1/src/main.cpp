#include "../include/salesManager.h"
#include <typeinfo>

enum Emenu
{
    EXIT,
    ACCEPT,
    DISPLAY_COUNT,
    DISPLAY_MANAGER,
    DISPLAY_SALESMAN,
    DISPLAY_SALES_MANAGER
};

Emenu menu()
{
    int choice;
    cout<<"\n--------------------"<<endl; 
    cout<<"0. Exit"<<endl;
    cout<<"1. Accept Employee"<<endl;
    cout<<"2. Display Count"<<endl;
    cout<<"3. Display All Managers"<<endl;
    cout<<"4. Display All Salesman"<<endl;
    cout<<"5. Display All Sales Manager"<<endl;
    cout<<"Enter choice : ";
    cin>>choice;
    return Emenu(choice);
}

int main()
{
    int size, index=0,ch;
    int manager_count=0, salesman_count=0, sales_manager_count=0;

    cout<<"\nEnter the size : ";
    cin>>size;

    Employee *emp[size] = {NULL};
    Emenu choice;

    while(( choice = menu() ) != EXIT)
    {
        switch(choice)
        {
            case ACCEPT:
            {
                if(index == size) 
                {
                    cout<<"\nSize reached ..."<<endl;
                    break;
                }

                cout<<"\n1. Manager"<<endl;
                cout<<"2. Salesman"<<endl;
                cout<<"3. Sales Manager"<<endl;
                cout<<"Enter choice : ";
                cin>>ch;

                if(ch == 1) emp[index] = new Manager();
                else if(ch == 2) emp[index] = new Salesman();
                else if(ch == 3) emp[index] = new SalesManager();

                if(emp[index] != NULL) emp[index++]->accept();
                break;
            }

            case DISPLAY_COUNT:
            {
                manager_count = salesman_count = sales_manager_count = 0;
                for(int i=0;i<index;i++)
                {
                    if(typeid(*emp[i]).name() == typeid(Manager).name()) manager_count++;
                    else if(typeid(*emp[i]).name() == typeid(Salesman).name()) salesman_count++;
                    else if(typeid(*emp[i]).name() == typeid(SalesManager).name()) sales_manager_count++;
                }

                cout<<"\nManager : "<<manager_count<<endl;
                cout<<"Salesman : "<<salesman_count<<endl;
                cout<<"Sales Manager : "<<sales_manager_count<<endl;
                break;
            }

            case DISPLAY_MANAGER:
            {
                for(int i=0;i<index;i++)
                {
                    if(typeid(*emp[i]).name() == typeid(Manager).name())
                    {
                        emp[i]->display();
                    }
                }
                break;
            }
            
            case DISPLAY_SALESMAN:
            {
                for(int i=0;i<index;i++)
                {
                    if(typeid(*emp[i]).name() == typeid(Salesman).name())
                    {
                        emp[i]->display();
                    }
                }
                break;
            }

            case DISPLAY_SALES_MANAGER:
            {
                for(int i=0;i<index;i++)
                {
                    if(typeid(*emp[i]).name() == typeid(SalesManager).name())
                    {
                        emp[i]->display();
                    }
                }
                break;
            }

            default:
                cout<<"\nWrong choice ...."<<endl;
        }

    }

    for(int i=0;i<size;i++)
    {
        delete emp[i];
    }

    return 0;
}