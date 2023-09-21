/*
Write a user defined function factorial() that calculates factorial of given number and it throws
exception if number entered by user is negative.
*/

#include <iostream>
#include <stdexcept>
using namespace std;

// user defined exception class
class negativeNumberException : public exception
{
private:
    int num;

public:

    negativeNumberException()
    {
        num = -1;
    }

    negativeNumberException(int num)
    {
        this->num = num;
    }

    string what()
    {
        return "\nCannot find the factorial of a negative number.";
    }
};

void facto()
{
    long result = 1;
    int num;
    cout<<"Enter the value : ";
    cin>>num;

    if(num < 0) throw negativeNumberException(num);

    for(int i=2;i<=num;i++)
    {
        result *= i;
    }

    cout<<"\nFactorial of "<<num<<" is "<<result;
}

int main()
{
    
    try
    {
        facto();
    }
    catch(negativeNumberException& e)
    {
        cerr <<e.what()<<endl;
    }
    
    return 0;
}