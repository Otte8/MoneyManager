package UI;

import Account.Account;
import CSV.CSVReader;
import Transaction.Transaction;

import java.util.ArrayList;

public class AccountViewController
{
    ArrayList<Transaction> transactions;

    public void showTransactions(CSVReader reader, Account account)
    {
        reader.readCSVTransactionsFile();
        transactions = reader.getTransactions();

        for (Transaction transaction: transactions)
        {
            if (transaction.getAccount().equals(account))
            {
                System.out.println(transaction.getName());
            }
        }
    }
}
