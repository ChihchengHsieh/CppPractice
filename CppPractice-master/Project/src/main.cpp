#include <iostream>
#include <climits>
#include <vector>
#include <cstring>
#include <typeinfo>
#include <string>
#include <cmath>

#include "Account.h"
#include "Mystring.h"
#include "SavingAccount.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
// Why shouldn't we use "using namespace std;" instead?
// Cuz the std also bring other defined names and may have conflicts.

// The global variable is automatically initialised as 0
// global varaible can be accessed by any part of program

// int age{18}; // Global Variable6

// The compiler will look the varaible inside the local scope first

/*
The Primitive Data Types:
	character,
	integer,
	float,
	boolean
*/

/*
For integer:

	Q: What's the meaning of using short since the size is not changed?

	short int -> 16 bits,
	signed int -> 16 bits,
	signed long int -> 32 bits,
	signed long long int -> 64 bits,

	unsigned short int -> 16 bits,
	unsigned int -> 16 bits,
	unsigned long int -> 32 bits,
	unsigned long long int -> 64 bits,

*/

// declaring a class here

// class Player
// {

//   public:
//     // attributes
//     string name;
//     int health;
//     int xp;
//     // methods

//     void talk(string text_to_say)
//     {
//         cout << name << " says " << text_to_say << endl;
//     };
//     bool is_dead();
// }; // after the class decalring, a semi-collon is needed.

// class Account
// {
//     string name;
//     double balance{0};

//     bool deposit(double bal){balance += bal};
//     bool withdraw(double bal){balance -= bal};
// };

// Creating a function:

const double pi{3.1415926};
double calc_area_circle(double radius);
void area_circle();
void showingTwoValues(double firstNumber = 50.5, double secondNumber = 199.7);

string print_guest_list(const string &guest_1, const string &guest_2, const string &guest_3);
void clear_guest_list(string &guest_1, string &guest_2, string &guest_3);

double a_penny_doubled_everyday(int days, double inputValue);

string print_guest_list(const string guest_list[], size_t guest_list_size);
void clear_guest_list(string guest_list[], size_t guest_list_size);

int doubleNumberByTwo(int *num);
void displayArray(const int *const array_ptr, size_t size);
int *creat_array(size_t size, int init_value);

int *initDeclaredArray(size_t size, int value);

// declaring a class

