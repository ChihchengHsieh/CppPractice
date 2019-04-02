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
    
