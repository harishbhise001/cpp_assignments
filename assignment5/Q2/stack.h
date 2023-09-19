#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

class Stack
{
    int* stack_arr;
    int size,index;

    public:

    Stack();
    Stack(int size);

    Stack(const Stack &stack);
    void operator = (const Stack &st);

    void push(int val);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
    void print();

    ~Stack();
};

#endif