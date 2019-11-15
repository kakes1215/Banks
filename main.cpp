/**
main.cpp
Implements code

Written By: Kaylynn Diaz-Schott
Last Modified: 11/14/2019
**/
#include <iostream>
#include "MoneyMarketAccount.h"
#include "CDAccount.h"

using namespace std;

int main()
{
    cout << "\n******************************************************" << endl;
    cout << "Bank Account" << endl;

    BankAccount ba = BankAccount("John Smith", 120000);
    ba.printAccount();

    cout << endl
         << "Deposit $500 to " << ba.getName() << "'s account... " << endl;
    ba.deposit(500);
    ba.printAccount();
    cout << "Withdraw $500 from " << ba.getName() << "'s account ..." << endl;
    ba.withdrawl(500);
    ba.printAccount();

    cout << "\n******************************************************" << endl;
    cout << "Money Market Account" << endl;
    MoneyMarketAccount mma = MoneyMarketAccount("Jane Doe", 2000);
    mma.printAccount();
    cout << endl
         << "Deposit $500 to " << mma.getName() << "'s account... " << endl;
    mma.deposit(500);
    mma.printAccount();
    cout << "Withdraw $500 from " << mma.getName() << "'s account ..." << endl;
    mma.withdrawl(500);
    mma.printAccount();

    cout << "\n2nd $500 Withdrawl..." << endl;
    mma.withdrawl(500);
    mma.printAccount();

    cout << "\n3rd $500 Withdrawl..." << endl;
    mma.withdrawl(500);
    mma.printAccount();

    cout << "\n******************************************************" << endl;
    cout << "Money Market Account" << endl;
    CDAccount cda = CDAccount("Jane Doe", 2000, 5);
    cda.printAccount();
    cout << endl
         << "Deposit $500 to " << cda.getName() << "'s account... " << endl;
    cda.deposit(500);
    cda.printAccount();
    cout << "Withdraw $500 from " << cda.getName() << "'s account ..." << endl;
    cda.withdrawl(500);
    cda.printAccount();

    cout << "\n******************************************************" << endl;
    cout << "Transfer $200 from MMA Account to CDA" << endl;
    mma.transfer(mma, cda, 200);

    cout << "\nInitial Amounts" << endl;
    cout << "MMA Account" << endl;
    mma.printAccount();

    cout << "CDA Account" << endl;
    cda.printAccount();

    cout << "\nFinal Accounts" << endl;
    cout << "MMA Account" << endl;
    mma.printAccount();

    cout << "CDA Account" << endl;
    cda.printAccount();
}