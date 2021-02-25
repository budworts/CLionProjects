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
    double interestRate;
private:
    static constexpr const char *defName = "Unnamed Savings Account";
    static constexpr double defBalance = 0.0;
    static constexpr double defInterestRate = 3.0;
public:
    // Constructors
    SavingsAccount(const std::string name = defName, const double balance = defBalance, double interestRate = defInterestRate );
    SavingsAccount( const SavingsAccount &src );

    ~SavingsAccount();

    double getInterestRate() const;
    void setInterestRate(double interestRate);

    bool deposit( double amount ) override;
    SavingsAccount &operator=( const SavingsAccount &src );
};

#endif //ACCOUNTS_SAVINGSACCOUNT_H
