#include "../include/book.h"
#include "../include/tape.h"

enum EShop
{
    EXIT,
    BOOK,
    TAPE,
    PRINT,
    BILL
};

string message(int size)
{
    switch(size)
    {
        case 0: return "\nWhat do you want to buy?";
        case 1: return "\nWhat else do you want to buy?";
        case 2: return "\nAnything else?";
        default: return "\nThank you, visit again! \nGet the total bill by entering 4.";
    }
}

EShop menu(int size)
{
    int choice;
    cout<<"\n-----------------------------";
    cout<<message(size)<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"1. Buy Book"<<endl;
    cout<<"2. Buy Tape"<<endl;
    cout<<"3. Print all Orders"<<endl;
    cout<<"4. Calculate bill"<<endl;
    cout<<"Enter choice : ";
    cin>>choice;
    return EShop(choice);
}

void printAllOrders(Shop **arr, int size)
{
    if(size == 0)
    {
        cout<<"\nYou have not purchased anything yet ...."<<endl;
        return;
    }

    int index=0;
    for(int i=0;i<size;i++)
    {
        arr[i]->displayOrder();
    }
}

int main()
{
    EShop choice;
    int size=0;

    Shop **orderRecords = new Shop*[3];  // Dynamacally created array of object pointers (pointing to shop object)
    Shop *buyed = NULL;                  // For dynamacally creating object

    while(choice = menu(size))
    {
        switch(choice)
        {
            case BOOK:
                buyed = new Book();
                break;

            case TAPE:
                buyed = new Tape();
                break;

            case PRINT:
                printAllOrders(orderRecords,size);
                break;

            case BILL:
                if(size == 0) cout<<"\nYou haven't buyed anything ..."<<endl;
                else cout<<"\nYour total bill of "<<size<<( size == 1 ? " product " : " products ")<<"is "<<Shop::getTotalPrice()<<" rs."<<endl;
                break;  
                // Getting total price by calling static member function of a class Shop

            default:
                cout<<"\nWrong choice ..."<<endl;
        }

        if(buyed != NULL && size < 3)
        {
            buyed->acceptOrder(); // Everytime object is accepted, a call is given to add price of a current object into total price
            buyed->displayOrder();
            orderRecords[size++] = buyed; // Storing newly created object onto heap pointed by pointer which stored into the orderRecords array
        }
        else if((choice == BOOK || choice == TAPE) && size == 3) cout<<"\nYou have already purchased 3 products."<<endl;
        // if array is full and user tries to add an object above message is given

        buyed = NULL;
    }

    for(int i=0;i<3;i++)
        delete orderRecords[i];
    
    delete[] orderRecords;
    delete buyed;

    return 0;
}