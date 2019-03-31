#pragma once

class Mystring
{
    // for declaring the both rhs and lhs;

    // using the friend function to directly access the private field

    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &is, Mystring &rhs);
    
  private:
    char *str;

  public:
    Mystring();
    Mystring(const char *s); // overloaded constructor
    Mystring(const Mystring &source);
    ~Mystring();
    void display() const;
    int get_length() const;
    const char *get_str() const;
    Mystring(Mystring &&source); // move constructor

    // overloading operator
    Mystring &operator=(Mystring &&rhs);      // move assignment -> cuz the string
    Mystring &operator=(const Mystring &rhs); // Copy assignment --> return Mystring

    Mystring operator-() const;                    // make a lower case copy
    Mystring operator+(const Mystring &rhs) const; // concatenate two Mystring
    bool operator==(const Mystring &rhs) const;
};