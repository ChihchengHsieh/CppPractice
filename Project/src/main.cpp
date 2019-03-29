#include <iostream>
#include <climits>
#include <vector>
#include <cstring>
#include <typeinfo>
#include <string>

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
}