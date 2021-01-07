//
// Created by otte on 07/01/2021.
//

#ifndef MONEYMANAGER_ACCOUNT_H
#define MONEYMANAGER_ACCOUNT_H

#include <string>
#include <list>
#include <boost/ptr_container/ptr_list.hpp>
#include "Transaction.h"

class Account
{
private:
    int balance;
    std::string name;
    std::string description;
    std::list<Transaction*> transactions;
public:
    Account(int balance, const std::string &name, const std::string &description);
    [[nodiscard]] int getBalance() const;
    [[nodiscard]] const std::string &getName() const;
    [[nodiscard]] const std::string &getDescription() const;
    [[nodiscard]] const std::list<Transaction*> &getTransactions() const;
    void addTransaction(Transaction* transaction);
};


#endif //MONEYMANAGER_ACCOUNT_H
