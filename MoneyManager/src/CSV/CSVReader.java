package CSV;

import Account.Account;
import Exceptions.AccountCSVWrongFormatException;
import Exceptions.NoAccountWithThatNameException;
import Exceptions.TransactionCSVWrongFormatException;
import Transaction.Transaction;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;

public class CSVReader
{
    private String csvAccountsFile = "/home/kristian/Documents/csv/accounts.csv";
    private String csvTransactionsFile = "/home/kristian/Documents/csv/transactions.csv";
    private String line = "";
    private String accountDescription = "Balance,Name,Description";
    private String transactionDescription = "Old Balance,New Balance,Amount,Name,Description,Account";
    private String[] csvInfo;
    private ArrayList<Account> accounts = new ArrayList<>();
    private ArrayList<Transaction> transactions = new ArrayList<>();

    public void readCSVAccountsFile() throws AccountCSVWrongFormatException
    {
        try(BufferedReader reader = new BufferedReader(new FileReader(csvAccountsFile)))
        {
            if (!reader.readLine().equals(accountDescription))
            {
                throw new AccountCSVWrongFormatException();
            }
            while ((line = reader.readLine()) != null)
            {
                csvInfo = line.split(",");
                accounts.add(new Account(Integer.parseInt(csvInfo[0]), csvInfo[1], csvInfo[2]));
            }
        }
        catch (IOException e)
        {
            e.printStackTrace();
        }
    }

    public void readCSVTransactionsFile() throws TransactionCSVWrongFormatException
    {
        try(BufferedReader reader = new BufferedReader(new FileReader(csvTransactionsFile)))
        {
            if (!reader.readLine().equals(transactionDescription))
            {
                throw new TransactionCSVWrongFormatException();
            }
            while ((line = reader.readLine()) != null)
            {
                csvInfo = line.split(",");
                Account tempAccount = null;
                for (Account account : accounts)
                {
                    if (account.getName().equals(csvInfo[5]))
                    {
                        tempAccount = account;
                        break;
                    }
                }
                if (tempAccount == null)
                {
                    throw new NoAccountWithThatNameException();
                }
                transactions.add(new Transaction(Integer.parseInt(csvInfo[0]), Integer.parseInt(csvInfo[1]), Integer.parseInt(csvInfo[2]), csvInfo[3], csvInfo[4], tempAccount));
            }
        }
        catch (IOException e)
        {
            e.printStackTrace();
        }
    }

    public ArrayList<Account> getAccounts()
    {
        return accounts;
    }

    public ArrayList<Transaction> getTransactions()
    {
        return transactions;
    }
}
