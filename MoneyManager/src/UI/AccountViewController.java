package UI;

import Account.Account;
import CSV.CSVReader;
import Transaction.Transaction;
import javafx.fxml.FXML;
import javafx.scene.control.Label;

import java.awt.*;
import java.util.ArrayList;

public class AccountViewController
{
    ArrayList<Transaction> transactions;

    @FXML
    public Label accountName;

    public void showTransactions(CSVReader reader, Account account)
    {
        accountName.setText(account.getName());
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
