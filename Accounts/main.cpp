#include <iostream>
#include <vector>

#include "AccountUtil.h"
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"

using namespace std;

void doWithdraw( Account &a, double m );

int main() {
    cout << "version: " << __cplusplus << endl;

    Account *pAcc = new Account();
    Account *pSav = new SavingsAccount();
    Account *pTst = new TrustAccount();
    Account *pChk = new CheckingAccount();

//    cout << "->withdraw\n";
//    pAcc->withdraw(10);
//    pSav->withdraw(10);
//    pTst->withdraw(10);
//    pChk->withdraw(10);
//
//    cout << "array withdraw\n";
    Account *pArrAcc [] = {pAcc, pSav, pTst, pChk};

    for (auto i = 0; i < 4; ++i) {
        pArrAcc[i]->deposit(1000);
        pArrAcc[i]->withdraw(5);
        cout << *pArrAcc[i] << endl;
    }

    cout << "---------------------------\n";
    Account *pTst2 = new TrustAccount("Dave", 1000.0);
    *pTst = *pTst2;
    pTst->deposit(100000);
    pTst2->setName("Mavis");
    pTst->withdraw(5);
    pTst2->withdraw(11);
    cout << "pTst after copy: " << *pTst << endl;
    cout << "pTst2 after copy: " << *pTst2 << endl;

    doWithdraw(*pTst,10000);
    cout << "pTst after do: " << *pTst << endl;
    doWithdraw(*pTst2,20);
    cout << "pTst2 after do: " << *pTst2 << endl;
    doWithdraw(*pSav,100);
    cout << "pSav after do: " << *pSav << endl;

//    cout << "vector withdraw\n";
//    std::vector<Account *> pVecAcc = {pAcc, pSav, pTst, pChk};
//
//    for (auto p:pVecAcc) {
//        p->withdraw(5);
//    }

    delete pAcc;
    delete pSav;
    delete pTst;
    delete pChk;
    delete pTst2;

//    cout.precision(2);
//    cout << fixed;

//    vector<Account> accounts;
//    accounts.push_back(Account{});
//    accounts.push_back(Account{"Larry"});
//    accounts.push_back(Account{"Moe", 2000});
//    accounts.push_back(Account{"Curly", 5000});
//
//    display(accounts);
//    deposit(accounts, 1000);
//    withdraw(accounts, 2000);
//
//    vector<SavingsAccount> savAccs;
//    savAccs.push_back(SavingsAccount{});
//    savAccs.push_back(SavingsAccount{"Superman"});
//    savAccs.push_back(SavingsAccount{"Batman", 2000});
//    savAccs.push_back(SavingsAccount{"Wonderwoman", 5000, 5.0});
//
//    display(savAccs);
//    deposit(savAccs, 1000);
//    withdraw(savAccs, 2000);

//    vector<CheckingAccount> checkAccs;
//
//    checkAccs.push_back(CheckingAccount{});
//    checkAccs.push_back(CheckingAccount{"Superman Check"});
//    checkAccs.push_back(CheckingAccount{"Batman Check", 2000});
//    checkAccs.push_back(CheckingAccount{"Wonderwomen Check", 20000});
//    display(checkAccs);
//    withdraw(checkAccs, 3000 );

//    vector<TrustAccount> accs;

//    accs.push_back(TrustAccount{});
//    accs.push_back(TrustAccount{"Superman Trust"});
//    accs.push_back(TrustAccount{"Batman Trust", 20000});

//    accs.push_back(TrustAccount{"Wonderwomen Trust 1", 50000, 5.0});
//    deposit(accs,10000);
//    display(accs);

//    accs.push_back(TrustAccount{"Trust Account", 11000});
//    display(accs);
//    deposit(accs,1000);
//    display(accs);
//    deposit(accs,10000);
//    display(accs);
//    withdraw(accs, 3000 );

//    TrustAccount acc{"Wonderwomen Trust 2", 50000, 15.0};
//    cout << acc << endl;

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
//    SavingsAccount savAcc3;
//    savAcc3.deposit(10.00);
//    savAcc3.deposit(15.00);
//    cout << savAcc3 << endl;
//    cout << "--------------------------\n";
    return 0;
}

void doWithdraw( Account &a, double m ) {
    cout << "-------- doWithdraw --------\n";
    a.withdraw(m);
}