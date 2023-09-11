#include <iostream>
using namespace std;

class Date
{

    int year, month, day;

public:
    Date *initDate();
    void acceptDateFromConsole();
    void printDateOnConsole();
    bool isLeapYear();
};
int menu();

int main()
{
    Date *ptrDate;
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            ptrDate = ptrDate->initDate();
            break;

        case 2:
            ptrDate->acceptDateFromConsole();
            break;

        case 3:
            ptrDate->printDateOnConsole();
            break;

        case 4:
        {
            bool leap = ptrDate->isLeapYear();
            if (leap)
                cout << "\nIt is a Leap year\n";
            else
                cout << "\nIt is not a Leap year\n";
            break;
        }

        default:
            cout << "\nWrong Choice...";
        }
    }
    return 0;
}

int menu()
{
    int choice;

    cout << "\n0 = Exit\n1 = Init Date\n2 = Accept Date\n3 = Print Date\n4 = isLeapYear\n";
    cin >> choice;
    return choice;
}

Date *Date::initDate()
{
    Date *ptrDate = new Date();
    ptrDate->day = 0;
    ptrDate->month = 0;
    ptrDate->year = 0;
    cout << "\nDate initilized...\n";
    return ptrDate;
}

void Date::acceptDateFromConsole()
{
    cout << "\nEnter Date (DD MM YYYY) : ";
    cin >> this->day >> this->month >> this->year;
}

void Date::printDateOnConsole()
{
    cout << "\nDate : " << this->day << "/" << this->month << "/" << this->year << endl;
}

bool Date::isLeapYear()
{
    if (this->year % 400 == 0)
        return true;
    else if (this->year % 4 == 0 && this->year % 100 != 0)
        return true;
    return false;
}
