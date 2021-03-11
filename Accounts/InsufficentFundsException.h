//
// Created by Steven Budworth on 11/03/2021.
//

#ifndef ACCOUNTS_INSUFFICENTFUNDSEXCEPTION_H
#define ACCOUNTS_INSUFFICENTFUNDSEXCEPTION_H

class InsufficentFundsException: public std::exception {

public:
    InsufficentFundsException() noexcept = default;
    ~InsufficentFundsException() = default;

    virtual const char* what() const noexcept {
        return "Illegal withdraw exception";
    }
};

#endif //ACCOUNTS_INSUFFICENTFUNDSEXCEPTION_H
