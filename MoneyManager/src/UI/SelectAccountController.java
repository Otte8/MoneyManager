package UI;

import Account.Account;
import CSV.CSVReader;
import Transaction.Transaction;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.geometry.Pos;
import javafx.scene.Node;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.AnchorPane;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.RowConstraints;
import javafx.scene.text.Text;
import javafx.stage.Stage;

import java.util.ArrayList;

public class SelectAccountController
{
    CSVReader reader = new CSVReader();
    ArrayList<Account> accounts;
    ArrayList<Button> buttons;

    @FXML
    private AnchorPane pane;

    @FXML
    private AnchorPane innerPane;

    public SelectAccountController()
    {
        reader.readCSVAccountsFile();
        accounts = reader.getAccounts();
    }

    @FXML
    public void initialize()
    {
        int row = 0, column = 0;
        int space = 0;
        double numberOfRows = (double)accounts.size() / 3;

        GridPane gridPane = new GridPane();
        gridPane.setAlignment(Pos.CENTER_LEFT);
        gridPane.setHgap(20);
        gridPane.setVgap(20);
        gridPane.setLayoutX(1280.0/2-170);
        gridPane.setLayoutY(720.0/2-(numberOfRows/2*50));
        pane.getChildren().add(gridPane);

        for (int i = 0; i < accounts.size(); i++)
        {
            Button button = new Button(accounts.get(i).getName());
            int finalI = i;
            button.setOnAction(actionEvent -> {
                try
                {
                    selectAccount(accounts.get(finalI), actionEvent);
                }
                catch (Exception e)
                {
                    e.printStackTrace();
                }
            });

            gridPane.add(button, column, row);

            if (i % 3 == 2)
            {
                column = 0;
                row++;
//                gridPane.addRow(i/3, new Text(""));
            }
            else
            {
                column++;
            }
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
