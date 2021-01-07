//
// Created by otte on 07/01/2021.
//

#include "Transaction.h"

Transaction::Transaction(int balance, int amount, const std::string &date, const std::string &description,
                         Category category) : balance(balance), amount(amount), date(date), description(description),
                         category(category)
{}

int Transaction::getBalance() const
{
    return balance;
}

int Transaction::getAmount() const
{
    return amount;
}

const std::string &Transaction::getDate() const
{
    return date;
}

const std::string &Transaction::getDescription() const
{
    return description;
}

Category Transaction::getCategory() const
{
    return category;
}
