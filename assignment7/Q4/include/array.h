#ifndef ARRAY_H
#define ARRAY_H

#include <bits/stdc++.h>
using namespace std;

template <class T>
class Array
{
private:
    int index, size;
    T *arr;

public:
    Array();
    Array(int size);

    void addElement(T element);
    T getElenment(int index);
    void deleteElement(int index);
    void display();

    ~Array();
};

#endif