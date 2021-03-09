//
// Created by Steven Budworth on 18/02/2021.
//
#include <iostream>

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(const std::string name, const double balance, const double interestRate )
    : Account{name,balance}, interestRate{interestRate} {
}

// Copy constructor
SavingsAccount::SavingsAccount( const SavingsAccount &src )
    : Account{src}, interestRate{src.interestRate} {
}


bool SavingsAccount::deposit( double amount ) {
    std::cout << "Saving account deposit\n";
    amount += amount*(interestRate/100);
    return Account::deposit(amount);
}

bool SavingsAccount::withdraw(double amount) {
    return Account::withdraw(amount);
}

double SavingsAccount::getInterestRate() const {
    return interestRate;
}

void SavingsAccount::setInterestRate(double interestRate) {
    SavingsAccount::interestRate = interestRate;
}

// Copy assignment operator
SavingsAccount &SavingsAccount::operator=(const SavingsAccount &src) {

    std::cout << "Savings account copy assignment (=) used\n";

    if ( this != &src ) {
        Account::operator=(src);
        SavingsAccount::interestRate = src.interestRate;
    }

    return *this;
}

void SavingsAccount::print(std::ostream &os) const {
    os << "Saving account (" << name << ") £" << balance;
}

