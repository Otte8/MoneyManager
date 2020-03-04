package Transaction;

import Account.Account;

public class Transaction
{
    private int oldBalance;
    private int newBalance;
    private int amount;
    private String name;
    private String description;
    private Account account;

    public Transaction(int oldBalance, int newBalance, int amount, String name, String description, Account account)
    {
        this.oldBalance = oldBalance;
        this.newBalance = newBalance;
        this.amount = amount;
        this.name = name;
        this.description = description;
        this.account = account;
    }

    public int getOldBalance()
    {
        return oldBalance;
    }

    public int getNewBalance()
    {
        return newBalance;
    }

    public int getAmount()
    {
        return amount;
    }

    public String getName()
    {
        return name;
    }

    public String getDescription()
    {
        return description;
    }

    public Account getAccount()
    {
        return account;
    }
}
