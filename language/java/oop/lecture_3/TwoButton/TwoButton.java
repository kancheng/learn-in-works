import java.awt.*;
import javax.swing.*;
public class TwoButton extends JFrame {
    private JButton left, right, noname;
    private JPanel panel;
    public TwoButton() {
        super("Two Button");
        left = new JButton("Left");
        right = new JButton("right");
        noname = new JButton();
        String name = left.getText() + right.getText();
        noname.setText(name);
        panel = new JPanel();
        setPreferredSize(new Dimension(400, 200));
        panel.add(left);
        panel.add(right);
        panel.add(noname);
        add(panel);
        pack();
        setVisible(true);
    }
    public static void main (String argv[]) {
        new TwoButton();
    }
}