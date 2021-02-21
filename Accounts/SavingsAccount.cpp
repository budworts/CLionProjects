//
// Created by Steven Budworth on 18/02/2021.
//
#include <iostream>

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() : Account{}, interestRate{3.0} {
    std::cout << "SavingsAccount() constructor\n";
}

SavingsAccount::SavingsAccount(const std::string &name, const double balance)
    : Account{name,balance}, interestRate{3.0} {

    std::cout << "SavingsAccount(const std::string &name, const double balance) constructor\n";
}

// Copy constructor
SavingsAccount::SavingsAccount( const SavingsAccount &src )
    : Account{src} {

    std::cout << "SavingsAccount(const SavingsAccount &src) copy constructor\n";
}

SavingsAccount::~SavingsAccount() {
    std::cout << "~SavingsAccount(" << getName() << ") destructor\n";
}

double SavingsAccount::getInterestRate() const {
    return interestRate;
}

void SavingsAccount::setInterestRate(double interestRate) {
    SavingsAccount::interestRate = interestRate;
}

// Copy assignment operator
SavingsAccount &SavingsAccount::operator=(const SavingsAccount &src) {

    std::cout << "Account copy assignment (=) used\n";

    if ( this != &src ) {
        Account::operator=(src);
        this->interestRate = src.interestRate;
    }

    return *this;
}

