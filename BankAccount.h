/**
BankAccount.h
Header file for base class

Written By: Kaylynn Diaz-Schott
Last Modified: 11/14/2019
**/
#include <iostream>
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount
{
public:
    BankAccount() : name("No Name Available."), balance(0) {}
    BankAccount(std::string name, double balance) : name(name), balance(balance) {}
    void deposit(double amount);
    virtual int withdrawl(double amount);
    void transfer(BankAccount& ba1, BankAccount& ba2, double amount);
    void printAccount();

    std::string getName();
    double getBalance();

protected:
    std::string name;
    double balance;
};
#endif