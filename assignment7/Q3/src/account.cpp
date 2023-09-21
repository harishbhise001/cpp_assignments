#include "../include/account.h"
#include "../include/exception.h"

Account::Account()
{
    this->id = 0;
    this->balance = 0;
}

Account::Account(int id, account_type type)
{
    this->id = id;
    this->type = type;
}

void Account::accept()
{
    int num;
    cout<<"\nEnter id : ";
    cin>>this->id;
    cout<<"Enter account type (1.Saving 2.Current 3.Dmat): ";
    cin>>num;
    this->type = account_type(num);
}

void Account::display()
{
    cout<<"\nId : "<<this->id<<endl;
    cout<<"Account type : ";
    if(type == SAVING) cout<<"Saving"<<endl;
    else if(type == CURRENT) cout<<"Current"<<endl;
    else cout<<"Dmat"<<endl;
    cout<<"Balance : "<<this->balance<<endl;
}

void Account::set_id(int id){ this->id = id; }
void Account::set_type(account_type type) { this->type = type; }

int Account::get_id(){ return this->id; }
account_type Account::get_type() { return this->type; }

double Account::get_balance() { return this->balance; }

void Account::deposite(double amount)
{
    if(amount < 0 ) throw InvalidValue();

    this->balance += amount;
}

void Account::withdraw(double amount)
{
    if(amount > this->balance) throw insufficients_funds(id,this->balance,amount);

    this->balance -= amount;

}