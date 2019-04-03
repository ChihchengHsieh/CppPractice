# CppPractice
CppPractice

- [ ] Calling g++ to compile without any IDE
- [ ] Vscode IDE
- [ ] Visual Studio 2017


using the c++ complier in the Terminal:

g++ -Wall -std=c++17 main.cpp -o main

then,

./main to execute



# Primitive Data Types:

```c++

/*
The Primitive Data Types:
	character,
	integer,
	float,
	boolean
*/

/*
For integer:

short int -> 16 bits,
	signed int -> 16 bits,
	signed long int -> 32 bits,
	signed long long int -> 64 bits,

	unsigned short int -> 16 bits,
	unsigned int -> 16 bits,
	unsigned long int -> 32 bits,
	unsigned long long int -> 64 bits,

*/

// if you want to check the size of memeory:

// cout << "char:" << sizeof(char) << endl;

// if you want to check the size of certain type, you can use the values defined in <climits>

// cout << "Minunms Values: " << endl;
// cout << "char: " << CHAR_MIN << endl;
// cout << "int: " << INT_MIN << endl;
// cout << "short: " << SHRT_MIN << endl;

// cout << "Maximuns Values: " << endl;
// cout << "char: " << CHAR_MAX << endl;
// cout << "int: " << INT_MAX << endl;
// cout << "short: " << SHRT_MAX << endl;

// More can be found herw: http://www.cplusplus.com/reference/climits/

```

#### Delcaring Var

```c++
int age{18}; // Global Variable
int main()
{
  int ageTwo {25} // Local Variable
}
```


#### Commenting 

```c++
// Commneting methods 1

/*
Commenting method 2
*/
```

#### print Function


```c++
#include <iostream>
int main()
{
  std::cout << "Hello!" << std::endl;
}
```

For Saving time:

```c++
#include <iostream>
using std::cout;
using std::cin:
int main()
{
  cout << "Hello!" << endl;
}
```


#### Get From User:

```c++
#inculde <iostream>
using std::cin
int main()
{
  int age;
  cin >> age;
}

```

#### Initialise Var:

```c++
int vraibleName{21};
```

#### Const

```c++
/*
    Constant: just like the js const, can't be changed after declaring
*/

// FOUR ways to declare a constant

const int constantOne{50};
constexpr int constantTwo{50};
// Using enum
// Using Define -> Don't use this in Modern c++, cuz it's hard to debug
```

#### Array


```c++
/*
    Array: Element_Type arrayName [constant number of elements]
*/

// Declaring

int hightScorePerLevel[10]{3, 5}; //Declaring 3 and 5 to be the first and second element, rest of them are 0

// or

int hightScorePerLevelTwo[]{1, 2, 3, 4, 5}; // size will be automatically calculated

```


#### Vector (Provide Bound Checking and other methods)

```c++

 /*
    Vectors:
    An array that can grow and shrink size in the execution time -> Like the list in Js and Python
    It provide bound checking
    It provdie sort, reverse, find and more
    It's a object oriented template class
    Auto init to 0
    very efficient

    Object oriented container


    To declare the vector you have to:
    1. #include <vector>
    2 using std::vector

*/

vector<char> vowels(5); // a vowel that containing 5 characters

vector<char> vowelsTwo{'a', 'e', 'i', 'o', 'u'};

vector<double> hi_temperatures(365, 80); // fristArg: init_size of the vector, secArg: init Value

cout << "The first element in the vowelsTwo is: " << vowelsTwo[0] << endl; 
// if we use this kind of method -> no bound checking

cout << "With bound checking " << vowelsTwo.at(0) << endl;


/*
  Push Back (Similar to the push in the JS)
*/

vector<int> testScore{5, 10, 15, 20};

testScore.push_back(50);


/*
   Multidimensional Vector -> It's a vector of vectors
*/

vector<vector<int>> mulVectors{{1, 2, 3}, {4, 5, 6}};

// Acessing the element through:

cout << "One of the element: " << mulVectors[0][2] << endl;

// or

cout << mulVectors.at(0).at(2) << endl;

```

#### Expression and Statement

