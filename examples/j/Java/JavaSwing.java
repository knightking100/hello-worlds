import javax.swing.JFrame;
import javax.swing.JLabel;
public class HelloWorld {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setTitle("Hello World");
        frame.add(new JLabel("Hello World!"));
        frame.pack();
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }
}