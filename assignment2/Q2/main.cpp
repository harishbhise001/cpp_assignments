/* Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are
expected to pay a fifty-cent toll. Mostly they do, but sometimes a car
goes by without paying.
The tollbooth keeps track of the number of cars that have gone by
and of the total amount of money collected. Model this tollbooth
with a class called tollbooth.
The two data items are a type unsigned int to hold the total number
of cars, and a type double to hold the total amount of money
collected.
A constructor initializes all data members to 0.
A member function called payingCar() increments the car total and
adds 0.50 to the cash total. Another function, called nopayCar()
increments the car total but adds nothing to the cash total.
Finally, a member function called printOnConsole() displays the two
totals and number of paying as well as non paying cars total.
*/

#include "tollbooth.h"

int menu()
{
    int choice;
    cout<<"\n0 = Exit"<<endl;
    cout<<"1 = Pass tollbooth"<<endl;
    cout<<"2 = Display"<<endl;
    cout<<"Enter choice : ";
    cin>>choice;
    return choice;
}

int main()
{

    int choice,amount;
    TollBooth car;

    while(choice = menu())
    {
        switch(choice)
        {
            case 1:
                cout<<"\nPay amount (50 cents): ";
                cin>>amount;

                if(amount == 0) car.notPayingCar();
                else car.payingCar();
                break;
            
            case 2:
                car.displayOnConsole();
                break;

            default:
                cout<<"\nWrong choice..."<<endl;
        }
    }
    return 0;
}