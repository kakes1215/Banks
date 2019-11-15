/**
BankAccount.cpp
Bank Account Base Class

Written By: Kaylynn Diaz-Schott
Last Modified: 11/14/2019
**/
#include <iostream>
#include "BankAccount.h"

void BankAccount::deposit(double amount)
{
    if (amount >= 0)
    {
        balance += amount;
    }
}

int BankAccount::withdrawl(double amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        return 0;
    }
    return -1;
}

void BankAccount::transfer(BankAccount& ba1, BankAccount& ba2, double amount)
{
    ba1.withdrawl(amount);
    ba2.deposit(amount);
}

std::string BankAccount::getName() { return name; }
double BankAccount::getBalance() { return balance; }

void BankAccount::printAccount()
{
    std::cout << "Balance: $" << balance << std::endl;
}