```c++
/*
    Expression and Statement in CPP 

    Expression:
        "A sequence of operators adn operands that specifies a computation"

    Statement:
        Statement contains Expressions.
        "terminal at the semicolon"
*/
```
    
    
#### Icrement and decrement

```c++
// Prefix notation ++x:
int result {0};
int counter {0};
result = ++counter // is same as
counter = counter +1
result = counter
// Increment before use

// Postfix notation x++:
result = counter ++ // is same as
result = counter
counter = counter +1
// Increment after use

```
    
#### Type Casting

```c++
// Type Casting in CPP
static_cast<Type>(variable)
(Type)variable // <- old way in c 
```
#### Enum

```c++
enum BasicSelection // enum can be a type
{
    FIRST,
    SECOND
};

// Declaring

BasicSelection sel {FIRST};
```

#### Inline Condition Operator:

```c++
/* 
    Conditional Operator
*/

bool trueDeclare{true};

int forInt{0};

forInt = trueDeclare ? 50 : 100;

```

#### Loops 

```c++
/*
   4 types of loop:

   1. Range-based for loop
   2. while loop
   3. do-while loop
   4. for loop
   
*/

for (int i{0}; i < 5; ++i)
{
    cout << i << endl;
};


// Comma operator

for (int i{0}, j{0}; i < 5; i++, j = j + 5)
{
    cout << i * j << endl;
};


// Loop through vector by vec.size()

vector<int> vec{1, 2, 3, 4, 5};

for (int i{0}; i < vec.size(); i++)
{
    cout << vec[i] << endl;
}

 /*
    Range-Based For loop (C++11)
*/

int scores[]{50, 100, 102};

for (auto s : scores) // auto keyword, let the c++ compiler to deduce the type by itself.
{
    cout << s << endl;
}

/*
    While Loop

    while (expr) {

    }
*/

while (!done)
{
    int guessingNum{0};

    cout << "please input a number" << endl;
    cin >> guessingNum;

    if (guessingNum == 100)
    {
        cout << "You get the number!" << endl;
        done = true;
    }
}

/*
    DO WHILE LOOP:
    do{
        statement;
    }while(expr);  <<- Semicolon in the end
*/

int inputNum{999};

do
{
    cout << "Please input a even number" << endl;
    cin >> inputNum;
} while (inputNum % 2 != 0);


/*
    Continue and Break:
    continue, go to the begining of the loop for the next iteration.
    break, no further statement
*/


/*
    Infinite Loop:
        For:
            for (;;){

            }
        While:
            while(true){

            }
    TO GET OUT:
        use break;
*/

```

#### String

```c++

/*
    C Style String -> an array of characters (Rarely used):
        #include <cstring>
*/

char fullName[50]{};
cin.getline(fullName, 50);
cout << strlen(fullName) << endl;

char first_name[50]{"Bjarne"};
char last_name[50]{"Stroustrup"};

char whole_name[50];

int first_name_length{static_cast<int>(strlen(first_name))};

int last_name_length{static_cast<int>(strlen(last_name))};

strcpy(whole_name, first_name);
strcat(whole_name, last_name);

int whole_name_length{static_cast<int>(strlen(whole_name))};

cout << "Whole name: " << whole_name_length << endl;
cout << "First name: " << first_name_length << endl;
cout << "Last name: " << last_name_length << endl;


/*
    C++ String:
        1. you have to include the <string> -> #include <string>
        2. Safer for the 
*/

string s1;             // empty
string s2{"Frank", 3}; // Fra
string s3(3, 'X');     // XXX
string s4{"RRRRRRRRRsdfa"};

for (auto c : s2)
{
    cout << c << endl;
}

cout << s4.substr(4, 6) << endl;
cout << s4.find("820") << endl; // return string::npos if not found
cout << s4.erase(2, 2) << endl;
cout << s4.length() << endl;

cout << "s1: " << s1 << endl;

// String concate

s1 = s2 + s3;

cout << "s1: " << s1 << endl;

// Using getline to get the whole sentence
// getline(cin, storingVariable, deliminator);

```

## Function

#### Declaration

