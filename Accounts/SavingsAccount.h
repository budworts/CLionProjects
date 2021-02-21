//
// Created by Steven Budworth on 18/02/2021.
//

#ifndef ACCOUNTS_SAVINGSACCOUNT_H
#define ACCOUNTS_SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
    // Inherit non special constructor from base class Account
    // using Account::Account;
    friend std::ostream &operator<<( std::ostream &os, const SavingsAccount &src );
protected:

private:
    double interestRate;
public:
    SavingsAccount();
    SavingsAccount(const std::string &name, const double balance);
    SavingsAccount( const double balance, const double interestRate );
    SavingsAccount( const SavingsAccount &src );
    ~SavingsAccount();

    double getInterestRate() const;
    void setInterestRate(double interestRate);
    void deposit( double amount );
    SavingsAccount &operator=( const SavingsAccount &src );
};

#endif //ACCOUNTS_SAVINGSACCOUNT_H
