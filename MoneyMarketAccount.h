/**
MoneyMarketAccount.h
Money Market Account Header file

Written By: Kaylynn Diaz-Schott
Last Modified: 11/14/2019
**/
#include <iostream>
#include "BankAccount.h"
#ifndef MONEYMARKETACCOUNT_H
#define MONEYMARKETACCOUNT_H

class MoneyMarketAccount : public BankAccount
{
public:
    MoneyMarketAccount() : numOfWithdrawls(0), BankAccount() {}
    MoneyMarketAccount(std::string name, double balance) : BankAccount(name, balance), numOfWithdrawls(0) {}

    int withdrawl(double amount) override;
    void printAccount();

protected:
    int numOfWithdrawls;
};
#endif