```c++

/*
    Function Prototype:
        RETURN_TYPE FUNCTION_NAME (ARGUMENTS);
*/
/*
    Arguments: Usually pass in by value
        default argument value:
            Setting the defualt argument value in the "Prototyping" process but not in the decalration phase.
*/

int main()
{
  // Calling functions here
  /*
    Passing arrays to argument -> the array is passed by the reference rather than copy it 
  */
}

/*
    Function:
        RETURN_TYPE FUNCTION_NAME (ARGUMENTS) {
            STATEMENTS;
        }
*/

```

#### Function Overloading

```c++
/*
    Function Overlaoding:
        void functionOne(int arg);
        viud functionOne(double arg);
        -> THe CPP wull know which function to run according to the passed arguments.
*/
```


#### Passing Args by Reference

```c++
/*
    Passing by Reference:
        RETURN_TYPE FUNCTION_NAME (TYPE &ARG_NAME); -> Prototype
        RETURN_TYPE FUNCTION_NAME (TYPE &ARG_NAME){} -> Definition
*/
```

#### Satic Var

```c++
/*
    Scope:
        static TYPE VARIABLE_NAME {}; -> This can been seen in the local scope(Preserved). * Only init at the first run
        For the class -> every class instance will share this value.
*/
```


#### Inline Function

```c++
/*
    Inline Function:
        1. avoid function call overhead
        2. generate inline assembly code
        3. faster 
        4. could cause code bloat

        Using "inline" keyword before the return type

        example:
            inline TYPE FUNCTION_NAME () { return ; // directly return} 
*/

```

## Pointer



#### Pointer and Reference

```c++
/*
	Pointer and Reference:
	1. Whose value is an address
	2. To use the pointer, you must know the type that you are pointing
	3. Use Case:
	(1) Inside a function, I call use a pointer to access the data outside\
	(2) Operate on arrays efficiently
*/


// Declaring a pointer:
// Always init the ptr, nullptr means it's pointing nowhere

int *int_ptr{nullptr}; // init to

// // Storing the variable address to the ptr

int score{10};

int_ptr = &score;

cout << *int_ptr << endl; // Dereferencing

// changing the value through ptr

*int_ptr = 500;

cout << score << endl;

// when we allocate the ptr, ew need to delete the allocation

// For example:

int *int_ptr{nullptr};

int_ptr = new int;

cout << *int_ptr << endl;

delete int_ptr;

// For Declaring a ptr for containing a array:

double *tmp_ptr{nullptr};

size_t size{0};

cout << "How many temps? " << endl;

cin >> size;

tmp_ptr = new double[size]; // allocation

cout << tmp_ptr << endl;

delete tmp_ptr // delete the allocation

// So the array_name or the ptr is just pointing to the firstElement of the array

// Accessin the second element by *(array_name +1)  or *(ptr +1) or array_name[1] or ptr[1]

// ptr++ -> which let the ptr pointing to the next element
```

#### Const and Pointer

```c++

int high_score{100};
int low_score{65};

const int *score_ptr{&high_score};

// *socre_ptr = 60  // ERROR -> Cannot change the value pointing
score_ptr = &low_score; // OK

int *const score_ptr2 {&high_score};

*score_ptr2 = 60; // OK

score_ptr = &low_score; // ERROR -> Cannot change the address contained at the ptr

```

#### Passing Pointer to Function

```c++
/*
	Passing pointer to function:
	    Example:
		Prototype:
		    RETURN_TYPE FUNCTION_NAME(TYPE *PTR);
		Definition:
		    RETURN_TYPE FUNcTION_NAME(TYPE *PTR) {

		    }
		How do we call this function?
		    FUNCTION_NAME(&arg) -> this kind of function can change the value outside the scope of the function
*/

int doubleNumberByTwo(int *num)
{
    *num *= 2;
}

int numOne{5};

cout << numOne << endl;
doubleNumberByTwo(&numOne);
cout << numOne << endl


```
   
   
#### Return Pointer


