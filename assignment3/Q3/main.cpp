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
    cout<<"1. Initialize\n";
    cout<<"2. Push\n";
    cout<<"3. Pop\n";
    cout<<"4. Peek\n";
    cout<<"5. Is Empty\n";
    cout<<"6. Is Full\n";
    cout<<"7. Print\n";
    cout<<"Enter choice : ";
    cin>>choice;
    return choice;
}

int main()
{
    int choice,size,val;
    Stack *st;

    while(choice = menu())
    {
        switch(choice)
        {
            case 1:
                cout<<"\nEnter size : ";
                cin>>size;
                st = new Stack(size);
                break;

            case 2:
                cout<<"\nEnter value to push : ";
                cin>>val;
                st->push(val);
                break;
            
            case 3:
                val = st->pop();
                if(val != -1) cout<<"\n"<<val<<" popped\n";
                break;

            case 4:
                val = st->peek();
                cout<<"\nValue at top : "<<val<<endl;
                break;

            case 5:
                cout<<"\nStack is"<< (st->isEmpty() ? " " : " not ") <<"empty"<<endl;
                break;

            case 6:
                cout<<"\nStack is"<< (st->isFull() ? " " : " not ") <<"full"<<endl;
                break;

            case 7:
                st->print();
                break;
            
            default:
                cout<<"\nWrong choice ...\n";
        }
    }

    return 0;
}