#include "Account.h"

class SavingAccount : public Account
{

    /*
    
    A derived class does NOT inherit:
        - Base class contructor, destructor, overloaded assignment operator and friend function.
    
    */

  public:
    double initRate;
    SavingAccount();
    ~SavingAccount();
    void deposit(double amount);  // we have deposit and withdraw method in the Account class as well.
    void withdraw(double amount); // we can directly overloading the original method in this class; other things we don't touch it, then it will come from the base model;
};