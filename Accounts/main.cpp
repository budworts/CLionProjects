#include <iostream>

#include "Account.h"
#include "SavingsAccount.h"

using namespace std;

int main() {
    cout << "version: " << __cplusplus << endl;

//    cout << "Account....\n";
//    Account acc{};
//    acc.deposit(2500.00);
//    acc.withdraw(500.00);
//    cout << acc << endl;
//
//    cout << "pAccount\n";
//    Account *pAcc{nullptr};
//    pAcc = new Account();
//    pAcc->deposit(1000.00);
//    pAcc->withdraw(545.00);
//    delete pAcc;
//    cout << endl;
//
//    cout << "Savings Account\n";
//    SavingsAccount savAcc1{};
//    savAcc1.deposit(4000.00);
//    savAcc1.withdraw(220.00);
//    cout << endl;
//
//    cout << "pSavings Account\n";
//    SavingsAccount *pSavAcc{nullptr};
//    pSavAcc->deposit(4000.00);
//    pSavAcc->withdraw(220.00);
//    delete pSavAcc;
//    cout << endl;

//    cout << "--------------------------\n";
//    SavingsAccount savAcc{"Steve",1000.00};
//    cout << savAcc.getName() << ", " << savAcc.getBalance()
//        << ", " << savAcc.getInterestRate() << endl;
//
//    cout << "--------------------------\n";
//    SavingsAccount savAccCopy{savAcc};
//    cout << savAccCopy.getName() << ", " << savAccCopy.getBalance()
//        << ", " << savAccCopy.getInterestRate() << endl;

//    Account acc;
//    cout << acc.getName() << ", "<< acc.getBalance() << endl;
//    acc.setName("Dave");
//    acc.setBalance(100.00);
//    Account accCopy{acc};
//    cout << acc.getName() << ", "<< acc.getBalance() << endl;

//    cout << "--------------------------\n";
//    savAcc.setName("Fred");
//    savAcc.setBalance(9.99);
//    savAcc.setInterestRate(5.00);
//
//    // Copy constructor used here instead of = operator
//    SavingsAccount savAcc2 = savAcc;
//    cout << savAcc2.getName() << ", " << savAcc2.getBalance()
//         << ", " << savAcc2.getInterestRate() << endl;
//
//    cout << "--------------------------\n";
//    savAcc2 = savAcc;
//    cout << savAcc2.getName() << ", " << savAcc2.getBalance()
//         << ", " << savAcc2.getInterestRate() << endl;
//
//    cout << "--------------------------\n";
    SavingsAccount savAcc3{5.99,10};
    cout << "\t" << savAcc3.getName() << ", " << savAcc3.getBalance()
         << ", " << savAcc3.getInterestRate() << endl;
    savAcc3.deposit(10.00);
    savAcc3.deposit(15.00);
    cout << savAcc3 << endl;
    cout << "--------------------------\n";
    return 0;
}
