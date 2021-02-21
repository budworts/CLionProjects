//
// Created by Steven Budworth on 17/02/2021.
//

#include <cstring>
#include <iostream>

#include "MyString.h"

// Default constructor
MyString::MyString() {

    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
MyString::MyString( const char *s ) : str{nullptr} {

    if ( s == nullptr ) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[ strlen( s ) + 1 ];
        std::strcpy( str, s );
    }
}

// Copy constructor
MyString::MyString( const MyString &src ) : str{nullptr} {

    this->str = new char[ src.getStrlength() + 1 ];
    std::strcpy( this->str, src.str );
}

// Move constructor
MyString::MyString( MyString &&src ) noexcept : str( src.str ) {

    src.str = nullptr;
}

MyString::~MyString() {

    delete [] str;
}

// Copy assignment operator
MyString &MyString::operator=(const MyString &src) {

    if ( this == &src ) {
        return *this;
    }

    delete [] this->str;

    this->str = new char[ src.getStrlength() + 1 ];
    std::strcpy( this->str, src.str );
    return *this;
}

// Move assignment operator
MyString &MyString::operator=( MyString &&src ) {

    if ( this == &src ) {
        return *this;
    }

    delete [] this->str;

    this->str = src.str;
    src.str = nullptr;
    return *this;
}


void MyString::display() const {
    std::cout << str << " : " << getStrlength() << std::endl;
}

size_t MyString::getStrlength() const {
    return std::strlen( str );
}

const char *MyString::getString() const {
    return str;
}

bool operator==( const MyString &lhs, const MyString &rhs ) {
    return ( std::strcmp( lhs.str, rhs.str ) == 0 );
}

MyString operator-( const MyString &obj ) {
    char *buff = new char[ obj.getStrlength() + 1 ];
    std::strcpy( buff, obj.str );

    for ( auto i = 0; i < obj.getStrlength(); i++ ) {
        buff[i] = std::tolower(buff[i]);
    }

    MyString temp{buff};
    delete [] buff;
    return temp;
}

MyString operator+( const MyString &lhs, const MyString &rhs ) {
    char *buff = new char[ lhs.getStrlength() + rhs.getStrlength() + 1 ];
    std::strcpy( buff, lhs.str);
    std::strcat( buff, rhs.str);
    MyString temp{buff};
    delete [] buff;
    return temp;
}

std::ostream &operator<<( std::ostream &os, const MyString &src ) {
    os << src.str;
    return os;
}

std::istream &operator>>( std::istream &is, MyString &src ) {
    char *buff = new char[1000];
    is >> buff;
    src = MyString(buff);
    delete [] buff;
    return is;
}