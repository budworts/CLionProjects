//
// Created by Steven Budworth on 18/02/2021.
//

#include <iostream>

#include "Account.h"

Account::Account() : balance{0.0}, name{"No Account Name"} {
    std::cout << "Account() constructor\n";
}

Account::Account(const std::string &name, double balance)
        : name{name}, balance{balance} {

    std::cout << "Account(const std::string &name, double balance) constructor\n";
}

// Copy constructor
Account::Account( const Account &src )
    : name{src.name}, balance{src.balance} {

    std::cout << "Account(const Account &src) copy constructor\n";
}

Account::~Account() {
    std::cout << "~Account(" << name << ") destructor\n";
}

void Account::deposit(double amount) {

    std::cout << "Account (" << balance << ") deposit £" << amount << std::endl;
    balance += amount;
    std::cout << "New balance £" << balance << std::endl;
}

void Account::withdraw(double amount) {

    if (balance - amount >= 0) {
        std::cout << "Account (£" << balance << ") withdraw £" << amount << std::endl;
        balance -= amount;
        std::cout << "New balance £" << balance << std::endl;
    } else {
        std::cout << "Account (£" << balance
            << ") not enough funds to withdraw £" << amount << std::endl;
    }

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

    std::cout << "SavingsAccount copy assignment (=) used\n";

    if ( this != &src ) {
        this->name = src.name;
        this->balance = src.balance;
    }

    return *this;
}

std::iostream &operator<<( std::iostream &os, const Account &src ) {
    os << "Account balance £" << src.getBalance();
    return os;
}