#include <cstring>
#include <iostream>
#include <locale>
#include "Mystring.h"

// Equality

bool operator==(const Mystring &lhs, const Mystring &rhs) // we don't have to declare a function as "Mystring::operator" since it's a global function
{
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

// Concatenation

Mystring operator+(const Mystring &lhs, const Mystring &rhs)
{
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str)];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

// Make lowercase
Mystring operator-(const Mystring &obj)
{
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);

    for (size_t i{0}; i < std::strlen(buff); i++)
    {
        buff[i] = std::tolower(buff[i]);
    }

    Mystring temp{buff};
    delete[] buff;

    return temp;
}

// Equality
bool Mystring::operator==(const Mystring &rhs) const
{
    return (std::strcmp(str, rhs.str) == 0);
}

// Make lowercase version of it:
Mystring Mystring::operator-() const
{
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str); // no need for dereferencing

    for (size_t i{0}; i < std::strlen(buff); i++)
    {
        buff[i] = std::tolower(buff[i]);
    }

    Mystring temp{buff};

    delete[] buff;

    return temp;
}

// Concateneate

Mystring Mystring::operator+(const Mystring &rhs) const
{
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

Mystring &Mystring::operator=(Mystring &&rhs)
{
    // moving for stealing the ptr
    std::cout << "Move Assignment called" << std::endl;

    if (this == &rhs)
    {
        return *this;
    }

    delete str; // delete this->str
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

Mystring &Mystring::operator=(const Mystring &rhs)
{
    // copy for copying a certain value from the rhs
    std::cout << "Copy Assignment called" << std::endl;

    if (this == &rhs)
    {
        return *this;
    }

    delete[] this->str;
    str = new char[std::strlen(rhs.str) + 1]; // Q: why do we need to add one?
    std::strcpy(this->str, rhs.str);
    return *this;
}

Mystring::Mystring()
    : str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *s)
    : str{nullptr}
{
    if (s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

// Move constructor
Mystring::Mystring(Mystring &&source)
    : str{source.str}
{
    source.str = nullptr;
    std::cout << "Move constructor used" << std::endl;
}

// Copy constructor

// Account::Account(const Account &source) // copy constructor
//     : name{source.name}, balance{source.balance}
// {
//     cout << "Copy constructor is called" << endl;
// }

// Mystring::Mystring(const Mystring &source) : str(nullptr)
// {
//     str = new char[std::strlen(source.str) + 1];
//     std::strcpy(str, source.str);
// }

Mystring::Mystring(const Mystring &source) // used for constructing another instance
    : str{nullptr}
{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

//Destryctir

Mystring::~Mystring()
{
    delete[] str;
}

// Display method

void Mystring::display() const
{
    std::cout << str << ":" << get_length() << std::endl;
}

// length getter
int Mystring::get_length() const
{
    return std::strlen(str);
}

// string getter

const char *Mystring::get_str() const
{
    return str;
}
