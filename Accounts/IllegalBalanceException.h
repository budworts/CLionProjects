//
// Created by Steven Budworth on 11/03/2021.
//

#ifndef ACCOUNTS_ILLEGALBALANCEEXCEPTION_H
#define ACCOUNTS_ILLEGALBALANCEEXCEPTION_H

class IllegalBalanceException: public std::exception {

public:
    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() = default;

    virtual const char* what() const noexcept {
        return "Illegal balance exception";
    }
};

#endif //ACCOUNTS_ILLEGALBALANCEEXCEPTION_H