```c++
/*
Return Ptr from a function:
    Prototype:
	TYPE *FUNCTION_NAME();
Warning: Don't return a local variable (int, string, double) inside a function -> it will be deleted
	However, vector and array are fine since they're storing an address.
*/

int *creat_array(size_t size, int init_value)
{
    int *new_array{nullptr};

    new_array = new int[size]; // this line is needed for identifying the size

    for (int i{0}; i < static_cast<int>(size); i++)
    {
        *(new_array + i) = init_value;
    }

    return new_array; // Return a ptr
}


int *arrayOne{nullptr};

arrayOne = creat_array(5, 20);

cout << "Calling the displayArray" << endl;

displayArray(arrayOne, 5);

```



#### Pitfall of Pointer

```c++
	/*
	Pitfall of the ptr:
	    1. without init -> Pointing to garbage 
	    2. pointint to released memory
	    3. not checking when "new" fail
	    4. forgetting to lease the allocated memory
*/
```



#### Reference

The dereferencing mark * is used at the last therefore, *source.data => we will get the value of data

```c++
vector<string> stooges{"Larry", "Moe", "Curly"};

for (auto &name : stooges)
{
    name = "Funny";
}

for (auto const &name : stooges) // passing by the reference can make the code more efficient.
{
    cout << name << endl;
}


int x{100};
int &ref = x; // how we init a reference // the ref can be used like x, it got the same value and the same memory address.
int *ptr{&ref};
cout << ref << endl;

// Thse two got the same address
cout << &ref << endl;
cout << &x << endl;
cout << ptr << endl;
cout << *ptr << endl;

// the best way to protect a ref or ptr is to use "const int *const ptr_name" to set as the argument

// if we want to set a array start from calling a ptr, we have to use:
int *intArrayPtr{nullptr};
// and then ->
intArrayPtr = new int[50]; // we have to giving the size


int intArray[50];

// Showing information

cout << intArrayPtr << endl;
cout << intArray << endl;

// -> Both of them contain the info of address

// Showing the first element thorugh ptr way:

cout << *intArrayPtr << endl;
cout << *intArray << endl;

// through the array way:

cout << intArrayPtr[2] << endl;
cout << intArray[2] << endl;

// it both seccess

```

## Object-Oriented Programming

```c++
 /*
        Creating a class:
            Normal:
                CLASS_NAME variable_name;
            Using ptr:
                CLASS_NAME *varaible_name = new CLASS_NAME(); ->> calling a constructor for creating an instance 
		!! Warning: using this method need to provide the "delete vriable_name" after the use of this class or it                     will lead to the memory leak
*/
```

Declaring the class:

```c++
class Player
{

  public:
    // attributes
    string name;
    int health;
    int xp;
    // methods

    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl;
    };
    bool is_dead();
}; // after the class decalring, a semi-collon is needed.


Player frank;
Player hero;

Player *enemy{nullptr};
enemy = new Player;
delete enemy;

Player players[]{frank, hero};


Class methods*/

Player frank;
frank.name = "frank";
frank.health = 100;
frank.xp = 12;
frank.talk("Hi there");

Player *enemy{nullptr};
enemy = new Player;
enemy->name = "Enemy";
enemy->health = 100;
enemy->xp = 15;
enemy->talk("I will destr

```


#### Public and Private


```c++
 /*
        Talking about the public and private:
            CLass fields is private by default, and the struct is public by default.
*/

```

#### Constructor

```c++

/*
Constructors -> the c++ has the default constructor
!! however, once a constructor is defined in the class, the default constructor will be removed
*/

```
#### Overloading Operator


```c++

/*
	Operator Overlaoding
	    Operators that can't be overlaoded: :: :?  . sizeof

	    Syntax:
		TYPE &TYPE::operator=(const TYPE &rhs);
	    Q: why do we need to returnthis? ==> it's the object
	    A: return the current by reference to allow chain assignment
*/



```

#### Inheritance


```c++
/*
    
Inheritance:
    We got single inheritance and multiple inheritance.
    Derived class is the children class
    and the Base class is the parent class
    "Is-A relationship" Derived class is a subtype of their parentClass

Inheritance Syntax:
    class Bass {
	// Base class members ...
    };

    class Derived : access-specifier Base {
	// Derived  class members
    };

    Access-specifier can be: public, private or protected.
	public: The most common, "Is-A" relationship
	private, protected: Different from composition, "derived class has a base class"


Inheritance vs Decomposition:

*/

```

