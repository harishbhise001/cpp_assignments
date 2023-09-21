#include "../include/array.h"

template <class T>
Array<T>::Array()
{
    cout<<"\nEnter size : ";
    cin>>this->size;
    this->arr = new T[this->size];
    this->index = -1;
}

template <class T>
Array<T>::Array(int size)
{
    this->index = index;
    this->size = size;
    this->arr = new T[this->size];
}

template <class T>
void Array<T>::addElement(T element)
{
    if(index == size-1)
    {
        cout<<"\nArray is full."<<endl;
        return;
    }   

    this->arr[++index] = element;
}

template <class T>
T Array<T>::getElenment(int index)
{
    if(index > this->index) 
    {
        
        cout<<"\nEnter valid index"<<endl;
        return -1;
    }

    return this->arr[index];
}

template <class T>
void Array<T>::deleteElement(int index)
{
    for(int i=index;i<this->index-1;i++)
    {
        this->arr[i] = this->arr[i+1];
    }

    this->index--;
}

template <class T>
void Array<T>::display()
{
    cout<<"\nArray elements are : ";
    for(int i=0;i<=this->index;i++)
    {
        cout<<this->arr[i]<<" ";
    }
    cout<<endl;
}

template <class T>
Array<T>::~Array()
{
    delete[] arr;
}