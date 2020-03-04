package Account;

import Transaction.Transaction;

import java.util.ArrayList;

public class Account
{
    private int balance;
    private String name;
    private String description;
    private ArrayList<Transaction> transactions;

    public Account(int balance, String name, String description)
    {
        this.balance = balance;
        this.name = name;
        this.description = description;
    }

    public int getBalance()
    {
        return balance;
    }

    public void setBalance(int balance)
    {
        this.balance = balance;
    }

    public String getName()
    {
        return name;
    }

    public void setName(String name)
    {
        this.name = name;
    }

    public String getDescription()
    {
        return description;
    }

    public void setDescription(String description)
    {
        this.description = description;
    }

    public ArrayList<Transaction> getTransactions()
    {
        return transactions;
    }

    public void addTransaction(Transaction transaction)
    {
        transactions.add(transaction);
    }
}
