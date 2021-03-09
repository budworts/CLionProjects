//
// Created by Steven Budworth on 18/02/2021.
//

#ifndef ACCOUNTS_SAVINGSACCOUNT_H
#define ACCOUNTS_SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
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

    ~SavingsAccount() = default;

    double getInterestRate() const;
    void setInterestRate(double interestRate);
    virtual void print(std::ostream &os) const override;
    virtual bool deposit( double amount ) override;
    virtual bool withdraw( double amount ) override;
    SavingsAccount &operator=( const SavingsAccount &src );
};

#endif //ACCOUNTS_SAVINGSACCOUNT_H
