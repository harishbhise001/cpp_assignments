/*
Q3. Stack is a Last-In-First-Out data structure. Write a Stack class. It
implements stack using Dynamically allocated array. Stack size
should be passed in parameterized constructor. If size is not given,
Assignment 3
allocate stack of size 5. Provide member functions like push(), pop(),
peek(), isEmpty(), isFull(), and print().
*/

#include "stack.h"

int menu()
{
    int choice;
    cout<<"\n0. Exit\n";
    cout<<"1. Initialize first stack st1\n";
    cout<<"2. Initialize second stack st2 with copy constructor and print\n";
    cout<<"3. Initialize second stack st2 with overloaded = operator and print\n";
    cout<<"4. Push\n";
    cout<<"5. Pop\n";
    cout<<"6. Peek\n";
    cout<<"7. Is Empty\n";
    cout<<"8. Is Full\n";
    cout<<"9. Print\n";
    cout<<"Enter choice : ";
    cin>>choice;
    return choice;
}

int main()
{
    int choice,size,val;
    Stack *st1;

    while(choice = menu())
    {
        switch(choice)
        {
            case 1:
                cout<<"\nEnter size : ";
                cin>>size;
                st1 = new Stack(size);
                break;

            case 2:
                {Stack st2(*st1);
                cout<<"\nElements of st2 after copy constructor initailization are : ";
                st2.print();
                break;}

            case 3:
                {Stack st2 = *st1;
                cout<<"\nElements of st2 after iniitialization with = overloaded operator are : ";
                st2.print();
                break;}

            case 4:
                cout<<"\nEnter value to push : ";
                cin>>val;
                st1->push(val);
                break;
            
            case 5:
                val = st1->pop();
                if(val != -1) cout<<"\n"<<val<<" popped\n";
                break;

            case 6:
                val = st1->peek();
                cout<<"\nValue at top : "<<val<<endl;
                break;

            case 7:
                cout<<"\nStack is"<< (st1->isEmpty() ? " " : " not ") <<"empty"<<endl;
                break;

            case 8:
                cout<<"\nStack is"<< (st1->isFull() ? " " : " not ") <<"full"<<endl;
                break;

            case 9:
                st1->print();
                break;
            
            default:
                cout<<"\nWrong choice ...\n";
        }
    }

    return 0;
}