int main()
{

    // Commneting methods 1

    /*
		Commenting method 2
	*/

    // How we use print function in c++

    // int favoriteNumebr; // Declaring varaible

    // cout << "Enter your favorite number btw 1 and 100" << endl; // endl for end line

    // cin >> favoriteNumebr; // request an input

    // cout << "your favorite numnber is " << favoriteNumebr << endl;

    // the cin can be chained

    // int data1, data2;

    // cin >> data1 >> data2; // it request 2 int // can be input by number1 number2

    // And Print them out

    // cout << "You just input " << data1 << " and " << data2 << endl;

    // A variable is ab avstraction for memory location

    // In the c++, you must decalre before use

    // The best initialiser after c++11 is using {}:

    // int integer{21};
    // char character{'a'};
    // bool boolean{false};

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

    /*
        Constant: just like the js const, can't be changed after declaring
    */

    // FOUR ways to declare a constant

    // const int constantOne{50};
    // constexpr int constantTwo{50}; // Q: difference
    // Using enum
    // Using Define -> Don't use this in Modern c++, cuz it's hard to debug

    /*
        Array: Element_Type arrayName [constant number of elements]
    */
    // int hightScorePerLevel[10]{3, 5}; //Declaring 3 and 5 to be the first and second element, rest of them are 0

    // or

    // int hightScorePerLevelTwo[]{1, 2, 3, 4, 5}; // size will be automatically calculated

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

    // vector<char> vowels(5); // a vowel that containing 5 characters

    // vector<char> vowelsTwo{'a', 'e', 'i', 'o', 'u'};

    // vector<double> hi_temperatures(365, 80); // fristArg: init_size of the vector, secArg: init Value

    // cout << "The first element in the vowelsTwo is: " << vowelsTwo[0] << endl; // if we use this kind of method -> no bound checking

    // cout << "With bound checking " << vowelsTwo.at(0) << endl;

    // system("pause"); // Pause the program

    /*
    * Push Back (Similar to the push in the JS)
    */

    // vector<int> testScore{5, 10, 15, 20};

    // testScore.push_back(50);

    // cout << "Wihtout bounding checking: " << testScore[9] << endl; // it will just give a random value

    // The size method to check the size of vector

    // cout << "The size of testScore: " << testScore.size() << endl;

    /*
     *  Multidimensional Vector 
     * 
     * -> It's a vector of vectors
     */

    // vector<vector<int>> mulVectors{{1, 2, 3}, {4, 5, 6}};

    // Acessing the element through:

    // cout << "One of the element: " << mulVectors[0][2] << endl;

    // or

    // cout << mulVectors.at(0).at(2) << endl;

    /*
     * Expression and Statement in CPP 
     * 
     * Expression:
     *  "A sequence of operators adn operands that specifies a computation"
     *  
     * Statement:
     *  Statement contains Expressions.
     *  "terminal at the semin column"
    // */

    // int num1{5};
    // int num2{10};

    // chaining the assignment operator

    // num1 = num2 = 5000;

    // cout << "num1 is " << num1 << endl;
    // cout << "num2 is " << num2 << endl;

    // int counter {0};
    // int result {0};

    // Icrement and decrement

    // Prefix notation ++x:
    // result = ++counter is same as
    // counter = counter +1
    // result = counter
    // Increment before use

    // Postfix notation x++:
    // result == counter ++ is same as
    // result = counter
    // counter = counter +1
    // Increment after use

    // Type Casting in CPP
    // static_cast<Type>()
    // old way in c -> (Type)variable

    // int num3 {50};

    // cout << "Before casting to double: " << num3 << endl;

    // cout << "After casting to double: " <<  static_cast<double>(num3) + 0.9<< endl;

    /*
        Equality ( ==  & != )
    */

    // Use std::boolalpha to control the outout type

    // cout << (50+50  == 100 ) << endl; // expect 0 or 1
    // cout << std::boolalpha;
    // cout << (50+50 == 100) << endl; // expect true or false
    // cout << std::noboolalpha;

    // Computer storing the data is approximation; therefore, 12 ==  11.99999999 -> True

    // int 10 = double 10.0

    // <=> three way comparison (C++20)

    // logical opt ! (not), && (and), || (or)

    // Compound Assignment Opt
    /*
        lhs <<= rhr  --> lhs = lhs << rhs
        ^ -> Bitwise exclusive OR
    */

    /*
        if statement
    */

    // if (true) {

    //     int intInsideIfBlock {5};
    //     cout << "True Statement" << endl;
    //     cout << "Inside the for loop: " << intInsideIfBlock << endl; // It's only availible inside the if block
    // } else if (false) {
    //     cout << "Never display";
    // }

    // cout << "Outside the for loop: " << intInsideIfBlock << endl;

    /*
        Switch Case
        enum is used with switch often
    */

    // enum BasicSelection // enum can be a type
    // {
    //     FIRST,
    //     SECOND
    // };

    // char selection{'a'};

    // BasicSelection sel{FIRST};

    // switch (sel)
    // {
    // case FIRST:
    //     cout << "You select first" << endl;
    //     break;
    // case SECOND:
    //     cout << "You select second" << endl;
    //     break;
    // case 'a':
    // case 'A':
    //     cout << "the Selection is a" << endl;
    //     break;
    // case 'b':
    // case 'B':
    //     cout << "The selection is b" << endl;
    //     break;
    // default:
    //     cout << "None A or B is selected" << endl;
    // }

    /* 
        Conditional Operator
    */

    // bool trueDeclare{true};

    // int forInt{0};

    // forInt = trueDeclare ? 50 : 100;

    // cout << "The forInt is: " << forInt << endl;

    /*
    *   3 types of loop:
    *   
    *   1. Range-based for loop
    *   2. while loop
    *   3. do-while loop
    *   4. for loop
    * 
    * 
    *   FOR LOOP:
    *   for (init; condition; increment){
    *   
    *   }
    * 
    *   
    */

    // for (int i{0}; i < 5; ++i)
    // {
    //     cout << i << endl;
    // };

    // // Comma operator

    // for (int i{0}, j{0}; i < 5; i++, j = j + 5)
    // {
    //     cout << i * j << endl;
    // };

    // vector<int> vec{1, 2, 3, 4, 5};

    // for (int i{0}; i < vec.size(); i++)
    // {
    //     cout << vec[i] << endl;
    // }

    /*
        Range-Based For loop (C++11)
    */

    // int scores[]{50, 100, 102};

    // for (auto s : scores) // auto keyword, let the c++ compiler to deduce the type by itself.
    // {
    //     cout << s << endl;
    // }

    /*
        While Loop

        while (expr) {

        }
    */

    // bool done{false};

    // while (!done)
    // {

    //     int guessingNum{0};

    //     cout << "please input a number" << endl;
    //     cin >> guessingNum;

    //     if (guessingNum == 100)
    //     {
    //         cout << "You get the number!" << endl;
    //         done = true;
    //     }
    // }

    /*
        DO WHILE LOOP:
        do{
            statement;
        }while(expr);  <<- Semicolon in the end
    */

    // int inputNum{999};

    // do
    // {

    //     cout << "Please input a even number" << endl;
    //     cin >> inputNum;
    // } while (inputNum % 2 != 0);

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

    /*
        Character functions 

        #include <cctype> helpful functions in this library

    */

    /*
        C Style String -> an array of characters (Rarely used):
            #include <cstring>
    */

    // char fullName[50]{};
    // cin.getline(fullName, 50);
    // cout << strlen(fullName) << endl;

    // char first_name[50]{"Bjarne"};
    // char last_name[50]{"Stroustrup"};

    // char whole_name[50];

    // int first_name_length{static_cast<int>(strlen(first_name))};

    // int last_name_length{static_cast<int>(strlen(last_name))};

    // strcpy(whole_name, first_name);
    // strcat(whole_name, last_name);

    // int whole_name_length{static_cast<int>(strlen(whole_name))};

    // cout << "Whole name: " << whole_name_length << endl;
    // cout << "First name: " << first_name_length << endl;
    // cout << "Last name: " << last_name_length << endl;

    /*
        C++ String:
            1. you have to include the <string> -> #include <string>
            2. Safer for the 
    */

    // string s1;             // empty
    // string s2{"Frank", 3}; // Fra
    // string s3(3, 'X');     // XXX
    // string s4{"mike820808"};

    // for (auto c : s2)
    // {
    //     cout << c << endl;
    // }

    // cout << s4.substr(4, 6) << endl;
    // cout << s4.find("820") << endl; // return string::npos if not found
    // cout << s4.erase(2, 2) << endl;
    // cout << s4.length() << endl;

    // cout << "s1: " << s1 << endl;

    // // String concate

    // s1 = s2 + s3;

    // cout << "s1: " << s1 << endl;

    // Using getline to get the whole sentence
    // getline(cin, storingVariable, deliminator);

    // string unformatted_full_name{"StephenHawking"};

    // //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    // //----WRITE YOUR CODE BELOW THIS LINE----

    // string first_name{unformatted_full_name, 0, 7};

    // string last_name = unformatted_full_name.substr(7, 7);

    // string formatted_full_name{first_name + last_name};

    // formatted_full_name.insert(7, " ");

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    // cout << formatted_full_name;

    // string journal_entry_1{"Isaac Newton"};
    // string journal_entry_2{"Leibniz"};

    // journal_entry_1.erase(0, 6);

    // if (journal_entry_1[0] > journal_entry_2[0])
    // {
    //     journal_entry_1.swqp(journal_entry_2);
    // }

    // cout << journal_entry_1 << endl;

    /*
        Function:
            RETURN_TYPE FUNCTION_NAME (ARGUMENTS) {
                STATEMENTS;
            }
    */

    // double bill_total {102.78};
    // int number_of_guests {5};

    // //DO NOT MODIFY THE CODE ABOVE THIS LINE----
    // //----WRITE YOUR CODE BELOW THIS LINE----

    // double individual_bill {bill_total/number_of_guests};

    // double individual_bill_1 = floor(individual_bill);
    // double individual_bill_2 = round(individual_bill);
    // double individual_bill_3 = ceil(individual_bill*100) / 100;

    /*
        Function Definition:
            go to the top of the file to see the function
    */

    // area_circle();

    /*
        Function Prototype:
            RETURN_TYPE FUNCTION_NAME (ARGUMENTS);
    */

    /*
        Arguments: Usually pass in by value
            default argument value:
                Setting the defualt argument value in the "Prototyping" process but not in the decalration phase.
    */

    // showingTwoValues();

    /*
        Function Overlaoding:
            void functionOne(int arg);
            viud functionOne(double arg);
            -> THe CPP wull know which function to run according to the passed arguments.
    */

    /*
        Passing arrays to argument -> the array is passed by the reference rather than copy it 
    */

    // string guest_list[]{"Larry", "Moe", "Curly"};
    // size_t guest_list_size{3};

    // print_guest_list(guest_list, guest_list_size);
    // clear_guest_list(guest_list, guest_list_size);
    // print_guest_list(guest_list, guest_list_size);

    /*
        Passing by Reference:
            RETURN_TYPE FUNCTION_NAME (TYPE &ARG_NAME); -> Prototype
            RETURN_TYPE FUNCTION_NAME (TYPE &ARG_NAME){} -> Definition
    */

    // print_guest_list(guest_1, guest_2, guest_3);
    // clear_guest_list(guest_1, guest_2, guest_3);
    // print_guest_list(guest_1, guest_2, guest_3);

    /*
        Scope:
            static TYPE VARIABLE_NAME {}; -> This can been seen in the local scope(Preserved). * Only init at the first run
            For the class -> every class instance will share this value.
        Why? 
            Then we don't need to use the global scope anymore.
    */

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

    /*
        Recursive Function
    */

    // double total_amount{a_penny_doubled_everyday(18, 0.01)};

    // cout << total_amount << endl;

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

    // int *int_ptr{nullptr}; // init to

    // // Storing the variable address to the ptr

    // int score{10};

    // int_ptr = &score;

    // cout << *int_ptr << endl; // Dereferencing

    // // changing the value through ptr

    // *int_ptr = 500;

    // cout << score << endl;

    // when we allocate the ptr, ew need to delete the allocation

    // For example:

    // int *int_ptr{nullptr};

    // int_ptr = new int;

    // cout << *int_ptr << endl;

    // delete int_ptr;

    // For Declaring a ptr for containing a array:

    // double *tmp_ptr{nullptr};

    // size_t size{0};

    // cout << "How many temps? " << endl;

    // cin >> size;

    // tmp_ptr = new double[size]; // allocation

    // cout << tmp_ptr << endl;

    // delete tmp_ptr // delete the allocation

    // So the array_name or the ptr is just pointing to the firstElement of the array

    // Accessin the second element by *(array_name +1)  or *(ptr +1) or array_name[1] or ptr[1]

    // ptr++ -> which let the ptr pointing to the next element

    /*
        Const and pointer
    */

    // int high_score{100};
    // int low_score{65};

    // const int *score_ptr{&high_score};

    // *socre_ptr = 60  // ERROR -> Cannot change the value pointing
    // score_ptr = &low_score;

    // int *const score_ptr2 {&high_score};

    // *score_ptr2 = 60; // OK

    // score_ptr = &low_score; // ERROR -> Cannot change the address contained at the ptr

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

    // int numOne{5};

    // cout << numOne << endl;
    // doubleNumberByTwo(&numOne);
    // cout << numOne << endl;

    /*
        Return Ptr from a fucntion:
            Prototype:
                TYPE *FUNCTION_NAME();
        Warning: Don't return a local variable (int, string, double) inside a function -> it will be deleted
                However, vector and array are fine since they're storing an address.
    */

    // int *arrayOne{nullptr};

    // arrayOne = creat_array(5, 20);

    // cout << "Calling the displayArray" << endl;

    // displayArray(arrayOne, 5);

    /*
        Pitfall of the ptr:
            1. without init -> Pointing to garbage 
            2. pointint to released memory
            3. not checking when "new" fail
            4. forgetting to lease the allocated memory

    */

    /*
        Reference:
    */

    // vector<string> stooges{"Larry", "Moe", "Curly"};

    // for (auto &name : stooges)
    // {
    //     name = "Funny";
    // }

    // // Q : when using the ranged-base for loop, it's better to use the referencing?

    // for (auto const &name : stooges) // using passing by the reference can make the code more efficient.
    // {
    //     cout << name << endl;
    // }

    // Q: it's same to call int NANE and int &Name ?

    // int x{100};
    // int &ref = x; // how we init a reference!!!!!! // therefore the ref can be used like x, it got the same value and the same memory address.
    // int *ptr{&ref};
    // cout << ref << endl;

    // // Thse two got the same address
    // cout << &ref << endl;
    // cout << &x << endl;
    // cout << ptr << endl;
    // cout << *ptr << endl;

    // the best way to protect a ref or ptr is to use "const int *const ptr_name" to set as the argument

    // if we want to set a array start from calling a ptr, we have to use:

    // int *intArrayPtr{nullptr};
    // // and then ->
    // intArrayPtr = new int[50]; // we have to giving the size

    // // Q: this is the same as declaring an array like this?

    // int intArray[50];

    // // Showing information

    // cout << intArrayPtr << endl;
    // cout << intArray << endl;

    // // -> Both of them contain the info of address

    // // Showing the first element thorugh ptr way:

    // cout << *intArrayPtr << endl;
    // cout << *intArray << endl;

    // // through the array way:

    // cout << intArrayPtr[2] << endl;
    // cout << intArray[2] << endl;

    // it both seccess

    // Question: so we are using a type an returning an array, we cant just use the return ptr type?

    // Experiment:

    // int *arrayPtr{nullptr};

    // arrayPtr = initDeclaredArray(5, 10);

    // cout << arrayPtr << endl; // expeting to see an address

    // cout << "The output of the function: " << initDeclaredArray(5, 10) << endl;

    // cout << "New Program" << endl;

    /*
        Object-oriented Programmin:
    */

    // C programming is the procedural programming.

    /*
        Class !!  objected-programming
    */

    //using a pointer for declaring a class:

    /*
        Creating a class:
            Normal:
                CLASS_NAME variable_name;
            Using ptr:
                CLASS_NAME *varaible_name = new CLASS_NAME(); ->> calling a constructor for creating an instance 
                !! Warning: using this method need to provide the "delete vriable_name" after the use of this class or it will lead to the memory leak
    */

    // Player frank;
    // Player hero;

    // Player *enemy{nullptr};
    // enemy = new Player;
    // delete enemy;

    // Player players[]{frank, hero};

    /*Class methods*/

    // Player frank;
    // frank.name = "frank";
    // frank.health = 100;
    // frank.xp = 12;
    // frank.talk("Hi there");

    // Player *enemy{nullptr};
    // enemy = new Player;
    // enemy->name = "Enemy";
    // enemy->health = 100;
    // enemy->xp = 15;
    // enemy->talk("I will destroy you");

    /*
        Talking about the public and private:
            CLass fields is private by default, and the struct is public by default.
    */

    // Account frank;

    // frank.set_name("Frank");

    // cout << frank.get_name() << endl;

    /*
        Constructors -> the c++ has the default constructor

        !! however, once a constructor is defined in the class, the default constructor will be removed

    */

    /**********
     * Operator Overlaoding
     *      Operators that can't be overlaoded: :: :? .* . sizeof
     *      
     *      Syntax:
     *          TYPE &TYPE::operator=(const TYPE &rhs);
     *      Q: why do we need to return *this? ==> it's the object
     *      A: return the current by reference to allow chain assignment
     * ************/

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

    Account acc;
    acc.deposit(1000);
    acc.withdraw(500);

    SavingAccount savingAcc;
    savingAcc.deposit(1000);
    savingAcc.withdraw(500);

    cout << "The init rate is " << savingAcc.initRate << endl; // after this, the destructors are called.
}

