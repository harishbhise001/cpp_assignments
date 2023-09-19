#include "stack.h"

Stack::Stack()
{
    this->size = 5;
    stack_arr = new int[size];
    index = -1;
}

Stack::Stack(int size)
{
    this->size = size;
    stack_arr = new int[size];
    index = -1;
}

// Implimentation of copy constructor
Stack::Stack(const Stack &stack)
{
    this->index = stack.index;
    this->size = stack.size;

    this->stack_arr = new int[this->size];
    for(int i=0;i<=index;i++)
        this->stack_arr[i] = stack.stack_arr[i];
}

// Inmplementation of overloaded = operator
void Stack::operator = (const Stack & stack)
{
    this->index = stack.index;
    this->size = stack.size;

    this->stack_arr = new int[this->size];
    for(int i=0;i<=index;i++)
        this->stack_arr[i] = stack.stack_arr[i];
}


void Stack::push(int val)
{
    if(index == size-1)
    {
        cout<<"\nStack overflow..."<<endl;
        return;
    }
    
    ++index;
    stack_arr[index] = val;
    cout<<"\n"<<val<<" pushed"<<endl;
}

int Stack::pop()
{
    if(index == -1)
    {
        cout<<"\nStack underflow..."<<endl;
        return -1;
    }

    int val = stack_arr[index];
    --index;
    return val;
}

int Stack::peek()
{
    if(index == -1)
    {
        cout<<"Stack is empty"<<endl;
        return -1;
    }

    return stack_arr[index];
}

bool Stack::isEmpty()
{
    if(index < 0) return true;
    return false;
}

bool Stack::isFull()
{
    if(index == size-1) return true;
    return false;
}

void Stack::print()
{
    if(index == -1)
    {
        cout<<"\nStack is empty"<<endl;
        return;
    }

    cout<<"\nElements in the stack are : ";
    for(int i=0;i<=index;i++)
    {
        cout<<stack_arr[i]<<" ";
    }
    cout<<endl;
    
}

Stack::~Stack()
{
    delete stack_arr;
}