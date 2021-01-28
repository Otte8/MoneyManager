//
// Created by otte on 07/01/2021.
//

#include <iostream>
#include "Account.h"


Account::Account(int balance, const std::string &name, const std::string &description) : balance(balance), name(name),
                                                                                         description(description)
{

}

int Account::getBalance() const
{
    return balance;
}

const std::string &Account::getName() const
{
    return name;
}

const std::string &Account::getDescription() const
{
    return description;
}

const std::list<Transaction*> &Account::getTransactions() const
{
    return transactions;
}

void Account::addTransaction(Transaction* transaction)
{
    transactions.push_back(transaction);
}