//////////////////////////// Function Definitions ////////////////////////////

int *initDeclaredArray(size_t size, int value)
{

    // int newArray[static_cast<int>(size)]; // it's considered as the local variable, so it will deleted before sending to the outisde scope

    int *newArray{nullptr};

    newArray = new int[size];

    for (size_t i{0}; i < size; i++)
    {
        newArray[i] = value;
    }

    cout << "The address int the function: " << newArray << endl;

    return newArray;
}

void displayArray(const int *const array_ptr, size_t size)
{
    for (int i{0}; i < static_cast<int>(size); i++)
    {
        cout << *(array_ptr + i) << endl;
    }
}

int *creat_array(size_t size, int init_value)
{
    int *new_array{nullptr};

    new_array = new int[size]; // this line is needed ->    Q: this is the allocation for telling the array that we're going to store a sequence of value?

    for (int i{0}; i < static_cast<int>(size); i++)
    {
        *(new_array + i) = init_value;
    }

    return new_array; // Return a ptr
}

int doubleNumberByTwo(int *num)
{
    *num *= 2;
}

// A penny is represented as 0.01

double a_penny_doubled_everyday(int days, double inputValue)
{

    if (days == 1)
    {
        return inputValue;
    }

    return a_penny_doubled_everyday(days - 1, inputValue * 2);
};

