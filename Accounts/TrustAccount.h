//
// Created by Steven Budworth on 22/02/2021.
//

#ifndef ACCOUNTS_TRUSTACCOUNT_H
#define ACCOUNTS_TRUSTACCOUNT_H

#include "SavingsAccount.h"

class TrustAccount : public SavingsAccount {
protected:
       int numberOfWithdrawals = 0;
private:
    static constexpr const char *defName = "Unnamed Trust Account";
    static constexpr double defBalance = 0.0;
    static constexpr double defInterestRate = 5.0;
    static constexpr double bonus = 50.0;
    static constexpr double depositBonusTarget = 5000.0;
    static constexpr int maxWithdrawals = 3;
    static constexpr double withdrawalPercentage = 20.0;
public:
    // Constructors
    TrustAccount( std::string name = defName,  double balance = defBalance, double interestRate = defInterestRate );
    TrustAccount( const TrustAccount &src );
    ~TrustAccount();

    virtual bool withdraw( double amount ) override;
    virtual bool deposit( double amount ) override;
    virtual void print(std::ostream &os) const override;
    TrustAccount &operator=(const TrustAccount &src);
};

#endif //ACCOUNTS_TRUSTACCOUNT_H
