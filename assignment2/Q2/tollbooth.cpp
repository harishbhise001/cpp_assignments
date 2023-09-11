#include "tollbooth.h"

unsigned int TollBooth::total_cars = 0;
double TollBooth::total_amount = 0;

void TollBooth::payingCar()
{
    TollBooth::total_amount += 0.50;
    TollBooth::total_cars += 1;
}

void TollBooth::notPayingCar()
{
    TollBooth::total_cars += 1;
}

void TollBooth::displayOnConsole()
{
    cout<<"\n*******************************************************"<<endl;
    cout<<"Total amount collected : "<<TollBooth::total_amount<<" dollars ("<<TollBooth::total_amount * 100<<" cents)"<<endl;
    cout<<"Total cars passed : "<<TollBooth::total_cars<<endl;

    int paying_cars = TollBooth::total_amount / 0.50;
    cout<<"Number of paying cars : "<<paying_cars<<endl;

    int not_paying_cars = TollBooth::total_cars - paying_cars;
    cout<<"Number of not paying cars : "<<not_paying_cars<<endl;
    cout<<"*******************************************************"<<endl;
}