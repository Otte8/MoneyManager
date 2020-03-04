package UI;

import Account.Account;
import CSV.CSVReader;
import Transaction.Transaction;
import javafx.event.ActionEvent;
import javafx.fxml.FXMLLoader;
import javafx.scene.Node;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;

import java.util.ArrayList;

public class SelectAccountController
{

    public void selectAccount(ActionEvent actionEvent) throws Exception
    {
        CSVReader reader = new CSVReader();
        reader.readCSVAccountsFile();
        reader.readCSVTransactionsFile();
        ArrayList<Account> accounts = reader.getAccounts();
        ArrayList<Transaction> transactions = reader.getTransactions();
        System.out.println(accounts.get(0).getName());
        System.out.println(transactions.get(0).getDescription());
        Parent root = FXMLLoader.load(getClass().getResource("AccountView.fxml"));
        Stage stage = (Stage) ((Node)actionEvent.getSource()).getScene().getWindow();
        stage.setScene(new Scene(root, 1280, 720));
        stage.show();
    }
}
