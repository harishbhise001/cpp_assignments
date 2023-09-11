#ifndef TOLLBOOTH_H
#define TOLLBOOTH_H

#include <iostream>
using namespace std;

class TollBooth
{
    static unsigned int total_cars;
    static double total_amount;

    public:

    void payingCar();
    void notPayingCar();
    void displayOnConsole();

};

#endif