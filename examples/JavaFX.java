import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Modality;
import javafx.stage.Stage;
import javafx.stage.Window;

import java.io.IOException;

import static javafx.application.Application.launch;


public class JavaFX extends Application {

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage primaryStage) throws IOException {
        Parent panel = FXMLLoader.load(getClass().getResource("JavaFX.fxml"));
        Scene scene = new Scene(panel, 300, 300);
        primaryStage.setTitle("Hello World!!");
        primaryStage.setScene(scene);


        primaryStage.setResizable(false);
        primaryStage.show();
    }

}
