//
// Created by Steven Budworth on 18/02/2021.
//

#ifndef ACCOUNTS_ACCOUNT_H
#define ACCOUNTS_ACCOUNT_H

#include <string>

class Account {
    friend std::ostream &operator<<( std::ostream &io, const Account &src );
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

    ~Account();

    double getBalance() const;
    void setBalance(double balance);

    const std::string &getName() const;
    void setName(const std::string &name);

    bool deposit( double amount );
    bool withdraw( double amount );

    Account &operator=( const Account &src );

};


#endif //ACCOUNTS_ACCOUNT_H
