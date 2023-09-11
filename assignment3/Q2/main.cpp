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