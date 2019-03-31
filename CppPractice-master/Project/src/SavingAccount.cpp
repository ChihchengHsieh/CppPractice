#include <iostream>
#include "SavingAccount.h"

SavingAccount::SavingAccount()
    : initRate(3.0) // this is how we create the variable field. Q: what if we want to declair three of them "name, balance, initRate"
{
    cout << "SavingAccount constructor called" << endl;
}

SavingAccount::~SavingAccount() {}

void SavingAccount::withdraw(double amount)
{
    std::cout << "SavingAccount withdraw called with" << amount << endl;
}

void SavingAccount::deposit(double amount)
{
    std::cout << "SavingAccount deposit called with" << amount << endl;
}