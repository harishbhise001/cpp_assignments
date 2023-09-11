#include "time.h"

Time::Time()
{
    this->hour = 0;
    this->minute = 0;
    this->second = 0;
}

Time::Time(int hour, int minute, int second)
{
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

void Time::setHour()
{
    cout<<"Enter hour : ";
    cin>>this->hour;
}

void Time::setMinute()
{
    cout<<"Enter minute : ";
    cin>>this->minute;
}

void Time::setSeconds()
{
    cout<<"Enter second : ";
    cin>>this->second;
}

int Time::getHour()
{
    return this->hour;
}

int Time::getMinute()
{
    return this->minute;
}

int Time::getSeconds()
{
    return this->second;
}

void Time::printTime()
{
    cout<<"Time : "<<this->hour<<":"<<this->minute<<":"<<this->second<<endl;
}

Time::~Time()
{
    delete this;
}