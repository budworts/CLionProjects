//
// Created by Steven Budworth on 18/02/2021.
//

#include <iostream>

#include "Account.h"

Account::Account(const std::string name, const double balance)
        : name{name}, balance{balance} {
//    std::cout << "Account(name, balance) constructor\n";
}

// Copy constructor
Account::Account( const Account &src )
    : name{src.name}, balance{src.balance} {

//    std::cout << "Account(&src) copy constructor\n";
}

Account::~Account() {
//    std::cout << "~Account(" << name << ") destructor\n";
}

bool Account::deposit(double amount) {

    if ( amount <= 0 ) {
        return false;
    }

    balance += amount;
    return true;
}

bool Account::withdraw(double amount) {

    if (balance - amount >= 0) {
        std::cout << "Account (£" << balance << ") withdraw £" << amount << std::endl;
        balance -= amount;
        return true;

    }

    return false;
}

double Account::getBalance() const {
    return balance;
}

void Account::setBalance(double balance) {
    Account::balance = balance;
}

const std::string &Account::getName() const {
    return name;
}

void Account::setName(const std::string &name) {
    Account::name = name;
}

// Copy assignment operator
Account &Account::operator=(const Account &src) {

//    std::cout << "SavingsAccount copy assignment (=) used\n";

    if ( this != &src ) {
        this->name = src.name;
        this->balance = src.balance;
    }

    return *this;
}

std::ostream &operator<<( std::ostream &os, const Account &src ) {
    os << "Account \"" << src.name << "\" balance £" << src.balance;
    return os;
}