//
// Created by Steven Budworth on 18/02/2021.
//
#include <iostream>

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() : SavingsAccount{0.0,0.0} {
    std::cout << "SavingsAccount() constructor\n";
}

SavingsAccount::SavingsAccount(const std::string &name, const double balance)
    : Account{name,balance}, interestRate{0.0} {

    std::cout << "SavingsAccount(const std::string &name, const double balance) constructor\n";
}

SavingsAccount::SavingsAccount( const double balance, const double interestRate )
    : Account{balance}, interestRate{interestRate} {
    std::cout << "SavingsAccount(balance,interestRate) constructor\n";
}

// Copy constructor
SavingsAccount::SavingsAccount( const SavingsAccount &src )
    : Account{src} {

    std::cout << "SavingsAccount(const SavingsAccount &src) copy constructor\n";
}

SavingsAccount::~SavingsAccount() {
    std::cout << "~SavingsAccount(" << getName() << ") destructor\n";
}

void SavingsAccount::deposit( double amount ) {

    std::cout << "Deposit £" << amount << " interest rate: " << interestRate << std::endl;
    amount += ((amount*interestRate)/100);
    std::cout << "Savings account deposit amount £" << amount << std::endl;
    Account::deposit(amount);
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
        this->interestRate = src.interestRate;
    }

    return *this;
}

std::ostream &operator<<( std::ostream &os, const SavingsAccount &src ) {
    os << "Saving account balance £" << src.getBalance() << " interest rate " << src.getInterestRate();
    return os;
}
