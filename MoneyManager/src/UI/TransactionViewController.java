package UI;

import Account.Account;
import CSV.CSVReader;
import Transaction.Transaction;

public class TransactionViewController
{
    public void showTransaction(Transaction transaction)
    {
        System.out.format("Name: %s. Description: %s, Amount: %s", transaction.getName(), transaction.getDescription(), transaction.getAmount());
    }
}
