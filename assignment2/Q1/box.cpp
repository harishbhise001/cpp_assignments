#include "box.h"

Box::Box(int length, int breadth, int height)
{
    this->length = length;
    this->breadth = breadth;
    this->height = height;
}

void Box::calculateVolume()
{
    int volume = this->length * this->breadth * this->height;
    cout<<"\n********************************"<<endl;
    cout<<"Volume of a box is "<<volume<<endl;
    cout<<"********************************\n"<<endl;
}
