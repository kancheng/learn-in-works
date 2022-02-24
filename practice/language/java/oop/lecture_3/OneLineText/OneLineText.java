import java.awt.*;
import javax.swing.*;
public class OneLineText extends JFrame {
    JTextField firstText;
    JTextField secondText;
    JPasswordField passwordText;
    JPanel panel;
    public OneLineText() {
        super("TextField");
        firstText = new JTextField("First Text Field");
        secondText = new JTextField("Second Text Field");
        passwordText = new JPasswordField("hello", 10);
        firstText.setEditable(false);
        panel = new JPanel();
        setPreferredSize(new Dimension(400, 200));
        panel.add(firstText);
        panel.add(secondText);
        panel.add(passwordText);
        add(panel);
        pack();
        setVisible(true);
    }
    public static void main (String argv[]) {
        new OneLineText();
    }
}