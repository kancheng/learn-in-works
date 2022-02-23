import javax.swing.*;
import java.awt.*;
public class HelloWorld3 extends JFrame {
    public HelloWorld3() {
        super("Hello, how are you?");
        Container cp = getContentPane();
        cp.setBackground(Color.BLUE);
        setBounds( 100, 100, 300, 200);
        setVisible(true);
    }
    public static void main (String argv[]) {
        HelloWorld3 frame = new HelloWorld3();
    }
}