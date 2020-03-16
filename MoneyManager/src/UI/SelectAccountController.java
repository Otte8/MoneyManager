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
import javafx.scene.control.Button;
import javafx.scene.layout.AnchorPane;
import javafx.stage.Stage;

import java.util.ArrayList;

public class SelectAccountController
{
    CSVReader reader = new CSVReader();
    ArrayList<Account> accounts;
    ArrayList<Button> buttons;

    @FXML
    private AnchorPane pane;

    public SelectAccountController()
    {
        reader.readCSVAccountsFile();
        accounts = reader.getAccounts();
    }

    @FXML
    public void initialize()
    {
        int space = 0;
        for (Account account: accounts)
        {
            System.out.println(account.getName());
            Button button = new Button(account.getName());
            button.setLayoutX(183 + space);
            button.setLayoutY(348);
            button.setOnAction(actionEvent -> {
                try
                {
                    selectAccount(account, actionEvent);
                }
                catch (Exception e)
                {
                    e.printStackTrace();
                }
            });
            pane.getChildren().add(button);
//            buttons.add(button);
            space += 200;
        }
    }

    public void selectAccount(Account account, ActionEvent actionEvent) throws Exception
    {
        FXMLLoader fxmlLoader = new FXMLLoader(getClass().getResource("AccountView.fxml"));

        Parent root = (Parent)fxmlLoader.load();
        AccountViewController controller = fxmlLoader.<AccountViewController>getController();
        controller.showTransactions(reader, account);

        Stage stage = (Stage) ((Node)actionEvent.getSource()).getScene().getWindow();
        stage.setScene(new Scene(root, 1280, 720));
        stage.show();
    }
}
