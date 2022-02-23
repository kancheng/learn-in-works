import javax.swing.*;
import java.awt.*;
public class HelloWorld2 extends JFrame {
    public static void main (String argv[]) {
        HelloWorld2 frame = new HelloWorld2();
        frame.setTitle("Hello, how are you?");
        frame.setBounds(100, 100, 300, 200);
        frame.setVisible(true);
    }
}