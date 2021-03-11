#include <iostream>
#include <vector>

#include "I_Printable.h"
#include "AccountUtil.h"
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "IllegalBalanceException.h"
#include "InsufficentFundsException.h"

using namespace std;

void doWithdraw( Account &a, double m );
void printableObj( I_Printable &obj );

int main() {

    cout << "version: " << __cplusplus << endl;

    cout << "unique_ptr:\n";

    try {
        unique_ptr<Account> savingsAcct = make_unique<SavingsAccount>("Budworth", -10000, 5.0);
        cout << *savingsAcct << endl;
    }
    catch ( const IllegalBalanceException &ex ) {
        cout << ex.what() << endl;
    }
    catch ( const InsufficentFundsException &ex ) {
        cout << ex.what() << endl;
    }

    {
        try {
            vector<unique_ptr<Account>> accts;
            accts.push_back(make_unique<SavingsAccount>("Steven", 30000, 5.2));
            accts.push_back(make_unique<TrustAccount>("Dave", 500, 10.0));
            accts.push_back(make_unique<CheckingAccount>("Billy", 400));

            for (const auto &acc: accts) {
                cout << *acc << endl;
            }

            for ( auto &acc: accts ) {
                acc->withdraw(600);
            }
        }
        catch ( const IllegalBalanceException &ex ) {
            cout << ex.what() << endl;
        }
        catch ( const InsufficentFundsException &ex ) {
            cout << ex.what() << endl;
        }
    }

    cout << "shared_ptr:\n";

    {
        shared_ptr<Account> a1 = make_shared<SavingsAccount>("Budworth", 3000);
        shared_ptr<Account> a2 = make_shared<TrustAccount>("Davis", 10000, 5.0);
        shared_ptr<Account> a3 = make_shared<CheckingAccount>("Smith", 4500);

        vector<shared_ptr<Account>> accts;
        accts.push_back(a1);
        accts.push_back(a2);
        accts.push_back(a3);

        for ( const auto &acc: accts ) {
            cout << *acc << endl;
            cout << "use count : " << acc.use_count() << endl;
        }
    }

    return 0;

    CheckingAccount *pCA = new CheckingAccount();
    cout << *pCA << endl;

    SavingsAccount *pSA = new SavingsAccount();
    cout << *pSA << endl;

    cout << "\n--- TrustAccount(\"Steve\", 12000, 2.5)" << endl;
    Account *pA = new TrustAccount("Steve", 12000, 2.5);
    cout << *pA << endl;

    cout << "\n--- TrustAccount *pTA = new TrustAccount();" << endl;
    TrustAccount *pTA = new TrustAccount();
    pTA->deposit(1000);
    cout << *pTA << endl;

    cout << "\n--- TrustAccount *pTA2 = new TrustAccount();" << endl;
    TrustAccount *pTA2 = new TrustAccount();
    *pTA2 = *pTA;
    pTA2->deposit(110000);
    cout << "*pTA : " << *pTA << endl;
    cout << "*pTA2 : " << *pTA2 << endl;

    cout << "--------------" << endl;
    CheckingAccount dave("Dave", 500);
    cout << dave << endl;

    vector<Account *> accounts{pCA,pSA,pA,pTA,pTA2};
    display(accounts);
    deposit(accounts, 10000);
    withdraw(accounts, 500);
    display(accounts);

    delete pCA;
    delete pSA;
    delete pA;
    delete pTA;
    delete pTA2;

//    Account *pAcc = new Account();
//    cout << *pAcc << endl;
//    Account *pSav = new SavingsAccount();
//    cout << *pSav << endl;
//    Account *pTst = new TrustAccount();
//    cout << *pTst << endl;
//    Account *pChk = new CheckingAccount();
//    cout << *pChk << endl;
//
//    printableObj(*pTst);

//    cout << "->withdraw\n";
//    pAcc->withdraw(10);
//    pSav->withdraw(10);
//    pTst->withdraw(10);
//    pChk->withdraw(10);
//
//    cout << "array withdraw\n";
//    Account *pArrAcc [] = {pAcc, pSav, pTst, pChk};

//    for (auto i = 0; i < 4; ++i) {
//        pArrAcc[i]->deposit(1000);
//        pArrAcc[i]->withdraw(5);
//        cout << *pArrAcc[i] << endl;
//    }

//    cout << "---------------------------\n";
//    Account *pTst2 = new TrustAccount("Dave", 1000.0);
//    *pTst = *pTst2;
//    pTst->deposit(100000);
//    pTst2->setName("Mavis");
//    pTst->withdraw(5);
//    pTst2->withdraw(11);
//    cout << "pTst after copy: " << *pTst << endl;
//    cout << "pTst2 after copy: " << *pTst2 << endl;
//
//    doWithdraw(*pTst,10000);
//    cout << "pTst after do: " << *pTst << endl;
//    doWithdraw(*pTst2,20);
//    cout << "pTst2 after do: " << *pTst2 << endl;
//    doWithdraw(*pSav,100);
//    cout << "pSav after do: " << *pSav << endl;

//    cout << "vector withdraw\n";
//    std::vector<Account *> pVecAcc = {pAcc, pSav, pTst, pChk};
//
//    for (auto p:pVecAcc) {
//        p->withdraw(5);
//    }

//    delete pAcc;
//    delete pSav;
//    delete pTst;
//    delete pChk;
//    delete pTst2;

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


void printableObj(I_Printable &obj) {
    std::cout << obj << std::endl;
}