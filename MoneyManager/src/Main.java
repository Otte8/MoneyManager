import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;

import java.net.URL;

public class Main extends Application
{

    @Override
    public void start(Stage primaryStage) throws Exception
    {
        FXMLLoader fxmlLoader = new FXMLLoader(getClass().getResource("UI/SelectAccount.fxml"));

        Scene scene = new Scene(fxmlLoader.load(), 1280, 720);

        primaryStage.setScene(scene);
        primaryStage.show();
//        Parent root = FXMLLoader.load(getClass().getResource("UI/SelectAccount.fxml"));
//        primaryStage.setTitle("Hello World");
//        primaryStage.setScene(new Scene(root, 1280, 720));
//        primaryStage.show();
    }


    public static void main(String[] args)
    {
        launch(args);
    }
}
