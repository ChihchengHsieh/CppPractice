#include <iostream>
#include "SavingAccount.h"

/*
    Redefine or Override the base class method

*/

// passing the arguement to the base class

/*
    Derived::Derived(arg)
        : Base{x}, {optional initializer for Derived}
        {
            CODE HERE
        }        
*/

// The move and copy constructors will not be inherited

SavingAccount::SavingAccount(const SavingAccount &other)
    : Account(other), initRate{other.initRate}
{
    cout << "The SavingAccount Copy Constructor called" << endl;
}

// The overloading assignment operator

SavingAccount &SavingAccount::operator=(const SavingAccount &rhs)
{
    if (this != &rhs) // if we want to access "this" , it has to be a member function
    {
        Account::operator=(rhs);
        initRate = rhs.initRate;
    }
    return *this;
}

SavingAccount::SavingAccount()
    : initRate(3.0) // this is how we create the variable field. Q: what if we want to declair three of them "name, balance, initRate"
{
    cout << "SavingAccount constructor called" << endl;
}

SavingAccount::SavingAccount(std::string name_val, double balance_val, double initRate_val)
    : Account{name_val, balance_val}, initRate{initRate_val}
{
    cout << "The whole constructor called" << endl;
}

SavingAccount::~SavingAccount() {}

bool SavingAccount::withdraw(double amount)
{
    std::cout << "SavingAccount withdraw called with" << amount << endl;
    return Account::withdraw(amount);
}

bool SavingAccount::deposit(double amount)
{
    std::cout << "SavingAccount deposit called with" << amount << endl;
    amount += amount * initRate;
    return Account::deposit(amount);
}