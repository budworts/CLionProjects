//
// Created by Steven Budworth on 22/02/2021.
//

#ifndef ACCOUNTS_CHECKINGACCOUNT_H
#define ACCOUNTS_CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account {
protected:

private:
    static constexpr const char *defName = "Unnamed Checking Account";
    static constexpr double defBalance = 0.0;
    static constexpr double checkFee = 1.50;
public:
    // Constructors
    CheckingAccount( std::string name = defName, double balance = defBalance );
    ~CheckingAccount() = default;

    virtual bool withdraw( double amount ) override;
    virtual bool deposit(double amount ) override;
    CheckingAccount &operator=(const CheckingAccount &src);
    virtual void print(std::ostream &os) const override;
};

#endif //ACCOUNTS_CHECKINGACCOUNT_H
