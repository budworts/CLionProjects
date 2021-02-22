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
    amount += checkFee;
    return Account::withdraw(amount);
}

std::ostream &operator<<( std::ostream &os, const CheckingAccount &src ) {
    os << "Checking account \"" << src.name << "\" balance £" << src.balance;
    return os;
}