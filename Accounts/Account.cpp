//
// Created by Steven Budworth on 18/02/2021.
//

#include <iostream>

#include "Account.h"

Account::Account(const std::string name, const double balance)
        : name{name}, balance{balance} {
}

// Copy constructor
Account::Account( const Account &src )
    : name{src.name}, balance{src.balance} {
}

bool Account::deposit(double amount) {

    std::cout << "Account deposit\n";

    if ( amount <= 0 ) {
        return false;
    }

    balance += amount;
    return true;
}

bool Account::withdraw(double amount) {

    std::cout << "Account withdrawal\n";

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

    std::cout << "Account copy assignment (=) used\n";

    if ( this != &src ) {
        this->name = src.name;
        this->balance = src.balance;
    }

    return *this;
}

void Account::print(std::ostream &os) const {
    os << "Account (" << name << ") £" << balance;
}