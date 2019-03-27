#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;

// Why shouldn't we use "using namespace std;" instead?
// Cuz the std also bring other defined names and may have conflicts.

// The global variable is automatically initialised as 0
// global varaible can be accessed by any part of program

int age{18}; // Global Variable6

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

    int favoriteNumebr; // Declaring varaible

    cout << "Enter your favorite number btw 1 and 100" << endl; // endl for end line

    cin >> favoriteNumebr; // request an input

    cout << "your favorite numnber is " << favoriteNumebr << endl;

    // the cin can be chained

    int data1, data2;

    cin >> data1 >> data2; // it request 2 int // can be input by number1 number2

    // And Print them out

    cout << "You just input " << data1 << " and " << data2 << endl;

    // A variable is ab avstraction for memory location

    // In the c++, you must decalre before use

    // The best initialiser after c++11 is using {}:

    int integer{21};
    char character{'a'};
    bool boolean{false};

    // if you want to check the size of memeory:

    cout << "char:" << sizeof(char) << endl;

    // if you want to check the size of certain type, you can use the values defined in <climits>

    cout << "Minunms Values: " << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;

    cout << "Maximuns Values: " << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;

    // More can be found herw: http://www.cplusplus.com/reference/climits/

    /*
        Constant: just like the js const, can't be changed after declaring
    */

    // FOUR ways to declare a constant

    const int constantOne{50};
    constexpr int constantTwo{50}; // Q: difference
    // Using enum
    // Using Define -> Don't use this in Modern c++, cuz it's hard to debug

    system("pause"); // Pause the program

    return 0;
}