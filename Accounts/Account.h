//
// Created by Steven Budworth on 18/02/2021.
//

#ifndef ACCOUNTS_ACCOUNT_H
#define ACCOUNTS_ACCOUNT_H

#include <string>
#include "I_Printable.h"

class Account : public I_Printable {
protected:
    std::string name;
    double balance;
private:
    static constexpr const char *defName{"Unnamed Account"};
    static constexpr double defBalance{0.0};
public:
    // Constructors
    Account( const std::string name = defName, const double balance = defBalance );
    Account( const Account &src );

    virtual ~Account() = default;

    virtual double getBalance() const;
    virtual void setBalance(double balance);

    virtual const std::string &getName() const;
    virtual void setName(const std::string &name);

    virtual bool deposit( double amount ) = 0;
    virtual bool withdraw( double amount ) = 0;

    virtual void print(std::ostream &os) const override;

    Account &operator=( const Account &src );
};

#endif //ACCOUNTS_ACCOUNT_H
