#pragma once
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
// delcaring the class in the .h file

class Account
{

  // Three different methods of inheritance:
  /*
    class DERIVED : public BASE{};
    public: all field will not be changed.
    protected: the public field will be changed to protected, and the protected field won't be changed.
    private: all public and protected fields will be changed to private.

  */

  /*
    Inheritance:
      When we call a children class class, the parent constructor will be called first, then the children constructor later.
  
  */

  // This is a reserved keyword pointing  to the current object.

private:
  static int num_accounts; // init it at the player.cpp
  string name;
  double balance{0};

public:
  // Constructors (multiple constructors are allowed for a class) -> we can also declare the constructor here and define it at the CLASS_NAME.cpp file

  /*
  Constructor initialization list:
    PREVIOUS_WAY:
      Account(string inputName, double inputBalance){
        name = inputName;
        balance = inputBalance;
      }
    BETTER_WAY:     // Q: we don't have to specify the input type??
      Account(): name{"None"}, balance{0}{ -> these two var are from the field of this class, so the constructor init list will find these vairables and check the type of them
      }
  */

  // OVERLOADING CONSTRUCTOR
  // Account();
  // Account(string name_val);
  Account(string name_val = "None", double balance_val = 0.0); // to make this kind of constructor, we just need to define one constructor and giving all the default value,
  // if the value is not provided, then the default value will be passed into the constructor funciton

  // Copy Constructor -> used when we passed by value <CPP also provide a default copy constructor>
  /*
    Sytax of the copy constructor:
      TYPE::TYPE (const TYPE &soruce){
          // code or init list to copy the object
      }
  */

  Account(const Account &source);

  // Destructor (only one desctructor is allowed for a class) -> the desctrutor is called after the class is not availile anymore -> like the class in a function, out of the local scope the instance will not exist anymore.

  ~Account();

  // Shallow Copy -> the default  copy constructor do

  // Deep copy -> the dereferencing first, and get the value rather than the address

  // !! important concept -> the dereferencing mark * is used at the last therefore, *source.data => we will get the value of data

  // Move constructors

  // && R-value reference -> r value is not the vairable

  Account(Account &&source);

  // const with classes -> for example

  // void functionName()const{} -> it means this function is considered as const at outside, so we can call this method when we define an instance as const

  // static class members: --> class-wide information

  static int get_num_accounts();

  // Structs vs Classes -> almost the same as the class, but the value is public by-default

  // the struct use case: using the struct for passive objects with public access !! BUT don't decalre method in struct

  // a friend of a class can access the private field -> only can be granted
  // ex: friend void display_account(Account &a); -> accessing to everything, or
  // ex2: friend void OtherClass::display_accounts(Account &a) -> OtherClass' display_accounts funciton can get the private field of this class
  // ex3: friend class OtherClass;

  ///////////////////////// Functions

  void set_balance(double bal) { balance = bal; };
  double get_balance() { return balance; };

  // void set_name(string n);
  // string get_name();

  // first defining a clas here;

  void set_name(std::string n);
  std::string get_name();

  bool deposit(double amount);
  bool withdraw(double amount);
};
