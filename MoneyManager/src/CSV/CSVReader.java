package CSV;

import Account.Account;
import Transaction.Transaction;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;

public class CSVReader
{
    private String csvAccountsFile = "/home/kristian/Documents/csv/accounts.csv";
    private String csvTransactionsFile = "/home/kristian/Documents/csv/transactions.csv";
    private String line = "";
    private String[] csvInfo;
    private ArrayList<Account> accounts = new ArrayList<>();
    private ArrayList<Transaction> transactions = new ArrayList<>();

    public void readCSVAccountsFile() throws Exception
    {
        try(BufferedReader reader = new BufferedReader(new FileReader(csvAccountsFile)))
        {
            if (!reader.readLine().equals("Balance,Name,Description"))
            {
                throw new Exception("Wrong account file");
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

    public ArrayList<Account> getAccounts()
    {
        return accounts;
    }
}
