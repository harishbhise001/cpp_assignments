/*
Q2. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
In main create array of objects of Time. Allocate the memory for the
array and the object dynamically.
*/

#include "time.h"

int main()
{
    Time** arr = new Time*[5];
    for(int i=0;i<5;i++)
    {
        arr[i] = new Time();
        arr[i]->setHour();
        arr[i]->setMinute();
        arr[i]->setSeconds();
    }

    cout<<"\nPrinting time....."<<endl;
    for(int i=0;i<5;i++)
    {
        arr[i]->printTime();
    }

    delete arr;
    
    return 0;
}