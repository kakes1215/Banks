/**
MoneyMarketAccount.cpp
Money Market Account class

Written By: Kaylynn Diaz-Schott
Last Modified: 11/14/2019
**/
#include <iostream>
#include "MoneyMarketAccount.h"

int MoneyMarketAccount::withdrawl(double amount)
{
    if (numOfWithdrawls >= 2)
    {
        amount += 1.5;
    }

    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        numOfWithdrawls+=1;
        return 0;
    }
    return -1;
}

void MoneyMarketAccount::printAccount()
{
    BankAccount::printAccount();
    std::cout << "Number of Withdrawls: " << numOfWithdrawls << std::endl;
}
