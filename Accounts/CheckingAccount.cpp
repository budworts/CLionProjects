//
// Created by Steven Budworth on 22/02/2021.
//

#include <iostream>

#include "CheckingAccount.h"

CheckingAccount::CheckingAccount( std::string name,  double balance )
        : Account{name,balance} {
}

bool CheckingAccount::withdraw(double amount) {

    std::cout << "Checking withdrawal\n";

    amount += checkFee;
    return Account::withdraw(amount);
}

bool CheckingAccount::deposit(double amount ) {
    return Account::deposit(amount);
}

// Copy assignment operator
CheckingAccount &CheckingAccount::operator=(const CheckingAccount &src) {

    std::cout << "Savings account copy assignment (=) used\n";

    if ( this != &src ) {
        Account::operator=(src);
    }

    return *this;
}

void CheckingAccount::print(std::ostream &os) const {
    os << "Checking account (" << name << ") £" << balance;
}