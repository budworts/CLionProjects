//
// Created by Steven Budworth on 22/02/2021.
//

#ifndef ACCOUNTS_ACCOUNTUTIL_H
#define ACCOUNTS_ACCOUNTUTIL_H

#include <vector>

#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"

// Utility helper functions for Account class
void display(const std::vector<Account> &accounts);

void deposit(std::vector<Account> &accounts, double amount);

void withdraw(std::vector<Account> &accounts, double amount);

// Utility helper functions for Savings Account class
void display(const std::vector<SavingsAccount> &accounts);

void deposit(std::vector<SavingsAccount> &accounts, double amount);

void withdraw(std::vector<SavingsAccount> &accounts, double amount);

// Utility helper functions for Checking Account class
void display(const std::vector<CheckingAccount> &accounts);

void deposit(std::vector<CheckingAccount> &accounts, double amount);

void withdraw(std::vector<CheckingAccount> &accounts, double amount);

// Utility helper functions for Trust Account class
void display(const std::vector<TrustAccount> &accounts);

void deposit(std::vector<TrustAccount> &accounts, double amount);

void withdraw(std::vector<TrustAccount> &accounts, double amount);

#endif //ACCOUNTS_ACCOUNTUTIL_H
