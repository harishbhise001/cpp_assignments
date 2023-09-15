#include "salesManager.h"

enum Emenu
{
    EXIT,
    ACCEPT,
    DISPLAY
};

Emenu menu()
{
    int choice;
    cout<<"\n--------------------"<<endl; 
    cout<<"0. Exit"<<endl;
    cout<<"1. Accept"<<endl;
    cout<<"2. Display"<<endl;
    cout<<"Enter choice : ";
    cin>>choice;
    return Emenu(choice);
}

int main()
{

    Employee *emp = new SalesManager();
    Emenu choice;

    while(choice = menu())
    {
        switch(choice)
        {
            case ACCEPT:
                emp->accept();
                break;
            case DISPLAY:
                emp->display();
                break;
            default:
                cout<<"\nWrong choice ...."<<endl;
        }

    }

    delete emp;

    return 0;
}