//
// Created by Steven Budworth on 18/02/2021.
//
#include <iostream>

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(const std::string name, const double balance, const double interestRate )
    : Account{name,balance}, interestRate{interestRate} {
    std::cout << "SavingsAccount --------- " << this->interestRate << std::endl;
//    std::cout << "SavingsAccount(name, balance, interestRate) constructor\n";
}

// Copy constructor
SavingsAccount::SavingsAccount( const SavingsAccount &src )
    : Account{src} {
//    std::cout << "SavingsAccount(&src) copy constructor\n";
}

SavingsAccount::~SavingsAccount() {
//    std::cout << "~SavingsAccount(" << getName() << ") destructor\n";
}

bool SavingsAccount::deposit( double amount ) {
//    std::cout << "Deposit £" << amount << " interest rate: " << interestRate << std::endl;
    amount += amount*(interestRate/100);
//    std::cout << "Savings account deposit amount £" << amount << std::endl;
    return Account::deposit(amount);
}

double SavingsAccount::getInterestRate() const {
    return interestRate;
}

void SavingsAccount::setInterestRate(double interestRate) {
    SavingsAccount::interestRate = interestRate;
}

// Copy assignment operator
SavingsAccount &SavingsAccount::operator=(const SavingsAccount &src) {

//    std::cout << "Savings account copy assignment (=) used\n";

    if ( this != &src ) {
        Account::operator=(src);
        SavingsAccount::interestRate = src.interestRate;
    }

    return *this;
}

std::ostream &operator<<( std::ostream &os, const SavingsAccount &src ) {
    os << "Saving account \"" << src.name << "\" balance £" << src.balance << " interest rate " << src.interestRate;
    return os;
}
