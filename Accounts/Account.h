//
// Created by Steven Budworth on 18/02/2021.
//

#ifndef ACCOUNTS_ACCOUNT_H
#define ACCOUNTS_ACCOUNT_H

#include <string>

class Account {
    friend std::ostream &operator<<( std::ostream &io, const Account &src );
protected:

private:
    std::string name;
    double balance;
public:
    Account();
    Account( const std::string &name, const double balance );
    Account( const double balance );
    Account( const Account &src );
    ~Account();

    double getBalance() const;
    void setBalance(double balance);

    const std::string &getName() const;
    void setName(const std::string &name);

    void deposit( double amount );
    void withdraw( double amount );

    Account &operator=( const Account &src );

};


#endif //ACCOUNTS_ACCOUNT_H
