/**
CDAccount.h
Header file for CDAccount class

Written By: Kaylynn Diaz-Schott
Last Modified: 11/14/2019
**/
#include <iostream>
#include "BankAccount.h"
#ifndef CDACCOUNT_H
#define CDACCOUNT_H

class CDAccount : public BankAccount
{
public:
    CDAccount() : interestRate(0), BankAccount() {}
    CDAccount(std::string name, double balance, double interestRate) : BankAccount(name, balance), interestRate(interestRate) {}
    int withdrawl(double amount) override;
    void printAccount();

private:
    double interestRate;
};

#endif