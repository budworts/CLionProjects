//
// Created by Steven Budworth on 22/02/2021.
//
#include <iostream>

#include "AccountUtil.h"

// ==========================================
// Helper functions for Account class
// ==========================================

// Displays Account objects in a  vector of Account objects
void display(const std::vector<Account> &accounts) {
    std::cout << "\n=== Accounts ===========================================" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Account object in the vector
void deposit(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Accounts =================================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw amount from each Account object in the vector
void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ==============================" <<std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    }
}

// ==========================================
// Helper functions for Savings Account class
// ==========================================

// Displays Savings Account objects in a  vector of Savings Account objects
void display(const std::vector<SavingsAccount> &accounts) {
    std::cout << "\n=== Savings Accounts =====================================" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Savings Account object in the vector
void deposit(std::vector<SavingsAccount> &accounts, double amount) {
    std::cout << "\n=== Depositing to Savings Accounts ===========================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw supplied amount from each Savings Account object in the vector
void withdraw(std::vector<SavingsAccount> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Savings Accounts =======================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    }
}

// ==========================================
// Helper functions for Checking Account class
// ==========================================

// Displays Checking Account objects in a  vector of Checking Account objects
void display(const std::vector<CheckingAccount> &accounts) {
    std::cout << "\n=== Checking Accounts =====================================" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Checking Account object in the vector
void deposit(std::vector<CheckingAccount> &accounts, double amount) {
    std::cout << "\n=== Depositing to Checking Accounts ===========================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw supplied amount from each Checking Account object in the vector
void withdraw(std::vector<CheckingAccount> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Checking Accounts =======================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    }
}

// ==========================================
// Helper functions for Trust Account class
// ==========================================

// Displays Trust Account objects in a  vector of Trust Account objects
void display(const std::vector<TrustAccount> &accounts) {
    std::cout << "\n=== Trust Accounts =====================================" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Trust Account object in the vector
void deposit(std::vector<TrustAccount> &accounts, double amount) {
    std::cout << "\n=== Depositing to Trust Accounts ===========================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw supplied amount from each Trust Account object in the vector
void withdraw(std::vector<TrustAccount> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Trust Accounts =======================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    }
}