#include "Account.h"
#include <string>

/*
  - The abstract class can't be instantiacted: -> used as the base class:
    - Contain at least one pure virtual function:
      - Pure Virtual Fucntion:
        virtual RETURN_TYPE  FUNCTION_NAME () = 0;
          - Doesn't have to provide the implementation
          - The derived class must override the base class (this function) - If not, then the derived class is abstract as well.
          - The Concret class has to provide the keyword "override" for the pure virtual function
  - Concrete class:
    - All the member function are defined
    - Used fir intantiate objects

*/

/*
  Multiple Inheritance:
  class DERIVED : public BASE_1, public BASE_2{};
*/

/*
  Virtual Function:
    - can be override in derived class, and can be bound dinamatically at run time
  For solving the problem of : Account *ptr = new SavingAccount();
    This ptr->deposit will call the deposit method on the account class since it depends on the pointer type:
*/

/*
  Final Specifier:
    class CLASS_NAME final {};
    -> then no class can be inherited from this class ==> whichh means this class is the last node on the class diagram
*/

class SavingAccount : public Account
{

  /*
    
    A derived class does NOT inherit:
        - Base class contructor, destructor, overloaded assignment operator and friend function.
    
    */

public:
  double initRate;
  SavingAccount();
  SavingAccount(std::string name_val, double balance_val, double initRate_val);
  ~SavingAccount();
  SavingAccount &operator=(const SavingAccount &rhs); // assignment operator
  SavingAccount(const SavingAccount &other);          // Copy constructor

  virtual bool deposit(double amount);  // we have deposit and withdraw method in the Account class as well.
  virtual bool withdraw(double amount); // we can directly overloading the original method in this class; other things we don't touch it, then it will come from the base model;
};