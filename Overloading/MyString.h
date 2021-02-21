//
// Created by Steven Budworth on 17/02/2021.
//

#ifndef OVERLOADING_MYSTRING_H
#define OVERLOADING_MYSTRING_H

class MyString {
    friend bool operator==( const MyString &lhs, const MyString &rhs );
    friend MyString operator-( const MyString &obj );
    friend MyString operator+( const MyString &lhs, const MyString &rhs );
    friend std::ostream &operator<<( std::ostream &os, const MyString &src );
    friend std::istream &operator>>( std::istream &is, MyString &src );
private:
    char *str;
public:
    MyString();
    MyString( const char *s );
    MyString( const MyString &src );

    virtual ~MyString();

    MyString( MyString &&src ) noexcept;                  // Move constructor
    MyString &operator=( const MyString &src );  // Copy assignment operator
    MyString &operator=( MyString &&src );       // Move assignment operator

    void display() const;
    size_t getStrlength() const;
    const char *getString() const;
};


#endif //OVERLOADING_MYSTRING_H
