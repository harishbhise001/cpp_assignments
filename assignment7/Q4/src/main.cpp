#include "../include/array.h"
#include "./array.cpp"

enum Earr
{
    EXIT,
    ADD,
    GET,
    DELETE,
    DISP
};

Earr menu()
{
    int choice;
    cout<<"\n-------------------"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"1. Add element"<<endl;
    cout<<"2. Get element"<<endl;
    cout<<"3. Delete element"<<endl;
    cout<<"4. Display array"<<endl;
    cout<<"Enter choice : ";
    cin>>choice;
    return Earr(choice);
}

int main()
{
    Earr choice;
    int element, index;
    Array<int> arr;

    while(choice = menu())
    {
        switch(choice)
        {
            case ADD:
            {
                cout<<"\nEnter element : ";
                cin>>element;
                arr.addElement(element);
                break;
            }

            case GET:
            {  
                cout<<"\nEnter index : ";
                cin>>index;

                element = arr.getElenment(index);
                if(element != -1) cout<<"\nElement at index "<<index<<" is "<<element<<endl;
                break;
            }

            case DELETE:
            {
                cout<<"\nEnter index : ";
                cin>>index;

                arr.deleteElement(index);
                break;
            }

            case DISP:
            {
                arr.display();
                break;
            }

            default:
                cout<<"\nWrong choice ....."<<endl;

        }
    }

    return 0;
}