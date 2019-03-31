#include "Account.h" // -> the cpp file has to include the .h file
                     // to defining the methods in thie cpp file
                     // no semi-collon is needed after the definition of the function

// Account::Account()
//     : Account{"None", 0.0} // these methods providing the default value for each constructor
// {
// }

// Account::Account(string name_val)
//     : Account(name_val, 0.0)
// {
// }

int Account::num_accounts = 0; // class-wide static variable is declared here.

int Account::get_num_accounts()
{
    return num_accounts;
}

Account::~Account() // destructor
{
    cout << "Destructor called" << endl;
    --num_accounts;
}

Account::Account(const Account &source) // copy constructor
    : name{source.name}, balance{source.balance}
{
    cout << "Copy constructor is called" << endl;
}

Account::Account(string name_val, double balance_val)
    : name{name_val}, balance{balance_val} // leave the longest arguments as the full version, and other construtor will just use the full verison of the constructor
{
    cout << "Account constructor called" << endl;
    ++num_accounts;
}

void Account::set_name(std::string n)
{
    name = n;
}

std::string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    std::cout << "Base Account deposit called with " << amount << endl;
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    std::cout << "Base Account withdraw called with " << amount << endl;

    if (balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}