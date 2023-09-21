#include "../include/account.h"
#include "../include/exception.h"

enum bank
{
    EXIT,
    ACCEPT,
    DISPLAY,
    SET_ID,
    SET_TYPE,
    GET_ID,
    GET_TYPE,
    GET_BALANCE,
    DEPOSITE,
    WITHDRAW
};

bank menu()
{
    int choice;
    cout << "\n------------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Accept" << endl;
    cout << "2. Display" << endl;
    cout << "3. Set Id" << endl;
    cout << "4. Set type" << endl;
    cout << "5. Get Id" << endl;
    cout << "6. Get type" << endl;
    cout << "7. Get balance" << endl;
    cout << "8. Deposite" << endl;
    cout << "9. Withdraw" << endl;
    cout << "Enter choice : ";
    cin >> choice;
    return bank(choice);
}

int main()
{
    int id, ch;
    double amount;
    bank choice;
    account_type type;
    Account acc[3];

    while (choice = menu())
    {
        switch (choice)
        {
        case ACCEPT:
        {
            try
            {
                cout << "\nEnter account id : ";
                cin >> id;

                if (id > 3)
                    throw InvalidValue("Id must be less than 3");

                acc[id].accept();
                break;
            }
            catch (InvalidValue &e)
            {
                e.display();
            }
        }

        case DISPLAY:
        {
            try
            {
                cout << "\nEnter account id : ";
                cin >> id;

                if (id > 3)
                    throw InvalidValue("Id must be less than 3");

                acc[id].display();
                break;
            }
            catch (InvalidValue &e)
            {
                e.display();
            }
        }

        case SET_ID:
        {
            try
            {
                cout << "\nEnter account id : ";
                cin >> id;

                if (id > 3)
                    throw InvalidValue("Id must be less than 3");

                acc[id].set_id(id);
                break;
            }
            catch (InvalidValue &e)
            {
                e.display();
            }
        }

        case SET_TYPE:
        {
            try
            {
                cout << "\nEnter account id : ";
                cin >> id;
                cout << "\nEnter account type : ";
                cin >> ch;
                type = account_type(ch);

                if (id > 3)
                    throw InvalidValue("Id must be less than 3");

                acc[id].set_type(type);
                break;
            }
            catch (InvalidValue &e)
            {
                e.display();
            }
        }

        case GET_ID:
        {
            cout << "\nEnter id : ";
            cin >> id;

            cout << "\nAccount id : " << acc[id].get_id()<<endl;
        }

        case GET_TYPE:
        {
            try
            {
                cout << "\nEnter account id : ";
                cin >> id;

                if (id > 3)
                    throw InvalidValue("Id must be less than 3");

                cout << "\nAccount type : " << acc[id].get_type()<<endl;
                break;
            }
            catch (InvalidValue &e)
            {
                e.display();
            }
        }

        case GET_BALANCE:
        {
            try
            {
                cout << "\nEnter account id : ";
                cin >> id;

                if (id > 3)
                    throw InvalidValue("Id must be less than 3");

                cout<<"\nBalace : "<<acc[id].get_balance()<<endl;
                break;
            }
            catch (InvalidValue &e)
            {
                e.display();
            }
        }

        case DEPOSITE:
        {
            try
                {
                    cout<<"\nEnter account id : ";
                    cin>>id;

                    if(id > 3) throw InvalidValue();

                    cout<<"Enter amount : ";
                    cin>>amount;
                    acc[id].deposite(amount);
                    break;
                }
                catch(InvalidValue &e)
                {
                    e.display();
                }
        }

        case WITHDRAW:
        {
            try
                {
                    cout<<"\nEnter account id : ";
                    cin>>id;

                    if(id > 3) throw InvalidValue("Id must be less than 3");

                    cout<<"Enter amount : ";
                    cin>>amount;
                    acc[id].withdraw(amount);
                    break;
                }
                catch(insufficients_funds &e)
                {
                    e.display();
                }
                catch(InvalidValue &e)
                {
                    e.display();
                }
                break;
        }

        default:
        cout<<"\nWrong choice ...."<<endl;
            break;
        }
    }
}