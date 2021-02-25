//
// Created by Steven Budworth on 22/02/2021.
//

#include <iostream>

#include "CheckingAccount.h"

CheckingAccount::CheckingAccount( std::string name,  double balance )
        : Account{name,balance} {
}

CheckingAccount::~CheckingAccount() {
}

bool CheckingAccount::withdraw(double amount) {

    std::cout << "Checking withdrawal\n";

    amount += checkFee;
    return Account::withdraw(amount);
}

// Copy assignment operator
CheckingAccount &CheckingAccount::operator=(const CheckingAccount &src) {

    std::cout << "Savings account copy assignment (=) used\n";

    if ( this != &src ) {
        Account::operator=(src);
    }

    return *this;
}


std::ostream &operator<<( std::ostream &os, const CheckingAccount &src ) {
    os << "Checking account \"" << src.name << "\" balance £" << src.balance;
    return os;
}