//
// Created by Steven Budworth on 22/02/2021.
//

#ifndef ACCOUNTS_ACCOUNTUTIL_H
#define ACCOUNTS_ACCOUNTUTIL_H

#include <vector>

#include "Account.h"

// Utility helper functions for Account * class
void display(const std::vector<Account *> &accounts);
void deposit(std::vector<Account *> &accounts, double amount);
void withdraw(std::vector<Account *> &accounts, double amount);

#endif //ACCOUNTS_ACCOUNTUTIL_H
