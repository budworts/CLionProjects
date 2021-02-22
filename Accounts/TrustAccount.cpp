//
// Created by Steven Budworth on 22/02/2021.
//

#include <iostream>

#include "TrustAccount.h"

TrustAccount::TrustAccount( std::string name, double balance, double interestRate )
    : SavingsAccount{name, balance, interestRate } {
}

// Copy constructor
TrustAccount::TrustAccount(const TrustAccount &src)
    : SavingsAccount{src} {
}

TrustAccount::~TrustAccount() {}

bool TrustAccount::withdraw(double amount) {

    if ( numberOfWithdrawals >= maxWithdrawals ) {
        std::cout << "max withdrawals exceeded" << std::endl;
        return false;
    }

    if ( ((balance / 100) * withdrawalPercentage) < amount ) {
        std::cout << "withdrawal exceeded %" << withdrawalPercentage << std::endl;
        return false;
    }

    if ( !SavingsAccount::withdraw(amount) ) {
        return false;
    }

    numberOfWithdrawals++;
    return true;
}

bool TrustAccount::deposit(double amount) {

    if ( amount > depositBonusTarget ) {
        amount += bonus;
    }

    return SavingsAccount::deposit(amount);
}

std::ostream &operator<<( std::ostream &os, const TrustAccount &src ) {
    os << "Trust account \"" << src.name
        << "\" balance £" << src.balance
        << " interest rate " << src.interestRate
        << " number of withdrawals " << src.numberOfWithdrawals;
    return os;
}