string print_guest_list(const string &guest_1, const string &guest_2, const string &guest_3)
{
    cout << guest_1 << endl;
    cout << guest_2 << endl;
    cout << guest_3 << endl;
};

void clear_guest_list(string &guest_1, string &guest_2, string &guest_3)
{
    guest_1 = " ";
    guest_2 = " ";
    guest_3 = " ";
};

string print_guest_list(const string guest_list[], size_t guest_list_size)
{

    for (int i{0}; i < static_cast<int>(guest_list_size); i++)
    {
        cout << guest_list[i] << endl;
    }

    // for (auto element : guest_list)
    // {
    //     cout << element << endl;
    // }

    return guest_list[0];
}

void clear_guest_list(string guest_list[], size_t guest_list_size)
{

    for (int i{0}; i < static_cast<int>(guest_list_size); i++)
    {
        guest_list[i] = " ";
    }

    // for (auto &element : guest_list)
    // {
    //     element = " ";
    // }
}

int find_area(int side_length)
{
    return side_length * side_length;
}

double find_area(double length, double width)
{
    return length * width;
}

double calc_area_circle(double radius)
{
    return pi * radius * radius;
}

void area_circle()
{
    double radius{};
    cout << "\nEnter the radius of the circle";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void showingTwoValues(double firstNumber, double secondNumber)
{
    cout << "The first value is: " << firstNumber << endl;
    cout << "The Second value is " << secondNumber << endl;
}
