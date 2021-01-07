//
// Created by otte on 07/01/2021.
//

#ifndef MONEYMANAGER_TRANSACTION_H
#define MONEYMANAGER_TRANSACTION_H


#include <string>
#include "Category.h"

class Transaction
{
private:
    int balance;
    int amount;
    std::string date;
    std::string description;
    Category category;

public:
    Transaction(int balance, int amount, const std::string &date, const std::string &description,
                Category category);
    [[nodiscard]] int getBalance() const;
    [[nodiscard]] int getAmount() const;
    [[nodiscard]] const std::string &getDate() const;
    [[nodiscard]] const std::string &getDescription() const;
    [[nodiscard]] Category getCategory() const;
};

#endif //MONEYMANAGER_TRANSACTION_H
