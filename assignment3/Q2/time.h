#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;

class Time
{
    int hour,minute,second;

    public:

    Time();
    Time(int hour, int minute, int second);
    int getHour();
    int getMinute();
    int getSeconds();
    void setHour();
    void setMinute();
    void setSeconds();
    void printTime();
    ~Time();
};
#endif