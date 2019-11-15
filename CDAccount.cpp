/**
CDAccount.cpp
CDAccount class

Written By: Kaylynn Diaz-Schott
Last Modified: 11/14/2019
**/
#include <iostream>
#include "CDAccount.h"

int CDAccount::withdrawl(double amount)
{
    double penalty = .25 * (interestRate/100);
    amount += penalty;
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        std::cout << amount << std::endl;

        return 0;
    }
    return -1;
}

void CDAccount::printAccount()
{
    double formatInterestRate = interestRate * 100;
    BankAccount::printAccount();
    std::cout << "Interest Rate: " << interestRate << "% " << std::endl;
}