#### Account.h file 

delcaring the class in the .h file

```c++
#pragma once 
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
//

class Account
{

  /*
  	Three different methods of inheritance:
  */
  
  /*
    class DERIVED : public BASE{};
    public: all field will not be changed.
    protected: the public field will be changed to protected, and the protected field won't be changed.
    private: all public and protected fields will be changed to private
  */

  /*
    Inheritance:
      When we call a children class class, the parent constructor will be called first, then the children constructor later.
  */

  
  /*
  	FRIEND RELATIONSHIP
  */
  // a friend of a class can access the private field -> only can be granted
  // ex: friend void display_account(Account &a); -> accessing to everything, or
  // ex2: friend void OtherClass::display_accounts(Account &a) -> OtherClass' display_accounts funciton can get the private
  //      field of this class
  // ex3: friend class OtherClass;


private:
  // "this" is a reserved keyword pointing  to the current object.
  static int num_accounts;  // The static variable shared by this class and the instances
  string name;
  double balance{0};

public:
  // Constructors (multiple constructors are allowed for a class) 
  // -> we can also declare the constructor here and define it at the CLASS_NAME.cpp file

  /*
  Constructor initialization list:
    PREVIOUS_WAY:
      Account(string inputName, double inputBalance){
        name = inputName;
        balance = inputBalance;
      }
    BETTER_WAY:     // Q: we don't have to specify the input type??
      Account()
      : name{"None"}, balance{0} { 
      // -> these two var are from the field of this class, so the constructor init list will find these vairables and check 
      // the type of them
      }
  */
  Account(string name_val = "None", double balance_val = 0.0); 
  // --> to make this kind of constructor, we just need to define one constructor and giving all the default value,
  // --> if the value is not provided, then the default value will be passed into the constructor funciton



  /*
    Sytax of the copy constructor:
      TYPE::TYPE (const TYPE &soruce){
          // code or init list to copy the object
      }
  */
  // Copy Constructor -> used when we passed by value <CPP also provide a default copy constructor>
  Account(const Account &source); // COPY
  // Shallow Copy -> the default  copy constructor do
  // Deep copy -> the dereferencing first, and get the value rather than the address
  
  
  /* 
	MOVE CONSTRUCTOR
  */
  // && R-value reference -> r value is not the vairable
  Account(Account &&source); // MOVE
  

  
  
  /*
  	DESTRUCTOR
  */
  virtual ~Account(); // DESTRUCTOR
  
  // Destructor (only one desctructor is allowed for a class) 
  // -> the desctrutor is called after the class is not availile anymore 
  //- > like the class in a function, out of the local scope the instance will not exist anymore.

  /*
	CONST WITH CLASS
  */ 
  
  // void functionName()const{} -> 
  // --> it means this function is considered as const at outside, 
  // --> so we can call this method when we define an instance as const



  /*
  	CLASS STATIC METHOD
  */
  // static class members: --> class-wide information
  static int get_num_accounts();


  /*
	STRCTU V.S CLASS
  */


  // Structs vs Classes -> almost the same as the class, but the value is public by-default

  // The struct use case: using the struct for passive objects with public access !! BUT don't decalre method in struct


  ///////////////////////// Functions /////////////////////////
  
  Account &operator=(const Account &rhs); // Overloading Operator as the member function
  
  
  /*
  	INLINE DEFINITION
  */
  void set_balance(double bal) { balance = bal; };
  double get_balance() { return balance; };
  
  
  // OTHER FUNCTIONS CAN BE DEFINED AT THE .CPP FILE
  void set_name(std::string n);
  std::string get_name();


  // THE OVERIDDING VIRTUAL FUNCTION, WHICH OVERRIDES THE ABSTRACT 
  virtual bool deposit(double amount);
  virtual bool withdraw(double amount);
}; // << --- REMENBER THE SIMICOLON at the end of CLASS DECLARATIOn


```



#### Smart Pointer









