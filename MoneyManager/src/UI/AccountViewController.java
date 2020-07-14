package UI;

import Account.Account;
import CSV.CSVReader;
import Transaction.Transaction;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Node;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableRow;
import javafx.scene.control.TableView;
import javafx.scene.control.cell.PropertyValueFactory;
import javafx.scene.input.MouseButton;
import javafx.scene.input.MouseEvent;
import javafx.stage.Stage;

import java.awt.*;
import java.rmi.server.ExportException;
import java.util.ArrayList;

public class AccountViewController
{
    ArrayList<Transaction> transactions;
    public Label accountName;
    public TableView<Transaction> transactionsTable;
    public TableColumn<TableView<Transaction>, String> nameColumn;
    public TableColumn<TableView<Transaction>, String> descriptionColumn;
    public TableColumn<TableView<Transaction>, Integer> amountColumn;
    public TableColumn<TableView<Transaction>, Integer> oldBalanceColumn;
    public TableColumn<TableView<Transaction>, Integer> newBalanceColumn;

    public void showTransactions(CSVReader reader, Account account)
    {
        accountName.setText(account.getName());
        reader.readCSVTransactionsFile();
        transactions = reader.getTransactions();

        nameColumn.setCellValueFactory(new PropertyValueFactory<>("name"));
        descriptionColumn.setCellValueFactory(new PropertyValueFactory<>("description"));
        amountColumn.setCellValueFactory(new PropertyValueFactory<>("amount"));
        oldBalanceColumn.setCellValueFactory(new PropertyValueFactory<>("oldBalance"));
        newBalanceColumn.setCellValueFactory(new PropertyValueFactory<>("newBalance"));

        transactionsTable.setRowFactory(tableView -> {
            TableRow<Transaction> row = new TableRow<>();
            row.setOnMouseClicked(mouseEvent -> {
                if (!row.isEmpty() && mouseEvent.getButton() == MouseButton.PRIMARY && mouseEvent.getClickCount() == 2)
                {
                    Transaction clickedRow = row.getItem();
                    System.out.println(clickedRow.getName());
                    try
                    {
                        selectTransaction(mouseEvent, clickedRow);
                    }
                    catch (Exception e)
                    {
                        e.printStackTrace();
                    }
                }
            });
            return row;
        });


        for (Transaction transaction: transactions)
        {
            if (transaction.getAccount().equals(account))
            {
                transactionsTable.getItems().add(transaction);
                System.out.println(transaction.getName());
            }
        }
    }

    public void back(ActionEvent actionEvent) throws Exception
    {
        FXMLLoader fxmlLoader = new FXMLLoader(getClass().getResource("SelectAccount.fxml"));

        Scene scene = new Scene(fxmlLoader.load(), 1280, 720);

        Stage stage = (Stage) ((Node)actionEvent.getSource()).getScene().getWindow();
        stage.setScene(scene);
        stage.show();
    }

    public void selectTransaction(MouseEvent mouseEvent, Transaction transaction) throws Exception
    {
        FXMLLoader fxmlLoader = new FXMLLoader(getClass().getResource("TransactionView.fxml"));

        Parent root = (Parent)fxmlLoader.load();
        TransactionViewController controller = fxmlLoader.<TransactionViewController>getController();
        controller.showTransaction(transaction);

        Stage stage = (Stage) ((Node)mouseEvent.getSource()).getScene().getWindow();
        stage.setScene(new Scene(root, 1280, 720));
        stage.show();
    }
}
