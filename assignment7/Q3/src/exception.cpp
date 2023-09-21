#include "../include/exception.h"

insufficients_funds::insufficients_funds(int accid, double curr_balance, double amount)
{
    this->accid = accid;
    this->curr_balance =  curr_balance;
    this->withdraw_amount = amount;
}

void insufficients_funds::display()
{
    cout<<"\nCan not withdraw "<<this->withdraw_amount<<" from "<<this->curr_balance<<endl;
    cout<<"Insufficients funds...."<<endl;
}

InvalidValue::InvalidValue()
{
    this->error = "\nCan not deposit negative value.";
}

InvalidValue::InvalidValue(string error)
{
    this->error = error;
}


void InvalidValue::display()
{
    cout<<error<<endl;
}